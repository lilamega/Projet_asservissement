#include "ihm_asservissement.h"
#include "ui_ihm_asservissement.h"

IHM_asservissement::IHM_asservissement(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IHM_asservissement)
{
    ui->setupUi(this);
}

IHM_asservissement::~IHM_asservissement()
{
    delete ui;
}
