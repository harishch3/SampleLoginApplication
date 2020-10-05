#include "userloginframe.h"

CUserLoginFrame::CUserLoginFrame(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *mainHBoxLayout = new QHBoxLayout;
    QWidget *innerWidget = new QWidget(this);

    QGridLayout *mainGridLayout = new QGridLayout;
    QLabel *userNameLbl = new QLabel(innerWidget);
    userNameLbl->setText("User Name:");
    userNameLbl->setVisible(true);
    mainGridLayout->addWidget(userNameLbl,0,0,Qt::AlignCenter);

    QLineEdit *userNameLineEdit = new QLineEdit(innerWidget);
    userNameLineEdit->setVisible(true);
    mainGridLayout->addWidget(userNameLineEdit,0,1,Qt::AlignCenter);

    QLabel *passwordLbl = new QLabel(innerWidget);
    passwordLbl->setText("Password:");
    mainGridLayout->addWidget(passwordLbl,1,0,Qt::AlignCenter);

    QLineEdit *passowordLineEdit = new QLineEdit(innerWidget);
    passowordLineEdit->setVisible(true);
    mainGridLayout->addWidget(passowordLineEdit,1,1,Qt::AlignCenter);

    QPushButton *submitPBtn = new QPushButton(innerWidget);
    submitPBtn->setText("Submit");
    mainGridLayout->addWidget(submitPBtn,2,0,1,2,Qt::AlignCenter);

    innerWidget->setLayout(mainGridLayout);
    mainHBoxLayout->addWidget(innerWidget);
    this->setLayout(mainHBoxLayout);

    connect(submitPBtn,SIGNAL(clicked()),this,SLOT(doSomething()));
}

void CUserLoginFrame::doSomething()
{
    qDebug()<<"emitting signal on button click";
    emit sigShowWelcomeScreen();
}

CUserLoginFrame::~CUserLoginFrame()
{
    qDebug()<<"~CUserLoginFrame object destroyed"<<Qt::endl;
}
