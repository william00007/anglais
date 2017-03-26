#include "mainwindow.h"
#include "loader.hpp"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_dataBase(new ListFile()),
    m_indice(-1)
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
    QString str = ui->editTranslate->text();
    std::string utf8_text = str.toUtf8().constData();
    if(utf8_text.compare(m_dataBase->getListFrenchWords().at(m_indice)) == 0){
        cerr << "bonne réponse" << endl;
        changeTextLabelEnglishWordRandomly();
        ui->editTranslate->setText("");
    }
    else{
        cerr << "mauvaise réponse, veuillez réessayer" << endl;
    }
}

void MainWindow::changeTextLabelEnglishWordRandomly(){
    int indice = m_dataBase->getRandomindice();
    while(m_indice==indice)
        indice = m_dataBase->getRandomindice();
    m_indice = indice;
//    m_indice = m_dataBase->getRandomindice();
    ui->englishWord->setText(QString(m_dataBase->getListEnglishWords().at(m_indice).c_str()) );
}



void MainWindow::on_buttonAnswer_clicked()
{
    cerr << m_dataBase->getListFrenchWords().at(m_indice);
    int indice = m_dataBase->getRandomindice();
    if(m_indice==indice) {
        if(indice>m_dataBase->size())
            m_indice = 0;
        else
            m_indice = indice + 1;
    }
    else
        m_indice = indice;
    ui->englishWord->setText(QString(m_dataBase->getListEnglishWords().at(m_indice).c_str()) );
}

void MainWindow::keyPressedEvent(QKeyEvent *event)
{
    std::cout << "Enter has been press" << std::endl;
}
