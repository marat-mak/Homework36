#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_clicked()
{

}


void LoginForm::on_buttonBox_accepted()
{

}


void LoginForm::on_buttonBox_rejected()
{

}


void LoginForm::on_registrationPushButton_clicked()
{

}

