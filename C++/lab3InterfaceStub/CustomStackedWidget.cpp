#include "CustomStackedWidget.h"

CustomStackedWidget::CustomStackedWidget(QWidget *parent): QStackedWidget(parent)
{
    this->setCurrentIndex(0);
}

void CustomStackedWidget::setNextPage()
{
    if (this->currentIndex() == this->count() -1)
        emit closeDialog();
    if (this->currentIndex() < this->count())
    {
        this->setCurrentIndex(this->currentIndex() + 1);
        if (this->currentIndex() == this->count() -1)
            emit changeNextButtonToFinish();
    }
}

void CustomStackedWidget::setPrevPage()
{
    if (this->currentIndex() > 0)
        this->setCurrentIndex(this->currentIndex() - 1);
}
