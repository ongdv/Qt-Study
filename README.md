# Qt Study

## Menu

```c++
QPixmap newpix("add-file.png");

QPixmap openpix("open-file-button.png");

QPixmap quitpix("logout.png");
```
메뉴에 보여줄 아이콘을 로드

```c++
auto *newa = new QAction(newpix, "&New", this);

auto *open = new QAction(openpix, "&Open", this);

auto *quit = new QAction(quitpix, "&Quit", this);
```
메뉴에 보여줄 아이콘, 문자열을 지정

```c++
quit->setShortcut(tr("CTRL+Q"));
```
Quit 메뉴에 대한 단축키를 지정합니다. 

```c++
QMenu *file = menuBar()->addMenu("&File");

file->addAction(newa);

file->addAction(open);

file->addSeparator();

file->addAction(quit);
```
메뉴 구성

```c++
qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);
```
 
메뉴에 아이콘이 보이도록합니다. 

```c++
connect(quit, &QAction::triggered, qApp, &QApplication::quit);
```
메뉴에서 Quit 항목이 클릭되면 애플리케이션을 종료하도록 합니다. 