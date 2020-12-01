#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_sliderProgress_sliderMoved(int position)
{

}

void Form::on_sliderVolume_sliderMoved(int position)
{

}

void Form::on_pushButton_clicked()
{

}

void Form::on_pushButton_2_clicked()
{

}

void Form::on_positionChanged(qint64 position)
{

}

void Form::on_duartionChanged(qint64 position)
{

}
