#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QObject>
#include <QPropertyAnimation>
#include <QPushButton>
class CustomButton : public QPushButton
{
    Q_OBJECT
public:
    explicit CustomButton(QWidget *parent = 0);
    void setAnimationOnFocus();
    void setAnimationOnFocusOut();
    bool eventFilter(QObject *watched, QEvent *event);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

signals:

public slots:
private:
    QPropertyAnimation *animation;
};

#endif // CUSTOMBUTTON_H
