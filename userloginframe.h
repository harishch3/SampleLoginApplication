#ifndef CUSERLOGINFRAME_H
#define CUSERLOGINFRAME_H

#include <QObject>
#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QDebug>


class CUserLoginFrame : public QWidget
{
    Q_OBJECT
public:
    explicit CUserLoginFrame(QWidget *parent = nullptr);
    ~CUserLoginFrame();

signals:
      void sigShowWelcomeScreen(void);
public slots:
      void doSomething(void);
};

#endif // CUSERLOGINFRAME_H
