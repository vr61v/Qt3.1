#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Params.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_CustomMode_clicked();

    void on_ChangeFilter_clicked();

    void on_ExitButton_clicked();

    void on_PhotoButton_clicked();



private:
    parametry state;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
