#include "mainwindow.h"
#include "loader.hpp"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_dataBase(new ListFile())
{
    ui->setupUi(this);
    Loader myLoader((char*)"../anglais/myDataBase.txt");
    myLoader.loadFile(m_dataBase);
    changeTextLabelEnglishWordRandomly();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonOk_clicked()
{
    QString str = ui->editTranslate->toPlainText();
    std::string utf8_text = str.toUtf8().constData();
    changeTextLabelEnglishWordRandomly();
}

void MainWindow::changeTextLabelEnglishWordRandomly(){
    ui->englishWord->setText(QString(m_dataBase->getRandomWord().c_str()) );
}
