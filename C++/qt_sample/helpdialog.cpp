#include "helpdialog.h"
#include <QVBoxLayout>
#include <QUrl>

HelpDialog::HelpDialog(QWidget *parent)
  : QDialog(parent)
  , webView(new QWebView(this))
{
    setWindowTitle("Help");
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setMargin(0);

    QUrl url("qrc:res1/Homepage.html");
    layout->addWidget(webView);
    webView->load(url);
    setLayout(layout);
}
