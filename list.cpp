#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>

class MainWindow: public QWidget{
    public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent): QWidget(parent){
    auto *vbox = new QVBoxLayout();
    auto *hbox = new QHBoxLayout(this);

    auto *lw = new QListWidget(this);

    lw -> addItem("1st");
    lw -> addItem("2nd");
    lw -> addItem("3rd");
    lw -> addItem("4th");
    lw -> addItem("5th");

    auto *add = new QPushButton("Add", this);
    auto *rename = new QPushButton("Rename", this);
    auto *remove = new QPushButton("Remove", this);
    auto *removeall = new QPushButton("Remove ALL", this);

    vbox -> setSpacing(3);
    vbox -> addStretch(1);
    vbox -> addWidget(add);
    vbox -> addWidget(rename);
    vbox -> addWidget(remove);
    vbox -> addWidget(removeall);
    vbox -> addStretch(1);

    hbox -> addWidget(lw);
    hbox -> addSpacing(15);
    hbox -> addLayout(vbox);

    setLayout(hbox);
}

int main(int argc, char*argv[])
{
    QApplication app(argc, argv);

    MainWindow window;

    window.setWindowTitle("Layouts");
    window.show();
    
    return app.exec();
}