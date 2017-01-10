#include "CustomWidget.h"

CustomWidget::CustomWidget(QWidget *parent): QWidget(parent)
{
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
}

void CustomWidget::mousePressEvent(QMouseEvent *event)
{
    emit changeToDefaultCursor();
}
CustomWidget::~CustomWidget() {}
