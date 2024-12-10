#ifndef IHM_ASSERVISSEMENT_H
#define IHM_ASSERVISSEMENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class IHM_asservissement;
}
QT_END_NAMESPACE

class IHM_asservissement : public QMainWindow
{
    Q_OBJECT

public:
    IHM_asservissement(QWidget *parent = nullptr);
    ~IHM_asservissement();

private:
    Ui::IHM_asservissement *ui;
};
#endif // IHM_ASSERVISSEMENT_H
