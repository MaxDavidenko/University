#include "CustomWidget.h"
#include <QMenu>
CustomWidget::CustomWidget(QWidget *parent): QWidget(parent)
{
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(ShowCustomContexMenu(QPoint)));
}
void CustomWidget::ShowCustomContexMenu(const QPoint &p)
{
    QMenu menu;
    menu.addAction(QString("Paste           Ctrl + V"));
    menu.addAction(QString("Select all      Ctrl + A"));
    menu.addAction(QString("Add new element Ctrl + Shift + A"));
    menu.exec(mapToGlobal(p));
}

void CustomWidget::mousePressEvent(QMouseEvent *event)
{
    emit changeToDefaultCursor();
}
CustomWidget::~CustomWidget() {}
