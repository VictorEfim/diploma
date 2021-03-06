#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QFileDialog>

#include <QPointF>
#include "widget.h"

#include "mainengine.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT

  private:
    MainEngine engn;

    QMenuBar* menuBar;

    void createConnections();
    void createMenuBar(MainWindow* parent);

  public:
   explicit MainWindow(QWidget *parent = nullptr);

  private slots:
    void slotOpen();

  //--------------------------------------------
  signals:
    void to_curve(const QVector<QPointF>& a);
  //--------------------------------------------

};

#endif // MAINWINDOW_H
