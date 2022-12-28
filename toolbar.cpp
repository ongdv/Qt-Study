#include <QMainWindow>
#include <QApplication>
#include <QToolBar>
#include <QIcon>
#include <QAction>

class MainWindow : public QMainWindow {

  public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

  QPixmap newpix("add-file.png");
  QPixmap openpix("open-file-button.png");
  QPixmap quitpix("logout.png");

  QToolBar *toolbar = addToolBar("main toolbar");
  toolbar->addAction(QIcon(newpix), "New File");
  toolbar->addAction(QIcon(openpix), "Open File");
  toolbar->addSeparator();

  QAction *quit = toolbar->addAction(QIcon(quitpix),"Quit Application");

  connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MainWindow window;

  window.resize(350, 250);
  window.setWindowTitle("QToolBar");
  window.show();

  return app.exec();
}
