#ifndef BRIGHTWINDOW_H
#define BRIGHTWINDOW_H

#include <QDialog>
#include "Image_PNG.h"

namespace Ui {
class BrightWindow;
}

class BrightWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BrightWindow(QWidget *parent, Image_PNG &image);
    ~BrightWindow();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::BrightWindow *ui;
    Image_PNG &m_image;
};

#endif // BRIGHTWINDOW_H
