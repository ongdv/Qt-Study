# Qt Study

## Simple GUI

```c++
#include <QApplication>
#include <QWidget>
```
Qt 응용프로그램 클래스 불러오기

```c++
// QApplication 클래스는 GUI Qt 응용 프로그램에 대한 이벤트 루프를 제공합니다.
// 이 클래스는 GUI 응용 프로그램에서 이벤트 루프를 제공하는 데 사용됩니다.
QApplication app(argc, argv);

// 메인 위젯
QWidget window;

// 위젯의 크기 조정, 타이틀 지정, 창 띄우기
window.resize(250, 150);
window.setWindowTitle("Simple Example");
window.show();

// 어플리케이션 메인 루프 진행
return app.exec();
```
}

Main 코드 작성 후 pro파일에 Qt의 위젯을 사용하기 위한 코드 추가

```
<!-- 중략 -->
QT += widgets
```


qmake -> make 후 실행