#include "mainwindow.h"
#include "loader.hpp"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Loader myLoader((char*)"myDataBase.txt");
    m_listEnglish.push_back("ok");
    m_listEnglish.push_back("pas bon");
    m_listEnglish.push_back("voici");
    m_listEnglish.push_back("wtf?");
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
    cerr << utf8_text << endl;
}

void MainWindow::changeTextLabelEnglishWordRandomly(){

    srand(time(NULL));
    int v1 = rand() % m_listEnglish.size();
    ui->englishWord->setText(QString((char*)m_listEnglish.at(v1)) );
}
