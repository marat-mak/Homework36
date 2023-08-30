#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include <QWidget>

namespace Ui {
class RegistrationForm;
}

class RegistrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationForm(QWidget *parent = nullptr);
    ~RegistrationForm();

signals:
    void loginRequested();

private slots:
    void on_loginButton_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::RegistrationForm *ui;
};

#endif // REGISTRATIONFORM_H

