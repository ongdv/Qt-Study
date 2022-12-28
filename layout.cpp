#include <QWidget>
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>

class MainWindow: public QWidget
{
public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent): QWidget(parent)
{
    auto *vbox = new QVBoxLayout(this);
    vbox -> setSpacing(1);

    auto *settings = new QPushButton("Settings", this);
    settings -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *accounts = new QPushButton("Accounts", this);
    accounts -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *loans = new QPushButton("Loans", this);
    loans -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *cash = new QPushButton("Cash", this);
    cash -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *debts = new QPushButton("Debts", this);
    debts -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox -> addWidget(settings);
    vbox -> addWidget(accounts);
    vbox -> addWidget(loans);
    vbox -> addWidget(cash);
    vbox -> addWidget(debts);

    setLayout(vbox);
}

int main(int argc, char*argv[])
{
    QApplication app (argc, argv);

    MainWindow window;

    window.resize(240, 230);
    window.setWindowTitle("VerticalBox");
    window.show();

    return app.exec();
}
