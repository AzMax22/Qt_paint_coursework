#include "DialogInfoImg.h"
#include "ui_dialog_info_img.h"

DialogInfoImg::DialogInfoImg(QWidget *parent,Image_PNG &image) :
    QDialog(parent),
    ui(new Ui::DialogInfoImg)
{
    ui->setupUi(this);
    ui->label->setText("Размер изображения: ширена - " + QString::number(image.getWidth()) +
                       ", высота - " + QString::number(image.getHeight()) + "\n\n" +
                        "Тип цвета: " + image.getTypeColor() + "\n\n" +
                       "Глубина цвета: " + QString::number(image.getBitDepth()) + "\n\n" +
                       "Путь к файлу: " + image.getPathToImg());
}

DialogInfoImg::~DialogInfoImg()
{
    delete ui;
}
