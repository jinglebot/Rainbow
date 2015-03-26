/*
 * File: Rainbow.cpp
 * -------------------
 * Name: jinglebot
 * Date started: March 11, 2015
 * Date finished : March 11, 2015
 *
 *
 * The program draws a rainbow on the screen.
 *
 */

#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
