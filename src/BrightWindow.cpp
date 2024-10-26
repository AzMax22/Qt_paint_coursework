#include "BrightWindow.h"
#include "ui_bright_window.h"
#include "QMessageBox"

BrightWindow::BrightWindow(QWidget *parent, Image_PNG &image) :
    QDialog(parent),
    ui(new Ui::BrightWindow), m_image(image)
{
    ui->setupUi(this);

}

BrightWindow::~BrightWindow()
{
    delete ui;
}

void BrightWindow::on_buttonBox_rejected()
{
    close();
}


void BrightWindow::on_buttonBox_accepted()
{
    bool flag_ok;
    QString s_coef_bright = ui->bright_edit->text();


    if (s_coef_bright == ""){
        QMessageBox::warning(nullptr,"Oшибка","Вы не ввели все значения");
        return;
    }

    float coef_bright = s_coef_bright.toFloat(&flag_ok);


    if (flag_ok == false || coef_bright < 0){
        QMessageBox::warning(nullptr,"Oшибка","Ведите значения поля дробным числом больше 0");
        return;
    }

    m_image.changeBright(coef_bright);

    close();

}

