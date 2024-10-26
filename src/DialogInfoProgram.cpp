#include "DialogInfoProgram.h"
#include "ui_dialog_info_program.h"

DialogInfoProgram::DialogInfoProgram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfoProgram)
{
    ui->setupUi(this);
    ui->label->setText("Автор: Азаров Максим, студент гр.0382\n"
                        "\nУчебное заведение: СПбГЭТУ «ЛЭТИ»\n"
                        "\n         Данная прогрмамма обработки изображения является проектом курсовой работы 2"
                        " семестра и разрабатывалась исключительно в учебных целях.");
}

DialogInfoProgram::~DialogInfoProgram()
{
    delete ui;
}
