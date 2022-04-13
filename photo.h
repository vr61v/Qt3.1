#ifndef PHOTO_H
#define PHOTO_H

#include <QDialog>

namespace Ui {
class Photo;
}

class Photo : public QDialog
{
    Q_OBJECT

public:
    explicit Photo(QWidget *parent = nullptr);
    ~Photo();

    void setlabelMainWindow(const QString &string);
    void setlabelCustom(const QString &string);
    void setlabelFilter(const QString &string);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Photo *ui;
};

#endif // PHOTO_H
