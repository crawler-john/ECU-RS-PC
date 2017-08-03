#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rsclient.h"

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
    void on_btn_addID_clicked();

    void on_btn_AddDevice_clicked();

    void on_btn_SetChannel_clicked();

    void on_btn_setPasswd_clicked();

    void on_btn_SetID_clicked();

    void on_btn_getSystem_clicked();

private:
    Ui::MainWindow *ui;
    RSClient *ECU_RSClient;
    char ECUID[13];
};

#endif // MAINWINDOW_H
