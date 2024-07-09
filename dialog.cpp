#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_logout_clicked()
{
    this->close();
}


void Dialog::on_Login_clicked()
{
    QString account = ui->editAccount->text().trimmed();
    QString password = ui->editPassword->text();
    if(account=="admin" && password =="1234"){
        mainwindow.show();
        this->close();
    }else{
        ui->lblMsg->setText("登录错误");
    }
}

