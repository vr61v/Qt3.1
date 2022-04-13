#ifndef CUSTOM_H
#define CUSTOM_H

#include <QDialog>

namespace Ui {
class Custom;
}

class Custom : public QDialog
{
    Q_OBJECT

public:
    explicit Custom(QWidget *parent = nullptr);
    QString iso, deep, balanceWhite, exposure, all;
    ~Custom();

private slots:
    void on_No_clicked();

    void on_Yes_clicked();

private:
    Ui::Custom *ui;
};

#endif // CUSTOM_H
