#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
    QPixmap pix;
};

#endif // WIDGET_H
