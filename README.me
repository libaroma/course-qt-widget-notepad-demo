用Qt开发Windows桌面应用程序，以Notepad为案例

- Github 项目[【地址】](https://github.com/libaroma/course-qt-widget-notepad-demo)
- 源代码[【下载】](https://files.hyz.cool/files/files/demo_notepad.zip)
  ![Qt开发Windows桌面应用程序](https://files.hyz.cool/files/articles/f5b246c38e4bebc0a1c309e10f4120b9.jfif)

### 00.项目介绍

- **视频教程：** [【Qt开发Windows——Notepad】—— 00.项目介绍]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=1&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 01.安装QT

- **视频教程：** [【Qt开发Windows——Notepad】—— 01.安装QT]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=2&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

- **下载地址**：https://download.qt.io/archive/qt/

### 02.创建项目

- **视频教程：** [【Qt开发Windows——Notepad】—— 02.创建项目]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=3&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 03.文件结构

- **视频教程：** [【Qt开发Windows——Notepad】—— 03.文件结构]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=4&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 04.窗口UI

- **视频教程：** [【Qt开发Windows——Notepad】—— 04.窗口UI]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=5&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 05.窗口图标

- **视频教程：** [【Qt开发Windows——Notepad】—— 05.窗口图标]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=6&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

图标文件[【下载】](https://files.hyz.cool/files/files/6262d3781f03e2bca26bcfe13d8f0851.zip)地址

### 06.创建菜单

- **视频教程：** [【Qt开发Windows——Notepad】——06.创建菜单]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=7&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 07.创建工具栏

- **视频教程：** [【Qt开发Windows——Notepad】—— 07.创建工具栏]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=8&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 08.创建文本框

- **视频教程：** [【Qt开发Windows——Notepad】—— 08.创建文本框]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=9&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 09.创建槽函数

- **视频教程：** [【Qt开发Windows——Notepad】—— 09.创建槽函数]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=10&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 10.编辑槽函数

- **视频教程：** [【Qt开发Windows——Notepad】—— 10.编辑槽函数]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=11&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

### 11.文本框居中

- **视频教程：** [【Qt开发Windows——Notepad】—— 11.文本框居中]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=12&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}
```

### 12.新建文档

- **视频教程：** [【Qt开发Windows——Notepad】—— 12.新建文档]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=13&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.h

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString currentFile;

};
```

```c++
//mainwindow.cpp

//新建文件
void MainWindow::on_new_file_triggered()
{
    qDebug()<<"Start Create New File ...";
    currentFile.clear();
    ui->textEdit->setText("");
}
```

### 13.打开文档

- **视频教程：** [【Qt开发Windows——Notepad】—— 13.打开文档]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=14&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

#include "QFileDialog"
#include "QMessageBox"

//打开文件
void MainWindow::on_open_file_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"打开文件");
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法打开此文件:"+file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}
```

### 14.保存文档

- **视频教程：** [【Qt开发Windows——Notepad】—— 14.保存文档]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=15&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

#include "QFileDialog"
#include "QMessageBox"

//保存文件
void MainWindow::on_save_file_triggered()
{
    QString fileName;
    if(currentFile.isEmpty()){
        fileName =QFileDialog::getSaveFileName(this,"保存文件");
        currentFile =fileName;
    }else{
        fileName =currentFile;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法保存文件:"+file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text =ui->textEdit->toHtml();
    out<<text;
    file.close();
}
```

### 15.另存文档

- **视频教程：** [【Qt开发Windows——Notepad】—— 15.另存文档]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=16&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp


#include "QFileDialog"
#include "QMessageBox"

//另存为
void MainWindow::on_save_as_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,"另存文件");
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法保存文件:"+file.errorString());
        return;
    }
    currentFile =fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text =ui->textEdit->toHtml();
    out<<text;
    file.close();
}
```

### 16.复制粘贴剪切

- **视频教程：** [【Qt开发Windows——Notepad】—— 16.复制粘贴剪切]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=17&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

//复制
void MainWindow::on_copy_triggered()
{
    ui->textEdit->copy();
}

//粘贴
void MainWindow::on_paste_triggered()
{
    ui->textEdit->paste();
}

//剪切
void MainWindow::on_cut_triggered()
{
    ui->textEdit->cut();
}
```

### 17.粗体斜体下划线

- **视频教程：** [【Qt开发Windows——Notepad】—— 17.粗体斜体下划线]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=18&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

//斜体
void MainWindow::on_italics_triggered(bool italics)
{
    ui->textEdit->setFontItalic(italics);
}

//下划线
void MainWindow::on_underline_triggered(bool underline)
{
    ui->textEdit->setFontUnderline(underline);
}

//加粗
void MainWindow::on_bolder_triggered(bool bolder)
{
    ui->textEdit->setFontWeight(bolder?QFont::Bold:QFont::Normal);
}
```

### 18.撤销取消撤销

- **视频教程：** [【Qt开发Windows——Notepad】—— 18.撤销取消撤销]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=19&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

//撤销
void MainWindow::on_undo_triggered()
{
    ui->textEdit->undo();
}

//取消撤销
void MainWindow::on_redo_triggered()
{
    ui->textEdit->redo();
}
```

### 19.字体

- **视频教程：** [【Qt开发Windows——Notepad】—— 19.字体]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=20&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//mainwindow.cpp

#include "QFontDialog"

//字体
void MainWindow::on_font_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected,this);
    if(fontSelected){
        ui->textEdit->setFont(font);
    }
}
```

### 20.打印

- **视频教程：** [【Qt开发Windows——Notepad】—— 20.打印]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=21&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)

```c++
//demo_notepad.pro
qtHaveModule(printsupport): QT+=printsupport

```

```c++
//mainwindow.cpp

#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif
#include <QPrinter>
#endif
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
#if !QT_CONFIG(printer)
    ui->print->setEnabled(false);
#endif
}

//打印
void MainWindow::on_print_triggered()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev,this);
    if(dialog.exec()==QDialog::Rejected)
        return;
#endif
    ui->textEdit->print(&printDev);
#endif
}
```

### 21.关于退出

- **视频教程：** [【Qt开发Windows——Notepad】—— 21.关于退出]( https://www.bilibili.com/video/BV16Y4y1y7iE/?p=22&share_source=copy_web&vd_source=7b61313e652a9e58e9a373dd521bb6d9)


```c++
//关于
void MainWindow::on_about_triggered()
{
    QMessageBox::about(this,"这是我的Notepad！","这是我的Notepad，欢迎学习和使用！");
}


//退出
void MainWindow::on_exit_triggered()
{
    QCoreApplication::exit();
}
```

### 主要部分代码

- mainwindow.h

```c++
//mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_new_file_triggered();

    void on_open_file_triggered();

    void on_save_file_triggered();

    void on_save_as_triggered();

    void on_paste_triggered();

    void on_cut_triggered();

    void on_copy_triggered();

    void on_italics_triggered(bool italics);

    void on_underline_triggered(bool underline);

    void on_bolder_triggered(bool bolder);

    void on_font_triggered();

    void on_about_triggered();

    void on_undo_triggered();

    void on_redo_triggered();

    void on_exit_triggered();

    void on_print_triggered();

    void on_clear_history_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile;

};
#endif // MAINWINDOW_H
```

- mainwindow.cpp

```c++
//mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "QFileDialog"
#include "QMessageBox"
#include "QFontDialog"

#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif
#include <QPrinter>
#endif
#endif


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);

#if !QT_CONFIG(printer)
    ui->print->setEnabled(false);
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

//新建文件
void MainWindow::on_new_file_triggered()
{
    qDebug()<<"Start Create New File ...";
    currentFile.clear();
    ui->textEdit->setText("");
}

//打开文件
void MainWindow::on_open_file_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"打开文件");
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法打开此文件:"+file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


//保存文件
void MainWindow::on_save_file_triggered()
{
    QString fileName;
    if(currentFile.isEmpty()){
        fileName =QFileDialog::getSaveFileName(this,"保存文件");
        currentFile =fileName;
    }else{
        fileName =currentFile;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法保存文件:"+file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text =ui->textEdit->toHtml();
    out<<text;
    file.close();
}

//另存为
void MainWindow::on_save_as_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,"另存文件");
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"警告","无法保存文件:"+file.errorString());
        return;
    }
    currentFile =fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text =ui->textEdit->toHtml();
    out<<text;
    file.close();
}

//复制
void MainWindow::on_copy_triggered()
{
    ui->textEdit->copy();
}

//粘贴
void MainWindow::on_paste_triggered()
{
    ui->textEdit->paste();
}

//剪切
void MainWindow::on_cut_triggered()
{
    ui->textEdit->cut();
}

//斜体
void MainWindow::on_italics_triggered(bool italics)
{
    ui->textEdit->setFontItalic(italics);
}

//下划线
void MainWindow::on_underline_triggered(bool underline)
{
    ui->textEdit->setFontUnderline(underline);
}

//加粗
void MainWindow::on_bolder_triggered(bool bolder)
{
    ui->textEdit->setFontWeight(bolder?QFont::Bold:QFont::Normal);
}

//撤销
void MainWindow::on_undo_triggered()
{
    ui->textEdit->undo();
}

//取消撤销
void MainWindow::on_redo_triggered()
{
    ui->textEdit->redo();
}

//字体
void MainWindow::on_font_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected,this);
    if(fontSelected){
        ui->textEdit->setFont(font);
    }
}

//打印
void MainWindow::on_print_triggered()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev,this);
    if(dialog.exec()==QDialog::Rejected)
        return;
#endif
    ui->textEdit->print(&printDev);
#endif
}

//关于
void MainWindow::on_about_triggered()
{
    QMessageBox::about(this,"这是我的Notepad！","这是我的Notepad，欢迎学习和使用！");
}


//退出
void MainWindow::on_exit_triggered()
{
    QCoreApplication::exit();
}

```

### 资料获取

- 图标文件[【下载】](https://files.hyz.cool/files/files/6262d3781f03e2bca26bcfe13d8f0851.zip)地址
- Github 项目[【地址】](https://github.com/libaroma/course-qt-widget-notepad-demo)
