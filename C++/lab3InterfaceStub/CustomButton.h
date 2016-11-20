#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QObject>

class CustomButton : public QObject
{
    Q_OBJECT
public:
    explicit CustomButton(QObject *parent = 0);

signals:

public slots:
};

#endif // CUSTOMBUTTON_H