#include "settingdialog.h"
#include "ui_settingdialog.h"

SettingDialog::SettingDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()|Qt::FramelessWindowHint);
    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
    setWindowFlags(windowFlags()|Qt::Tool);

    connect(ui->button, &QPushButton::clicked, [this](){
        emit set();
        this->close();
    });
}

SettingDialog::~SettingDialog()
{
    delete ui;
}

QTime SettingDialog::getTotalTime()
{
    return ui->total_time->time();
}


QTime SettingDialog::getWarningTime()
{
    return ui->warning_time->time();
}
