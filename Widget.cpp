#include "Widget.h"
#include "ui_Widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    pix.load(":/res/rose.png");
    this->resize(pix.size());


    //    this->resize(400,400);
    //    setWindowOpacity(1);
    //    setWindowFlags(Qt::FramelessWindowHint);
    //    setAttribute(Qt::WA_TranslucentBackground);
    //    this->setStyleSheet("background-image: url(:/res/rose.png)");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,pix);


    //    QStyleOption opt;
    //    opt.initFrom(this);
    //    QPainter p(this);
    //    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    //    QWidget::paintEvent(event);
}
