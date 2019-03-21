#ifndef TIMERDIALOG_H
#define TIMERDIALOG_H

#include <QDialog>
#include <QTimer>
#include <QTime>
#include "settingdialog.h"
#include <QMessageBox>

namespace Ui {
class TimerDialog;
}

class TimerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TimerDialog(QWidget *parent = 0);
    ~TimerDialog();

public slots:
    void refresh();

private:
    Ui::TimerDialog *ui;
    QPoint dPos;
    bool isMoving;
    QTimer* timer;
    QTime time;
    SettingDialog* settingDialog;
    QMessageBox* warning;

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
};

#endif // TIMERDIALOG_H
