#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "songtablemodel.h"
#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    QStringList getSongs();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SongTableModel *model;
    QMediaPlayer *player = new QMediaPlayer();
    void setIcons();
};
#endif // MAINWINDOW_H
