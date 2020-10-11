#ifndef BANGZHU_H
#define BANGZHU_H

#include <QWidget>

namespace Ui {
class bangzhu;
}

class bangzhu : public QWidget
{
    Q_OBJECT

public:
    explicit bangzhu(QWidget *parent = 0);
    ~bangzhu();

private:
    Ui::bangzhu *ui;
};

#endif // BANGZHU_H
