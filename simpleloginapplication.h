#ifndef SIMPLELOGINAPPLICATION_H
#define SIMPLELOGINAPPLICATION_H

#include <QMainWindow>
#include "userloginframe.h"
#include "mainmenupage.h"
#include <QStackedWidget>

class SimpleLoginApplication : public QMainWindow
{
    Q_OBJECT
private:
    CUserLoginFrame *cLoginObj;
    CMainMenuPage *cMainObj;
    QStackedWidget *mainStackedWid;

public slots:
    void slotShowWelcomeScreen(void);
public:
    SimpleLoginApplication(QWidget *parent = nullptr);
    ~SimpleLoginApplication();
};
#endif // SIMPLELOGINAPPLICATION_H
