#include "photo.h"
#include "ui_photo.h"

Photo::Photo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Photo)
{
    ui->setupUi(this);
}

Photo::~Photo()
{
    delete ui;
}

void Photo::setlabelMainWindow(const QString &string)
{
    ui ->DeamMainWindow->setText(string);
}

void Photo::setlabelCustom(const QString &string)
{
    ui ->DeamCustom->setText(string);
}

void Photo::setlabelFilter(const QString &string)
{
    ui ->DeamFilter->setText(string);
}

void Photo::on_pushButton_clicked()
{
    QApplication::quit();
}
