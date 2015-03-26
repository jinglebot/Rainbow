#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    // Set colors
    QPen redpen(Qt::red);
    QPen yellowpen(Qt::yellow);
    QPen greenpen(Qt::green);
    QPen bluepen(Qt::blue);
    QPen whitepen(Qt::white);

    QBrush redbrush(Qt::red, Qt::Dense1Pattern);
    QBrush yellowbrush(Qt::yellow, Qt::Dense1Pattern);
    QBrush greenbrush(Qt::green, Qt::Dense1Pattern);
    QBrush bluebrush(Qt::blue, Qt::Dense1Pattern);
    QBrush whitebrush(Qt::white, Qt::SolidPattern);

    // Set rainbow size
    QRect rect(0, 0, 700, 500);
    painter.fillRect(rect, whitebrush);

    // Draw each bow
    for (int i = 1; i < 6; i++)
    {
        switch (i)
        {
            case 1:
                painter.setPen(redpen);
                painter.setBrush(redbrush);
                break;
            case 2:
                painter.setPen(yellowpen);
                painter.setBrush(yellowbrush);
                break;
            case 3:
                painter.setPen(greenpen);
                painter.setBrush(greenbrush);
                break;
            case 4:
                painter.setPen(bluepen);
                painter.setBrush(bluebrush);
                break;
            default:
                painter.setPen(whitepen);
                painter.setBrush(whitebrush);
                break;
        }
        QRect rect(30, 50*i, 600, 400);
        painter.drawChord(rect, 10*16, 160*16);
    }
}
