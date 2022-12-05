#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtableviewmodel.h"
#include "objectmapf.h"

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<ObjectMapF> *values;
    QTableViewModel *model;
    int newidx;
};
#endif // MAINWINDOW_H
