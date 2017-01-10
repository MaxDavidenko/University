#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H
#include <QWidget>
#include <QMouseEvent>
class CustomWidget : public QWidget
{
  Q_OBJECT
public:
    explicit CustomWidget(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    virtual ~CustomWidget();
signals:
    void changeToDefaultCursor();

};

#endif // CUSTOMWIDGET_H
