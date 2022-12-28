# Qt Study

## Toolbar

```c++
QPixmap newpix("add-file.png");

QPixmap openpix("open-file-button.png");

QPixmap quitpix("logout.png");
```
png 이미지를 로드합니다. 

```c++
QToolBar *toolbar = addToolBar("main toolbar");

toolbar->addAction(QIcon(newpix), "New File");

toolbar->addAction(QIcon(openpix), "Open File");

toolbar->addSeparator();

QAction *quit = toolbar->addAction(QIcon(quitpix),"Quit Application");
```
툴바를 생성하고 아이콘을 추가합니다. 

```c++
connect(quit, &QAction::triggered, qApp, &QApplication::quit);
```
툴바에서 quit 아이콘을 클릭한 경우 애플리케이션을 종료하도록 시그널에 대한 슬롯을 설정해줍니다. 

툴바에 아이콘 추가시 사용하는 addAction의 리턴값을 connect에서 시그널을 감지할 대상으로 지정합니다. 