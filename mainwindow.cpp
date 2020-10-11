#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bangzhu.h"
#include <QAction>
#include <QDebug>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QRadioButton>
#include <QDialog>
QString str="0";
QString str1="0";
QString deal="0";
QString deal1="";
QString str2[100];
QString strdeal[100];
QString fuhao="";
QString r="";
QString s1="";
QString s2="";
QString sr="";
QString a1;QString a2;QString a3;QString a4;QString a5;
QString x1;QString x2;QString x3;QString x4;QString x5;
QString b1;QString b3;
QString c3;
QString Y1;QString Y2;QString Y3;QString Y4;QString Y5;
int stemp1;
int stemp2;
int stempr;
int flag=0;
int shu=0;
double temp;
double temp1;
double rs=0;
double pi=3.1415926;
int change;
int change1;
int change2;
int rsu;
bool ok;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    for(int i=0;i<100;i++){
    str2[i]="";}
    QPixmap pixmap("://butten/beijing.png");
    QPalette palette=this->palette();
    palette.setBrush(QPalette::Background,QBrush(pixmap));
    this->setPalette(palette);
    setFixedSize(580,542);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);
    ui->lineEdit->setText(str);
        //0
    ui->pushButton_0->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/0.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light10.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light20.png);"
                                    "}");
    //1
    ui->pushButton_1->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/1.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light11.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light21.png);"
                                    "}");
    //2
    ui->pushButton_2->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/2.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light12.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light22.png);"
                                    "}");
    //3
    ui->pushButton_3->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/3.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light13.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light23.png);"
                                    "}");
    //4
    ui->pushButton_4->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/4.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light14.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light24.png);"
                                    "}");
    //5
    ui->pushButton_5->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/5.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light15.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light25.png);"
                                    "}");
    //6
    ui->pushButton_6->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/6.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light16.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light26.png);"
                                    "}");
    //7
    ui->pushButton_7->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/7.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light17.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light27.png);"
                                    "}");
    //8
    ui->pushButton_8->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/8.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light18.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light28.png);"
                                    "}");
    //9
    ui->pushButton_9->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/9.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light19.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light29.png);"
                                    "}");
    ///
    ui->pushButton_chu->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/chu.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1chu.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2chu.png);"
                                    "}");
    //*
    ui->pushButton_cheng->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/chengfa.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1chengfa.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2chengfa.png);"
                                    "}");
    //-
    ui->pushButton_jian->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/jianfa.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1jianfa.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2jianfa.png);"
                                    "}");
    //+
    ui->pushButton_jia->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/jiafa.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1jiafa.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2jiafa.png);"
                                    "}");
    //.
    ui->pushButton_dian->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/dian.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1dian.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2dian.png);"
                                    "}");
    //=
    ui->pushButton_dengyu->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/dengyu.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1dengyu.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2dengyu.png);"
                                    "}");
    //<-
    ui->pushButton_back->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/back2.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1back2.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2back2.png);"
                                    "}");
    //pai
    ui->pushButton_pai->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/pai.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1pai.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2pai.png);"
                                    "}");
    //ce
    ui->pushButton_ce->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/ce.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1ce.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2ce.png);"
                                    "}");
    //公约数
    ui->pushButton_gongyue->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/公约数.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1公约数.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2公约数.png);"
                                    "}");
    //公倍数
    ui->pushButton_gongbei->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/最小公倍数.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1最小公倍数.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2最小公倍数.png);"
                                    "}");
    //min
    ui->pushButton_min->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/min.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1min.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2min.png);"
                                    "}");
    //max
    ui->pushButton_max->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/max.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1max.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2max.png);"
                                    "}");
    //hanshu ce
    ui->pushButton_cehanshu->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/ce.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1ce.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2ce.png);"
                                    "}");
    //shuangshu ce
        ui->pushButton_ceshuang->setStyleSheet("QPushButton{"
                                        "border-image:url(://butten/ce.png);"
                                        "}"
                                        "QPushButton:hover{"
                                        "border-image:url(://butten/light1ce.png);"
                                        "}"
                                        "QPushButton:pressed{"
                                        "border-image:url(://butten/light2ce.png);"
                                        "}");

    //hanshu dengyu1
    ui->pushButton_dengyu1->setStyleSheet("QPushButton{"
                                          "border-image:url(://butten/dengyu.png);"
                                          "}"
                                          "QPushButton:hover{"
                                          "border-image:url(://butten/light1dengyu.png);"
                                          "}"
                                          "QPushButton:pressed{"
                                          "border-image:url(://butten/light2dengyu.png);"
                                          "}");
    //hanshu dengyu2
    ui->pushButton_dengyu2->setStyleSheet("QPushButton{"
                                          "border-image:url(://butten/dengyu.png);"
                                          "}"
                                          "QPushButton:hover{"
                                          "border-image:url(://butten/light1dengyu.png);"
                                          "}"
                                          "QPushButton:pressed{"
                                          "border-image:url(://butten/light2dengyu.png);"
                                          "}");
    //hanshu dengyu3
    ui->pushButton_dengyu3->setStyleSheet("QPushButton{"
                                          "border-image:url(://butten/dengyu.png);"
                                          "}"
                                          "QPushButton:hover{"
                                          "border-image:url(://butten/light1dengyu.png);"
                                          "}"
                                          "QPushButton:pressed{"
                                          "border-image:url(://butten/light2dengyu.png);"
                                          "}");
    //hanshu dengyu4
    ui->pushButton_dengyu4->setStyleSheet("QPushButton{"
                                          "border-image:url(://butten/dengyu.png);"
                                          "}"
                                          "QPushButton:hover{"
                                          "border-image:url(://butten/light1dengyu.png);"
                                          "}"
                                          "QPushButton:pressed{"
                                          "border-image:url(://butten/light2dengyu.png);"
                                          "}");
    //hanshu dengyu5
    ui->pushButton_dengyu5->setStyleSheet("QPushButton{"
                                          "border-image:url(://butten/dengyu.png);"
                                          "}"
                                          "QPushButton:hover{"
                                          "border-image:url(://butten/light1dengyu.png);"
                                          "}"
                                          "QPushButton:pressed{"
                                          "border-image:url(://butten/light2dengyu.png);"
                                          "}");
    //lg

    ui->pushButton_lg->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/lg.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1lg.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2lg.png);"
                                    "}");
    //ln

    ui->pushButton_ln->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/ln.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1ln.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2ln.png);"
                                    "}");
    //^

    ui->pushButton_chengmi->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/chengmi.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1chengmi.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2chengmi.png);"
                                    "}");
    //sin

    ui->pushButton_sin->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/sin.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1sin.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2sin.png);"
                                    "}");
    //cos

    ui->pushButton_cos->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/cos.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1cos.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2cos.png);"
                                    "}");
    //tan

    ui->pushButton_tan->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/tan.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1tan.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2tan.png);"
                                    "}");
    //a
    ui->pushButton_10->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/a.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1a.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2a.png);"
                                    "}");
    //b
    ui->pushButton_11->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/b.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1b.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2b.png);"
                                    "}");

    //c
    ui->pushButton_12->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/c.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1c.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2c.png);"
                                    "}");
    //d
    ui->pushButton_13->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/d.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1d.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2d.png);"
                                    "}");
    //e

    ui->pushButton_14->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/e.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1e.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2e.png);"
                                    "}");
    //f
    ui->pushButton_15->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/f.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1f.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2f.png);"
                                    "}");
    //(
    ui->pushButton_lkuo->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/lkuo.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1lkuo.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2lkuo.png);"
                                    "}");

    //)
    ui->pushButton_rkuo->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/rkuo.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1rkuo.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2rkuo.png);"
                                    "}");
    //帮助
    ui->pushButton_bangzhu->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/bangzhu.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light1帮助.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light2帮助.png);"
                                    "}");
   ui->tips1->setStyleSheet("QLabel{border-image: url(://butten/常规计算.png);}");
   ui->tips2->setStyleSheet("QLabel{border-image: url(://butten/双数计算.png);}");
   ui->tips3->setStyleSheet("QLabel{border-image: url(://butten/函数计算.png);}");
   ui->label_bang->setStyleSheet("QLabel{border-image: url(://butten/帮助1.png);}");
    QAction *p1= ui->action_1;
     QAction *p2= ui->actionsha;
      QAction *p3= ui->actiona;
      ui->label_bang->show();
      ui->label->hide();
      ui->lineEdit_5->hide();
      ui->lineEdit_3->hide();
      ui->lineEdit_4->hide();
      ui->radioButton->hide();
      ui->radioButton_3->hide();
      ui->radioButton_4->hide();
      ui->radioButton_5->hide();
      ui->radioButton_6->hide();
      ui->radioButton_7->hide();
      ui->pushButton_gongyue->hide();
      ui->pushButton_gongbei->hide();
      ui->pushButton_min->hide();
      ui->pushButton_max->hide();
      ui->pushButton_ceshuang ->hide();
      ui->frame_5->hide();


  //常规计算 点击
    connect(p1,&QAction::triggered,
            [=](){
        ui->tips1->show();
        ui->tips2->hide();
        ui->tips3->hide();
        ui->label->hide();
        ui->lineEdit_5->hide();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->radioButton->hide();
        ui->radioButton_3->hide();
        ui->radioButton_4->hide();
        ui->radioButton_5->hide();
        ui->radioButton_6->hide();
        ui->radioButton_7->hide();
        ui->pushButton_gongyue->hide();
        ui->pushButton_gongbei->hide();
        ui->pushButton_ceshuang ->hide();
        ui->pushButton_min->hide();
        ui->pushButton_max->hide();
        ui->pushButton_jia->show();
        ui->pushButton_jian->show();
        ui->pushButton_cheng->show();
        ui->pushButton_chu->show();
        ui->pushButton_chengmi->show();
        ui->pushButton_sin->show();
        ui->pushButton_cos->show();
        ui->pushButton_tan->show();
        ui->pushButton_ln->show();
        ui->pushButton_lg->show();
        ui->pushButton_pai->show();
        ui->pushButton_lkuo->show();
        ui->pushButton_rkuo->show();
        ui->pushButton_ce->show();
        ui->lineEdit->show();
        ui->lineEdit_2->show();
        ui->radioButton_2->show();
        ui->radioButton_10->show();
        ui->radioButton_16->show();
        ui->pushButton_1->show();
        ui->pushButton_2->show();
        ui->pushButton_3->show();
        ui->pushButton_4->show();
        ui->pushButton_5->show();
        ui->pushButton_6->show();
        ui->pushButton_7->show();
        ui->pushButton_8->show();
        ui->pushButton_9->show();
        ui->pushButton_0->show();
        ui->pushButton_dian->show();
        ui->pushButton_back->show();
        ui->pushButton_dengyu->show();
        ui->pushButton_10->show();
        ui->pushButton_11->show();
        ui->pushButton_12->show();
        ui->pushButton_13->show();
        ui->pushButton_14->show();
        ui->pushButton_15->show();
        ui->frame_5->hide();

    }
    );
    //双数计算 点击
    connect(p2,&QAction::triggered,
            [=](){
        ui->tips1->hide();
        ui->tips2->show();
        ui->tips3->hide();
        ui->label->show();
        ui->lineEdit_5->show();
        ui->lineEdit_3->show();
        ui->lineEdit_4->show();
        ui->radioButton->show();
        ui->radioButton_3->show();
        ui->radioButton_4->show();
        ui->radioButton_5->show();
        ui->radioButton_6->show();
        ui->radioButton_7->show();
        ui->pushButton_gongyue->show();
        ui->pushButton_gongbei->show();
        ui->pushButton_min->show();
        ui->pushButton_max->show();
        ui->pushButton_ceshuang ->show();
        ui->pushButton_15->hide();
        ui->pushButton_jia->hide();
        ui->pushButton_jian->hide();
        ui->pushButton_cheng->hide();
        ui->pushButton_chu->hide();
        ui->pushButton_chengmi->hide();
        ui->pushButton_sin->hide();
        ui->pushButton_cos->hide();
        ui->pushButton_tan->hide();
        ui->pushButton_ln->hide();
        ui->pushButton_lg->hide();
        ui->pushButton_pai->hide();
        ui->pushButton_lkuo->hide();
        ui->pushButton_rkuo->hide();
        ui->pushButton_ce->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->radioButton_2->hide();
        ui->radioButton_10->hide();
        ui->radioButton_16->hide();
        ui->pushButton_1->hide();
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->pushButton_5->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        ui->pushButton_8->hide();
        ui->pushButton_9->hide();
        ui->pushButton_0->hide();
        ui->pushButton_dian->hide();
        ui->pushButton_back->hide();
        ui->pushButton_dengyu->hide();
        ui->frame_5->hide();
        ui->pushButton_10->hide();
        ui->pushButton_11->hide();
        ui->pushButton_12->hide();
        ui->pushButton_13->hide();
        ui->pushButton_14->hide();
        ui->pushButton_15->hide();




    }
    );
    //函数计算 点击
    connect(p3,&QAction::triggered,
            [=](){
        ui->tips1->hide();
        ui->tips2->hide();
        ui->tips3->show();
        ui->frame_5->show();
        ui->label->hide();
        ui->lineEdit_5->hide();
        ui->lineEdit_3->hide();
        ui->lineEdit_4->hide();
        ui->radioButton->hide();
        ui->radioButton_3->hide();
        ui->radioButton_4->hide();
        ui->radioButton_5->hide();
        ui->radioButton_6->hide();
        ui->radioButton_7->hide();
        ui->pushButton_gongyue->hide();
        ui->pushButton_gongbei->hide();
        ui->pushButton_min->hide();
        ui->pushButton_max->hide();
        ui->pushButton_ceshuang ->hide();
        ui->pushButton_jia->hide();
        ui->pushButton_jian->hide();
        ui->pushButton_cheng->hide();
        ui->pushButton_chu->hide();
        ui->pushButton_chengmi->hide();
        ui->pushButton_sin->hide();
        ui->pushButton_cos->hide();
        ui->pushButton_tan->hide();
        ui->pushButton_ln->hide();
        ui->pushButton_lg->hide();
        ui->pushButton_pai->hide();
        ui->pushButton_lkuo->hide();
        ui->pushButton_rkuo->hide();
        ui->pushButton_ce->hide();
        ui->lineEdit->hide();
        ui->lineEdit_2->hide();
        ui->radioButton_2->hide();
        ui->radioButton_10->hide();
        ui->radioButton_16->hide();
        ui->pushButton_1->hide();
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->pushButton_5->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        ui->pushButton_8->hide();
        ui->pushButton_9->hide();
        ui->pushButton_0->hide();
        ui->pushButton_dian->hide();
        ui->pushButton_back->hide();
        ui->pushButton_dengyu->hide();

        ui->pushButton_10->hide();
        ui->pushButton_11->hide();
        ui->pushButton_12->hide();
        ui->pushButton_13->hide();
        ui->pushButton_14->hide();
        ui->pushButton_15->hide();

    }
    );
    //按下帮助
        QPushButton *p4= ui->pushButton_bangzhu;
        connect(p4,&QPushButton::pressed,[=](){
        show_bangzhu();
        });
    //按下等于1
    QPushButton *pyici=ui->pushButton_dengyu1;
    connect(pyici,&QPushButton::pressed,[=](){
        a1=ui->lineEdit_a1->text();
        b1=ui->lineEdit_b1->text();
        x1=ui->lineEdit_x1->text();
        double a,b,x,y;
        a=a1.toDouble();
        b=b1.toDouble();
        x=x1.toDouble();
        y=a*x+b;
        Y1=QString::number(y,10,4);
        ui->lineEdit_y1->setText(Y1);
    });
    //按下等于2
    QPushButton *pfan=ui->pushButton_dengyu2;
    connect(pfan,&QPushButton::pressed,[=](){
        a2=ui->lineEdit_a2->text();
        x2=ui->lineEdit_x2->text();
        double a,x,y;
        a=a2.toDouble();
        x=x2.toDouble();
        y=a/x;
        Y2=QString::number(y,10,4);
        ui->lineEdit_y2->setText(Y2);
    });
    //按下等于3
    QPushButton *perci=ui->pushButton_dengyu3;
    connect(perci,&QPushButton::pressed,[=](){
        a3=ui->lineEdit_a3->text();
        b3=ui->lineEdit_b3->text();
        c3=ui->lineEdit_c3->text();
        x3=ui->lineEdit_x3->text();
        double a,b,c,x,y;
        a=a3.toDouble();
        b=b3.toDouble();
        c=c3.toDouble();
        x=x3.toDouble();
        y=a*x*x+b*x+c;
        Y3=QString::number(y,10,4);
        ui->lineEdit_y3->setText(Y3);
    });
    //按下等于4
    QPushButton *pmihanshu=ui->pushButton_dengyu4;
    connect(pmihanshu,&QPushButton::pressed,[=](){
        a4=ui->lineEdit_a4->text();

        x4=ui->lineEdit_x4->text();
        double x,y;
        int a;
        a=a4.toInt();

        x=x4.toDouble();
        y=1;
        for(int i=0;i<a;i++){
            y=y*x;
        }
        Y4=QString::number(y,10,4);
        ui->lineEdit_y4->setText(Y4);
    });
    //按下等于5
    QPushButton *pduishuhanshu=ui->pushButton_dengyu5;
    connect(pduishuhanshu,&QPushButton::pressed,[=](){
        a5=ui->lineEdit_a5->text();

        x5=ui->lineEdit_x5->text();
        double a,x,y;
        a=a5.toDouble();

        x=x5.toDouble();
        y=log(x)/log(a);
        Y5=QString::number(y,10,4);
        ui->lineEdit_y5->setText(Y5);
    });
    //按下cehanshu
    QPushButton *pcehanshu=ui->pushButton_cehanshu;
    connect(pcehanshu,&QPushButton::pressed,[=](){
        ui->lineEdit_a1->setText("");
        ui->lineEdit_a2->setText("");
        ui->lineEdit_a3->setText("");
        ui->lineEdit_a4->setText("");
        ui->lineEdit_a5->setText("");
        ui->lineEdit_b1->setText("");
        ui->lineEdit_b3->setText("");
        ui->lineEdit_c3->setText("");
        ui->lineEdit_y1->setText("");
        ui->lineEdit_y2->setText("");
        ui->lineEdit_y3->setText("");
        ui->lineEdit_y4->setText("");
        ui->lineEdit_y5->setText("");
        ui->lineEdit_x1->setText("");
        ui->lineEdit_x2->setText("");
        ui->lineEdit_x3->setText("");
        ui->lineEdit_x4->setText("");
        ui->lineEdit_x5->setText("");

    });
    //按下ceshuang
     QPushButton *pceshuang=ui->pushButton_ceshuang;
     connect(pceshuang,&QPushButton::pressed,[=](){
        stemp1=0;
        stemp2=0;
        s1="";
        s2="";
        sr="";
        ui->lineEdit_3->setText(s1);
        ui->lineEdit_4->setText(s2);
        ui->lineEdit_5->setText(sr);
     });
    //按下公倍数
    QPushButton *pgongbei=ui->pushButton_gongbei;
    connect(pgongbei,&QPushButton::pressed,[=](){
        shuang_Check();
        int min,m;
        if(stemp1<stemp2)
                min=stemp1;
            else
                min=stemp2;

        for(int i=min;i>0;i--){
            if(stemp1%i==0&&stemp2%i==0){
              m=i;
               break;
            }
        }
        m=stemp1*stemp2/m;
        sr=QString::number(m,10);
        ui->lineEdit_5->setText(sr);
                sr="";
    });
    //按下公约数
    QPushButton *pgongyue=ui->pushButton_gongyue;
    connect(pgongyue,&QPushButton::pressed,[=](){
        shuang_Check();
        int min;
        if(stemp1<stemp2)
                min=stemp1;
            else
                min=stemp2;
        for(int i=1;i<=min;i++){
            if(stemp1%i==0&&stemp2%i==0){

                sr=sr+QString::number(i,10);
                sr=sr+" ";
            }
        }
        ui->lineEdit_5->setText(sr);
                sr="";
    });
    //按下min

    QPushButton *pmin = ui->pushButton_min;
    connect(pmin,&QPushButton::pressed,[=](){
        shuang_Check();

        if(stemp1<stemp2)
            ui->lineEdit_5->setText(s1);

        else
            ui->lineEdit_5->setText(s2);



    });
    //按下max
    QPushButton *pmax = ui->pushButton_max;
    connect(pmax,&QPushButton::pressed,[=](){
        shuang_Check();

        if(stemp1>stemp2)
            ui->lineEdit_5->setText(s1);

        else
           ui->lineEdit_5->setText(s2);



    });
    //按下0
    QPushButton *p0 = ui->pushButton_0;

    connect(p0,&QPushButton::pressed,
            [=](){
        if(str[str.size()-1]=='/')
        {
                str="error";
                 ui->lineEdit->setText(str);

    }

     if(!(str[str.size()-1]=='r'))
      {
         if(str=="0"){
             str="0";
         }
         else
    {    str.append("0");
        ui->lineEdit->setText(str);
     }
     }

    }
            );
    //按下 1

    QPushButton *pb1 = ui->pushButton_1;

    connect(pb1,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {
            if(str=="0"){

                str.chop(1);
            }

        str.append("1");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下2
    QPushButton *pb2 = ui->pushButton_2;

    connect(pb2,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("2");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下3
    QPushButton *pb3 = ui->pushButton_3;

    connect(pb3,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("3");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下4
    QPushButton *pb4 = ui->pushButton_4;

    connect(pb4,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("4");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下5
    QPushButton *pb5 = ui->pushButton_5;

    connect(pb5,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("5");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下6
    QPushButton *pb6 = ui->pushButton_6;

    connect(pb6,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("6");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下7
    QPushButton *pb7 = ui->pushButton_7;

    connect(pb7,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("7");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下8
    QPushButton *pb8 = ui->pushButton_8;

    connect(pb8,&QPushButton::pressed,
            [=](){if(str=="0"){

            str.chop(1);
        }

        if(!(str[str.size()-1]=='r'))
         {
        str.append("8");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下9
    QPushButton *pb9 = ui->pushButton_9;

    connect(pb9,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("9");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下a
    QPushButton *pba = ui->pushButton_10;

    connect(pba,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("a");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下b
    QPushButton *pbb= ui->pushButton_11;

    connect(pbb,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
            if(str=="0"){

                            str.chop(1);
                        }
        str.append("b");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下c
    QPushButton *pbc = ui->pushButton_12;

    connect(pbc,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("c");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下d
    QPushButton *pbd = ui->pushButton_13;

    connect(pbd,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }

        str.append("d");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下e
    QPushButton *pbe = ui->pushButton_14;

    connect(pbe,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("e");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下f
    QPushButton *pbf = ui->pushButton_15;

    connect(pbf,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str=="0"){

                str.chop(1);
            }
        str.append("f");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下ln
    QPushButton *pbln = ui->pushButton_ln;

    connect(pbln,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("ln");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下lg
    QPushButton *pblg = ui->pushButton_lg;

    connect(pblg,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("lg");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下^
    QPushButton *pbmi = ui->pushButton_chengmi;

    connect(pbmi,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='^'||str[str.size()-1]=='+'||str[str.size()-1]=='-'||str[str.size()-1]=='*'||str[str.size()-1]=='/')
            {
                str.chop(1);

            }
        str.append("^");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下sin
    QPushButton *pbsin = ui->pushButton_sin;

    connect(pbsin,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("sin");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下cos
    QPushButton *pbcos = ui->pushButton_cos;

    connect(pbcos,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("cos");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下tan
    QPushButton *pbtan = ui->pushButton_tan;

    connect(pbtan,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("tan");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下.
    QPushButton *pbdian = ui->pushButton_dian;

    connect(pbdian,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='.')
            {
                str.chop(1);

            }
        str.append(".");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下(
    QPushButton *pblkuo = ui->pushButton_lkuo;

    connect(pblkuo,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append("(");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下)
    QPushButton *pbrkuo = ui->pushButton_rkuo;

    connect(pbrkuo,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {
        str.append(")");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下+
    QPushButton *pbjia = ui->pushButton_jia;

    connect(pbjia,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='^'||str[str.size()-1]=='+'||str[str.size()-1]=='-'||str[str.size()-1]=='*'||str[str.size()-1]=='/')
            {
                str.chop(1);

            }
        str.append("+");
        ui->lineEdit->setText(str);
}

    }
            );
    //按下-

    QPushButton *pbjian = ui->pushButton_jian;
    if(!(str[str.size()-1]=='r'))
     {
    connect(pbjian,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='^'||str[str.size()-1]=='+'||str[str.size()-1]=='-'||str[str.size()-1]=='*'||str[str.size()-1]=='/')
            {
                str.chop(1);

            }
        str.append("-");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下*
    QPushButton *pbcheng = ui->pushButton_cheng;

    connect(pbcheng,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='^'||str[str.size()-1]=='+'||str[str.size()-1]=='-'||str[str.size()-1]=='*'||str[str.size()-1]=='/')
            {
                str.chop(1);

            }
        str.append("*");
        ui->lineEdit->setText(str);
}
    }
            );
    //按下/
    QPushButton *pbchu = ui->pushButton_chu;

    connect(pbchu,&QPushButton::pressed,
            [=](){
        if(!(str[str.size()-1]=='r'))
         {if(str[str.size()-1]=='^'||str[str.size()-1]=='+'||str[str.size()-1]=='-'||str[str.size()-1]=='*'||str[str.size()-1]=='/')
            {
                str.chop(1);

            }
        str.append("/");
        ui->lineEdit->setText(str);
//        QString a="2+(2+2)+2";
//        QString c="4";
//        QString b= a.mid(7);
//        QString d=a.mid(0,2);
//                QString e=d+c+b;
//        qDebug()<<e;


    }
    }
            );
    //按下ce
    QPushButton *pbce = ui->pushButton_ce;

    connect(pbce,&QPushButton::pressed,
            [=](){

        str="0";
        r="";
        temp=0;
        for(int i=0;i<100;i++){
        str2[i]="";}
        rs=0;
        ui->lineEdit->setText(str);
        ui->lineEdit_2 ->setText(r);

    }
            );
    //按下pai
    QPushButton *pbpai = ui->pushButton_pai;

    connect(pbpai,&QPushButton::pressed,
            [=](){
     if(!(str[str.size()-1]=='r')){
         if(str=="0"){

             str.chop(1);
         }
        str=str+"Π";
        ui->lineEdit->setText(str);
}
    }
            );
    //按下退格
    QPushButton *pbtui = ui->pushButton_back;

    connect(pbtui,&QPushButton::pressed,
            [=](){

        if(!(str[str.size()-1]=='r'))
         {
        if(str[str.size()-1]=='n'&&str[str.size()-2]=='l')
            str.chop(2);
        else if(str[str.size()-1]=='g'&&str[str.size()-2]=='l')
            str.chop(2);
        else if(str[str.size()-1]=='n'&&str[str.size()-2]=='i')
            str.chop(3);
        else if(str[str.size()-1]=='s'&&str[str.size()-2]=='o')
            str.chop(3);
        else if(str[str.size()-1]=='n'&&str[str.size()-2]=='a')
            str.chop(3);
        else if(str.size()==1||str=="sin"||str=="ln"||str=="tan"||str=="cos"||str=="lg")
             str="0";
        else
            str.chop(1);


                ui->lineEdit->setText(str);

}
    }
            );
    //按下等于********************************************************************

    QPushButton *pbdeng = ui->pushButton_dengyu;

    connect(pbdeng,&QPushButton::pressed,
            [=](){

        if(ui->radioButton_10->isChecked()){

            if(include_kuohao(str))
            {
                deal_kuohao();
            }
                    doten_dealstr(str);
        }
        if(ui->radioButton_16->isChecked()){
            if(include_kuohao(str))
            {
                dealsixteen_kuohao();
            }
             dosixteen_dealstr(str);
        }
        if(ui->radioButton_2->isChecked()){
            {
                dealtwo_kuohao();
            }
             dotwo_dealstr(str);
        }




    }
            );
}
}
//10*****************************************************************
void MainWindow::doten_dealstr(QString str)
{
fuhao="";
for(int i=0;i<100;i++){
str2[i]="";}

    for(int i=0;i<str.size();i++){



            if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
           { fuhao=fuhao+str[i];
                shu=shu+1;
            }

          else
            {str2[shu]=str2[shu]+str[i];
             }
    }
    for(int i=0;i<100;i++){
        if(str2[i]!="")
            flag=flag+1;
                else
            break;
    }

    for(int i=0;i<flag;i++){
        //含有lg
        if(str2[i][str2[i].size()-1]=="g"&&str2[i][str2[i].size()-2]=="l"){
            str2[i].chop(2);
            if(include_pai(str2[i])){
                str2[i].chop(1);
                temp=str2[i].toDouble();
                temp=temp*3.1415926;
                //qDebug()<<temp;
            }
           else{temp=str2[i].toDouble();


           }
            temp=log(temp)/log(10);

            str2[i] =  QString::number(temp,10,2);
        }
        //含有ln
        if(str2[i][str2[i].size()-1]=="n"&&str2[i][str2[i].size()-2]=="l"){
            str2[i].chop(2);
            if(include_pai(str2[i])){
                str2[i].chop(1);
                temp=str2[i].toDouble();
                temp=temp*3.1415926;

            }
           else{temp=str2[i].toDouble();


           }
            temp=log(temp)/log(2.71828);
            str2[i] =  QString::number(temp,10,2);
        }
        //含有sin
        if(str2[i][str2[i].size()-1]=="n"&&str2[i][str2[i].size()-2]=="i"){
            str2[i].chop(3);
            if(include_pai(str2[i])){
                str2[i].chop(1);
                temp=str2[i].toDouble();
                temp=temp*3.1415926;

            }
           else{temp=str2[i].toDouble();


           }
            temp=sin(temp);

            str2[i] =  QString::number(temp,10,2);

        }
        //含有tan
        if(str2[i][str2[i].size()-1]=="n"&&str2[i][str2[i].size()-2]=="a"){
            str2[i].chop(3);
            if(include_pai(str2[i])){
                str2[i].chop(1);
                temp=str2[i].toDouble();
                temp=temp*3.1415926;

            }
           else{temp=str2[i].toDouble();


           }
            temp=tan(temp);

            str2[i] =  QString::number(temp,10,2);
        }
        //含有cos
        if(str2[i][str2[i].size()-1]=="s"&&str2[i][str2[i].size()-2]=="o"){
            str2[i].chop(3);
            if(include_pai(str2[i])){
                str2[i].chop(1);
                temp=str2[i].toDouble();
                temp=temp*3.1415926;

            }
           else{temp=str2[i].toDouble();


           }
            temp=cos(temp);

            str2[i] =  QString::number(temp,10,2);
        }
        //含有^
        if(include_mi(str2[i])){
            QStringList list=str2[i].split("^");
            QString a1=list[0];
            QString a2=list[1];
            temp=a1.toDouble();
            temp1=a2.toDouble();
            temp=pow(temp,temp1);

            str2[i] =  QString::number(temp,10,0);
        }


    }
    //只含有Π
    for(int i=0;i<flag;i++){
        if(include_pai(str2[i])){
            str2[i].chop(1);
        temp=str2[i].toDouble();
        temp=temp*pi;
        str2[i]=QString::number(temp,10,2);
        }
    }
    while(include_chengchu(fuhao)){
        for(int i=0;i<fuhao.size();i++){
            int mark=0;
            if(fuhao[i]=="*"){
                mark=i;
                temp=str2[mark].toDouble();
                temp1=str2[mark+1].toDouble();
                temp =temp*temp1;

                str2[mark]=QString::number(temp ,10,2);
                for(int j=mark;j<flag;j++){
                    str2[j+1]=str2[j+2];

                    fuhao[j]=fuhao[j+1];
                }

            }


            if(fuhao[i]=="/"){
                mark=i;
                temp=str2[mark].toDouble();
                temp1=str2[mark+1].toDouble();
                temp =temp/temp1;

                str2[mark]=QString::number(temp ,10,2);
                for(int j=mark;j<flag;j++){
                    str2[j+1]=str2[j+2];
                    fuhao[j]=fuhao[j+1];
                }
            }

        }

    }

       rs=str2[0].toDouble();
        for(int i=0;i<fuhao.size();i++){
            if(fuhao[i]=="+"){
                rs=rs+str2[i+1].toDouble();
            }
            if(fuhao[i]=="-"){
                rs=rs-str2[i+1].toDouble();

            }
        }




    r = QString::number(rs,10,2);
    ui->lineEdit_2->setText(r);
    flag=0;
    shu=0;
}
//16**************************************************************
void MainWindow::dosixteen_dealstr(QString str)
{
    fuhao="";
    for(int i=0;i<100;i++){
    str2[i]="";}
        for(int i=0;i<str.size();i++){
                if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
               { fuhao=fuhao+str[i];
                    shu=shu+1;
                }
              else  str2[shu]=str2[shu]+str[i];
        }
        for(int i=0;i<100;i++){
            if(str2[i]!="")
                flag=flag+1;
                    else
                break;

        }
        //数据转十进制数字符串
        for(int i=0;i<flag;i++){
            change=str2[i].toInt(&ok,16);
            qDebug()<<change;
            str2[i]=QString::number(change,10,0);
        }
       //十进制字符串计算
        for(int i=0;i<flag;i++){


        while(include_chengchu(fuhao)){
            for(int i=0;i<fuhao.size();i++){
                int mark=0;
                if(fuhao[i]=="*"){
                    mark=i;
                    change=str2[mark].toInt();
                    change1=str2[mark+1].toInt();
                    change =change*change1;
                    //qDebug()<<temp;
                    str2[mark]=QString::number(change ,10,0);
                    for(int j=mark;j<flag;j++){
                        str2[j+1]=str2[j+2];

                        fuhao[j]=fuhao[j+1];
                    }

                }


                if(fuhao[i]=="/"){
                    mark=i;
                    change=str2[mark].toInt();
                    change1=str2[mark+1].toInt();
                    change =change/change1;
                    //qDebug()<<temp;
                    str2[mark]=QString::number(change ,10,0);
                    for(int j=mark;j<flag;j++){
                        str2[j+1]=str2[j+2];
                        fuhao[j]=fuhao[j+1];
                    }
                }

            }
        }

           rsu=str2[0].toInt();
            for(int i=0;i<fuhao.size();i++){
                if(fuhao[i]=="+"){
                    rsu=rsu+str2[i+1].toInt();
                }
                if(fuhao[i]=="-"){
                    rsu=rsu-str2[i+1].toInt();

                }
            }



        r= QString::number(rsu,16);

        ui->lineEdit_2->setText(r);
        flag=0;
        shu=0;

}
}
//2********************************************************************************
void MainWindow::dotwo_dealstr(QString str)
{
    fuhao="";
    for(int i=0;i<100;i++){
    str2[i]="";}
        for(int i=0;i<str.size();i++){



                if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
               { fuhao=fuhao+str[i];
                    shu=shu+1;
                }

              else  str2[shu]=str2[shu]+str[i];
        }
        for(int i=0;i<100;i++){
            if(str2[i]!="")
                flag=flag+1;
                    else
                break;

        }
        //数据转十进制数字符串
        for(int i=0;i<flag;i++){
            change=str2[i].toInt(&ok,2);
            str2[i]=QString::number(change,10,0);
        }

       //十进制字符串计算
        for(int i=0;i<flag;i++){


        while(include_chengchu(fuhao)){
            for(int i=0;i<fuhao.size();i++){
                int mark=0;
                if(fuhao[i]=="*"){
                    mark=i;
                    change=str2[mark].toInt();
                    change1=str2[mark+1].toInt();
                    change =change*change1;
                    //qDebug()<<temp;
                    str2[mark]=QString::number(change ,10,0);
                    for(int j=mark;j<flag;j++){
                        str2[j+1]=str2[j+2];

                        fuhao[j]=fuhao[j+1];
                    }

                }


                if(fuhao[i]=="/"){
                    mark=i;
                    change=str2[mark].toInt();
                    change1=str2[mark+1].toInt();
                    change =change/change1;
                    //qDebug()<<temp;
                    str2[mark]=QString::number(change ,10,0);
                    for(int j=mark;j<flag;j++){
                        str2[j+1]=str2[j+2];
                        fuhao[j]=fuhao[j+1];
                    }
                }

            }
             // qDebug()<<str2[2]<<":"<<str2[3]<<":"<<str2[4];
        }

           rsu=str2[0].toInt();
            for(int i=0;i<fuhao.size();i++){
                if(fuhao[i]=="+"){
                    rsu=rsu+str2[i+1].toInt();
                }
                if(fuhao[i]=="-"){
                    rsu=rsu-str2[i+1].toInt();

                }
            }


        // qDebug()<<temp;
        // qDebug()<<rs;
        r= QString::number(rsu,2);
         ui->lineEdit_2->setText(r);
        flag=0;
        shu=0;
}
}
//处理括号10
void MainWindow::deal_kuohao(){
while(include_kuohao(str)){
    int mark=0;
    int mark1=0;
    int mark2=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=="("&&mark==0){
            mark=1;
        }
        if(str[i]=="("&&mark!=0){
            deal1.clear();
            mark2=i;
        }
        if(str[i]==")"){
            mark=0;
            mark1=i;
            break;
        }
        if(str[i]!="("&&mark!=0){
            deal1=deal1+str[i];
        }
    }
    doten_dealstr(deal1);
   QString a=str.mid(0,mark2);
   QString b=str.mid(mark1+1);
   str=a+r+b;
}
deal1="";
r="";
}
//处理括号16
void MainWindow::dealsixteen_kuohao(){
while(include_kuohao(str)){
    int mark=0;
    int mark1=0;
    int mark2=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=="("&&mark==0){
            mark=1;
        }
        if(str[i]=="("&&mark!=0){
            deal1.clear();
            mark2=i;
        }
        if(str[i]==")"){
            mark=0;
            mark1=i;
            break;
        }
        if(str[i]!="("&&mark!=0){
            deal1=deal1+str[i];
        }
    }
    dosixteen_dealstr(deal1);
   QString a=str.mid(0,mark2);
   QString b=str.mid(mark1+1);
   str=a+r+b;
}
deal1="";
r="";
}
//处理括号2
void MainWindow::dealtwo_kuohao(){
while(include_kuohao(str)){
    int mark=0;
    int mark1=0;
    int mark2=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=="("&&mark==0){
            mark=1;
        }
        if(str[i]=="("&&mark!=0){
            deal1.clear();
            mark2=i;
        }
        if(str[i]==")"){
            mark=0;
            mark1=i;
            break;
        }
        if(str[i]!="("&&mark!=0){
            deal1=deal1+str[i];
        }
    }
    dotwo_dealstr(deal1);
   QString a=str.mid(0,mark2);
   QString b=str.mid(mark1+1);
   str=a+r+b;
}
deal1="";
r="";
}
bool MainWindow::include_pai(QString s){
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=="Π")
        {a=1;
        break;
        }
    }
    if(a==1)
        return 1;
    else
        return 0;

}
bool MainWindow::include_mi(QString s){
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=="^")
        {a=1;
        break;
        }
    }
    if(a==1)
        return 1;
    else
        return 0;

}
bool MainWindow::include_chengchu(QString s){
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=="*"||s[i]=="/")
        {a=1;
        break;
        }
    }
    if(a==1)
        return 1;
    else
        return 0;

}
bool MainWindow::include_kuohao(QString s){
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=="(")
        {a=1;
        break;
        }
    }
    if(a==1)
        return 1;
    else
        return 0;

}
void MainWindow::shuang_Check(){
    if(ui->radioButton_5->isChecked()){//10
        s1=ui->lineEdit_3->text();
        stemp1=s1.toInt();
    }
    if(ui->radioButton->isChecked()){//2
        bool ok;
        s1=ui->lineEdit_3->text();
        stemp1=s1.toInt(&ok,2);
    }
    if(ui->radioButton_6->isChecked()){//16
        bool ok;
        s1=ui->lineEdit_3->text();
        stemp1=s1.toInt(&ok,16);
    }

    if(ui->radioButton_4->isChecked()){//10
        s2=ui->lineEdit_4->text();
        stemp2=s2.toInt();
    }
    if(ui->radioButton_3->isChecked()){//2
        bool ok;
        s2=ui->lineEdit_4->text();
        stemp2=s2.toInt(&ok,2);
    }
    if(ui->radioButton_7->isChecked()){//16
        bool ok;
        s2=ui->lineEdit_4->text();
        stemp2=s2.toInt(&ok,16);
    }

}
void MainWindow::show_bangzhu(){
    bangzhu1=new bangzhu;
    bangzhu1->setFixedSize(500,500);
    bangzhu *bz= bangzhu1;
    QPixmap pixmap = QPixmap("://butten/bz11.png").scaled(bz->size());
        QPalette palette(bz->palette());
        palette.setBrush(QPalette::Background, QBrush(pixmap));
        bz->setPalette(palette);
    bangzhu1->show();
}
MainWindow::~MainWindow()
{
    delete ui;
}
