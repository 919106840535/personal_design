#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bangzhu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool include_pai (QString s);
    bool include_mi (QString s);
    bool include_chengchu (QString s);
    bool include_kuohao(QString s);
public slots:
    void doten_dealstr(QString str);
    void dosixteen_dealstr(QString str);
    void dotwo_dealstr(QString str);
    void deal_kuohao();
    void dealtwo_kuohao();
    void dealsixteen_kuohao();
    void shuang_Check();
    void show_bangzhu();

private:
    Ui::MainWindow *ui;
    bangzhu *bangzhu1;
};

#endif // MAINWINDOW_H
