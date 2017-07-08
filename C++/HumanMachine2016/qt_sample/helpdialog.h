#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>
#include <QtWebKitWidgets/QWebView>

class HelpDialog : public QDialog
{
    Q_OBJECT
public:
    explicit HelpDialog(QWidget *parent = 0);

private:
    QWebView* webView;
};

#endif // HELPDIALOG_H
