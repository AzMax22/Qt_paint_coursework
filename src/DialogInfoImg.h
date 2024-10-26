#ifndef DIALOGINFOIMG_H
#define DIALOGINFOIMG_H
#include "Image_PNG.h"

#include <QDialog>

namespace Ui {
class DialogInfoImg;
}

class DialogInfoImg : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoImg(QWidget *parent ,Image_PNG &image);
    ~DialogInfoImg();

private:
    Ui::DialogInfoImg *ui;
};

#endif // DIALOGINFOIMG_H
