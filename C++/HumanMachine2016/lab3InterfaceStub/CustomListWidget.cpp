#include "CustomListWidget.h"

CustomListWidget::CustomListWidget(QWidget *parent): QListWidget(parent)
{
   /* this->addItem(QString("New project"));
    this->addItem(QString("From template"));
    this->addItem(QString("From code"));
    this->addItem(QString("Summary"));
    this->setCurrentRow(0);
    this->currentItem()->setIcon(QIcon(":new/prefix1/gallery/arrow.png"));*/
}

void CustomListWidget::changeNextRowIcon()
{
    if (this->currentRow() + 1 < this->count())
    {
        this->currentItem()->setIcon(QPixmap(":new/prefix1/gallery/transparent.png"));
        this->setCurrentRow(this->currentRow() + 1);
        this->currentItem()->setIcon(QPixmap(":new/prefix1/gallery/arrow.png"));
    }
}
void CustomListWidget::changePrevRowIcon()
{
    if (this->currentRow() - 1 >= 0)
    {
        this->currentItem()->setIcon(QPixmap(":new/prefix1/gallery/transparent.png"));
        this->setCurrentRow(this->currentRow() - 1);
        this->currentItem()->setIcon(QPixmap(":new/prefix1/gallery/arrow.png"));
    }
}
