#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>


class MainWindow : public QWidget {

  public:
    MainWindow(QWidget *parent = nullptr);

    void OnPlus();
    void OnMinus();

  private:
    QLabel *label;
};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent) {

  auto *plusButton = new QPushButton("+", this);
  auto *minusButton = new QPushButton("-", this);
  label = new QLabel("0", this);

  auto *grid = new QGridLayout(this);
  grid->addWidget(plusButton, 0, 0);
  grid->addWidget(minusButton, 0, 1);
  grid->addWidget(label, 1, 1);

  setLayout(grid);

  connect(plusButton, &QPushButton::clicked, this, &MainWindow::OnPlus);
  connect(minusButton, &QPushButton::clicked, this, &MainWindow::OnMinus);
}

void MainWindow::OnPlus() {

  int value = label->text().toInt();
  value++;
  label->setText(QString::number(value));
}

void MainWindow::OnMinus() {

  int value = label->text().toInt();
  value--;
  label->setText(QString::number(value));
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  MainWindow window;

  window.resize(300, 190);
  window.setWindowTitle("Plus minus");
  window.show();

  return app.exec();
}