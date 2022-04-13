#include "custom.h"
#include "ui_custom.h"
#include "photo.h"

Custom::Custom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Custom)
{
    ui->setupUi(this);
}

Custom::~Custom()
{
    delete ui;
}

void Custom::on_No_clicked()
{
    this->close();
}

void Custom::on_Yes_clicked()
{
    if (ui -> radioButton_4 -> isChecked()){iso = "100";}
    else if(ui -> radioButton_5 -> isChecked()){iso = "300";}
    else if(ui -> radioButton_6 -> isChecked()){iso = "500";}

    if (ui -> radioButton_7 -> isChecked()){deep = "0.5";}
    else if(ui -> radioButton_8 -> isChecked()){deep = "1";}
    else if(ui -> radioButton_9 -> isChecked()){deep = "не мало))";}

    if (ui -> radioButton_10 -> isChecked()){balanceWhite = "белый";}
    else if(ui -> radioButton_11 -> isChecked()){balanceWhite = "серый";}
    else if(ui -> radioButton_12 -> isChecked()){balanceWhite = "черный))";}

    exposure = ui->Vidergka->text();

    all = iso + deep + balanceWhite + exposure;

    /*Photo scrnCustom;
    scrnCustom.setModal(true);
    scrnCustom.setlabelCustom(all);
    scrnCustom.exec();*/

    this -> accept();
}

