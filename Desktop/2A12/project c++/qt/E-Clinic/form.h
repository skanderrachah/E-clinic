#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QMediaPlayer>
#include <QDebug>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_sliderProgress_sliderMoved(int position);

    void on_sliderVolume_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void on_positionChanged(qint64 position);
    void on_duartionChanged(qint64 position);


private:
    Ui::Form *ui;
};

#endif // FORM_H
