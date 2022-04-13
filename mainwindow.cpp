#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custom.h"
#include "filter.h"
#include "photo.h"

QString DataString, FolderForSave, FileName, cameraMode, zoom, CustomModeText;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CustomMode_clicked()
{
    Custom customWindow;
    customWindow.setModal(true);
    int resoult = customWindow.exec();
    if (resoult == QDialog::Accepted)
    {
        state.iso = customWindow.iso;
    }
}

void MainWindow::on_ChangeFilter_clicked()
{
    Filter filterWindow;
    filterWindow.setModal(true);
    filterWindow.exec();
}

void MainWindow::on_ExitButton_clicked()
{
    this->close();
}




void MainWindow::on_PhotoButton_clicked()
{
    FolderForSave = ui->FolderForSave->text();
    FileName = ui->FileName->text();


    if (ui -> radioButton -> isChecked()){cameraMode = "Простенький";}
    else if(ui -> radioButton_2 -> isChecked()){cameraMode = "Емае(((";}

    if (ui -> radioButton_4 -> isChecked()){zoom = "0.5";}
    else if(ui -> radioButton_5 -> isChecked()){zoom = "1";}
    else if(ui -> radioButton_6 -> isChecked()){zoom = "не мало)";}


    DataString = FolderForSave + FileName + cameraMode + zoom + state.iso;



    Photo scrnMainWindow;
    scrnMainWindow.setModal(true);
    scrnMainWindow.setlabelMainWindow(DataString);
    scrnMainWindow.exec();
}
