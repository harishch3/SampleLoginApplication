#include "simpleloginapplication.h"

SimpleLoginApplication::SimpleLoginApplication(QWidget *parent)
    : QMainWindow(parent)
{
    cLoginObj = nullptr;
    cMainObj = nullptr;
    mainStackedWid = nullptr;

    mainStackedWid = new QStackedWidget;
    cLoginObj = new CUserLoginFrame;
    cMainObj = new CMainMenuPage;
    mainStackedWid->setVisible(true);
    mainStackedWid->addWidget(cLoginObj);
    mainStackedWid->addWidget(cMainObj);
    mainStackedWid->setFixedSize(320,240);
    mainStackedWid->setCurrentIndex(0);
    this->setCentralWidget(mainStackedWid);
    connect(cLoginObj,SIGNAL(sigShowWelcomeScreen()),this,SLOT(slotShowWelcomeScreen()));
}

SimpleLoginApplication::~SimpleLoginApplication()
{
    delete cLoginObj;
    delete cMainObj;
    delete mainStackedWid;

    cLoginObj = nullptr;
    cMainObj = nullptr;
    mainStackedWid = nullptr;
    qDebug()<<"~SimpleLoginApplication object destroyed"<<Qt::endl;

}

void SimpleLoginApplication::slotShowWelcomeScreen()
{
    mainStackedWid->setCurrentIndex(1);
}
