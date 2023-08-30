#include "startscreen.h"
#include "ui_startscreen.h"

StartScreen::StartScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScreen)
{
    ui->setupUi(this);
    connect(ui->loginWidget, &LoginForm::registerRequested, this, &StartScreen::setRegistrationForm);
    connect(ui->registerWidget, &RegistrationForm::loginRequested, this, &StartScreen::setLoginForm);
}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::setLoginForm()
{
    ui->stacgedWidget->setCurrentIndex(0);
}

void setRegistrationForm()
{
    ui->stacgedWidget->setCurrentIndex(1);
}

