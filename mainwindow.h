#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "listfile.h"

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

private:
    Ui::MainWindow *ui;
    int m_indice;
    ListFile *m_dataBase;
    void changeTextLabelEnglishWordRandomly();
};

#endif // MAINWINDOW_H
