#include "CustomButton.h"
#include <QEvent>
#include <QFocusEvent>
#include <QString>
CustomButton::CustomButton(QWidget *parent) : QPushButton(parent)
{
    animation = new QPropertyAnimation(this, "size");

}
bool CustomButton::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == event->MouseButtonDblClick)
    //if (reinterpret_cast<CustomButton*>(watched)->isChecked())
    {
        QPixmap pixmap(QString(":/new/prefix1/gallery/") +
            QString(reinterpret_cast<CustomButton *>(watched)->objectName()) + QString(".png"));
        QCursor cursor(pixmap);
        this->setCursor(cursor);
    }
    return true;
}
void CustomButton::enterEvent(QEvent *event)
{
    if (event->type() == event->Enter)
    {
        animation->setStartValue(QSize(this->width(), this->height()));
        animation->setEndValue(QSize(this->width() * 1.1, this->height() * 1.1));
        animation->start();
    }
}
void CustomButton::leaveEvent(QEvent *event)
{
    if (event->type() == event->Leave)
    {
        animation->setStartValue(QSize(this->width(), this->height()));
        animation->setEndValue(QSize(this->baseSize().width(), this->baseSize().height()));
        animation->start();
    }
}
