#ifndef DIALOGINFOPROGRAM_H
#define DIALOGINFOPROGRAM_H

#include <QDialog>

namespace Ui {
class DialogInfoProgram;
}

class DialogInfoProgram : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoProgram(QWidget *parent = nullptr);
    ~DialogInfoProgram();

private:
    Ui::DialogInfoProgram *ui;
};

#endif // DIALOGINFOPROGRAM_H
