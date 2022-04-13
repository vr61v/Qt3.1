#ifndef FILTER_H
#define FILTER_H

#include <QDialog>

namespace Ui {
class Filter;
}

class Filter : public QDialog
{
    Q_OBJECT

public:
    explicit Filter(QWidget *parent = nullptr);
    ~Filter();

private slots:
    void on_pushButton_clicked();

    void on_Ok_clicked();

private:
    Ui::Filter *ui;
};

#endif // FILTER_H
