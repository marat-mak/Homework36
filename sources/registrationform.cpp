#include "registrationform.h"
#include "ui_registrationform.h"

RegistrationForm::RegistrationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrationForm)
{
    ui->setupUi(this);
}

RegistrationForm::~RegistrationForm()
{
    delete ui;
}

void RegistrationForm::on_loginButton_clicked()
{
    emit loginRequested();
}


void RegistrationForm::on_buttonBox_accepted()
{

}


void RegistrationForm::on_buttonBox_rejected()
{

}

