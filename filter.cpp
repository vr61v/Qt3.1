#include "filter.h"
#include "ui_filter.h"
#include "photo.h"

Filter::Filter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Filter)
{
    ui->setupUi(this);
}

Filter::~Filter()
{
    delete ui;
}

void Filter::on_pushButton_clicked()
{
    this->close();
}


void Filter::on_Ok_clicked()
{
    QString cangeFilter;
    if (ui -> radioButton_4 -> isChecked()){cangeFilter = "Чб";}
    else if(ui -> radioButton_5 -> isChecked()){cangeFilter = "Прикольный такой))";}
    else if(ui -> radioButton_6 -> isChecked()){cangeFilter = "Психоделический";}

    Photo scrnPhoto;
    scrnPhoto.setModal(true);
    scrnPhoto.setlabelFilter(cangeFilter);
    scrnPhoto.exec();
}

