#include <QApplication>
#include <QWidget>
#include <QPushButton>

// QWidget 클래스를 상속한 MainWindow 클래스를 정의
class MainWindow: public QWidget
{
    // 생성자 함수에서 UI를 구성하여 MainWindow 객체가 생성되면 UI가 바로 구성되도록 함
    public:
    MainWindow(QWidget *parent = nullptr);
};

MainWindow::MainWindow(QWidget *parent): QWidget(parent)
{
    // QPushButton 객체를 하나 생성하여 배치합니다. 
    // MainWindow 클래스가 QWidget 클래스를 상속받았기 때문에 QPushButton 객체를 선언하여 사용할 수 있습니다.  
    QPushButton *quitBtn = new QPushButton("Quit", this);
    quitBtn ->setGeometry(50, 40, 75, 30);


    //  버튼(quitBtn)를 클릭하면 QPushButton::clicked 시그널(SIGNAL)이 발생하며 이때 지정한 슬롯(SLOT)이 수행됩니다. 
    // 여기에서는 애플리케이션 객체(qApp)의 QApplication::quit로 지정되어 애플리케이션을 종료하도록 합니다. 
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;

    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();

    return app.exec();
}
