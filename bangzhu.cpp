#include "bangzhu.h"
#include "ui_bangzhu.h"

bangzhu::bangzhu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bangzhu)
{
    ui->setupUi(this);

    ui->pushButton_1->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/1.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light11.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light21.png);"
                                    "}");
    ui->pushButton_2->setStyleSheet("QPushButton{"
                                    "border-image:url(://butten/2.png);"
                                    "}"
                                    "QPushButton:hover{"
                                    "border-image:url(://butten/light12.png);"
                                    "}"
                                    "QPushButton:pressed{"
                                    "border-image:url(://butten/light22.png);"
                                    "}");
   ui->label->setStyleSheet("QLabel{border-image: url(://butten/bz2.png);}");
   ui->label->setFixedSize(500,500);
   ui->label->hide();
    //按下 1

    QPushButton *pbz1 = ui->pushButton_1;

    connect(pbz1,&QPushButton::pressed,
            [=](){
        ui->label->hide();



    }
            );
    //按下2
    QPushButton *pbz2 = ui->pushButton_2;

    connect(pbz2,&QPushButton::pressed,
            [=](){

 ui->label->show();

            }
    );

}

bangzhu::~bangzhu()
{
    delete ui;
}
