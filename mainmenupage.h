#ifndef CMAINMENUPAGE_H
#define CMAINMENUPAGE_H

#include <QObject>
#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDebug>

class CMainMenuPage : public QWidget
{
    Q_OBJECT
public:
    explicit CMainMenuPage(QWidget *parent = nullptr);
    ~CMainMenuPage();
signals:

};

#endif // CMAINMENUPAGE_H
