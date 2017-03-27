#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "listfile.h"
#include "loader.hpp"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonOk_clicked();
    void on_buttonAnswer_clicked();
    void on_editTranslate_returnPressed();

    void on_pushButton_clicked();

    void on_lineEditEn_returnPressed();

private:
    Loader *m_myLoader;
    Ui::MainWindow *ui;
    int m_indice;
    ListFile *m_dataBase;
    void changeTextLabelEnglishWordRandomly();
};

#endif // MAINWINDOW_H
