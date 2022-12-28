#include <QApplication>
#include <QWidget>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>

class MainWindow:public QWidget{    
public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent): QWidget(parent){
    auto *nameEdit = new QLineEdit(this);
    auto *addrEdit = new QLineEdit(this);
    auto *occpEdit = new QLineEdit(this);

    auto *formLayout = new QFormLayout;
    formLayout -> setLabelAlignment(Qt::AlignRight | Qt::AlignVCenter);
    formLayout -> addRow("Name: ", nameEdit);
    formLayout -> addRow("Email: ", addrEdit);
    formLayout -> addRow("Age: ", occpEdit);

    setLayout(formLayout);
}

int main(int argc, char*argv[])
{
    QApplication app(argc, argv);

    MainWindow window;

    window.setWindowTitle("Form Example");
    window.show();

    return app.exec();
}
