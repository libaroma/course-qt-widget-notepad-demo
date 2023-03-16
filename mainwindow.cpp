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

