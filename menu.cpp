#include <QMainWindow>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>

class MainWindow : public QMainWindow {

  public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

  QPixmap newpix("add-file.png");
  QPixmap openpix("open-file-button.png");
  QPixmap quitpix("logout.png");

  auto *newa = new QAction(newpix, "&New", this);
  auto *open = new QAction(openpix, "&Open", this);
  auto *quit = new QAction(quitpix, "&Quit", this);
  quit->setShortcut(tr("CTRL+Q"));

  QMenu *file = menuBar()->addMenu("&File");
  file->addAction(newa);
  file->addAction(open);
  file->addSeparator();
  file->addAction(quit);

  qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

  connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MainWindow window;

  window.resize(350, 250);
  window.setWindowTitle("Another menu");
  window.show();

  return app.exec();
}
