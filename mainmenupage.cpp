#include "mainmenupage.h"

CMainMenuPage::CMainMenuPage(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *mainHBoxLayout = new QHBoxLayout;
    QWidget *innerWidget = new QWidget(this);

    QGridLayout *mainGridLayout = new QGridLayout;
    QLabel *userNameLbl = new QLabel(innerWidget);
    userNameLbl->setText("Welcome");
    userNameLbl->setVisible(true);
    mainGridLayout->addWidget(userNameLbl,0,0,Qt::AlignCenter);

    innerWidget->setLayout(mainGridLayout);
    mainHBoxLayout->addWidget(innerWidget);
    this->setLayout(mainHBoxLayout);
}

CMainMenuPage::~CMainMenuPage()
{
    qDebug()<<"~CMainMenuPage object destroyed"<<Qt::endl;
}
