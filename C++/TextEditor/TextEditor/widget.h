#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "highlighter.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_buttonRename_clicked();
    
    void on_formatCodeButton_clicked();

private:
    Ui::Widget *ui;
    Highlighter * highlighter;
};

#endif // WIDGET_H
