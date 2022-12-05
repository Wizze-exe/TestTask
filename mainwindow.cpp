#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    values = new QList<ObjectMapF>;

    ObjectMapF object1, object2, object3;
    object1.setMap("test", "key string");
    object2.setMap(10.5, "key double");
    object3.setMap(true, "key bool");

    values->append(object1);

    model = new QTableViewModel();
    model->populate(values);
    this->ui->tableView->setModel(model);

    newidx = 100;
}

MainWindow::~MainWindow()
{
    delete ui;
}

