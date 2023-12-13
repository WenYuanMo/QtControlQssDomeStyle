#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    setWindowFlags(Qt::FramelessWindowHint);    //隐藏标题栏（无边框）
   setAttribute(Qt::WA_StyledBackground);      //启用样式背景绘制
//    setAttribute(Qt::WA_TranslucentBackground); //背景透明





}

MainWindow::~MainWindow()
{
    delete ui;
}

