#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    // QApplication 클래스는 GUI Qt 응용 프로그램에 대한 이벤트 루프를 제공합니다.
    // 이 클래스는 GUI 응용 프로그램에서 이벤트 루프를 제공하는 데 사용됩니다.
    QApplication app(argc, argv);

    // 메인 위젯
    QWidget window;

    // 위젯의 크기 조정
    window.resize(250, 150);
    window.setWindowTitle("Simple Example");
    window.show();

    return app.exec();
}
