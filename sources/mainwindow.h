#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWidow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* createClient();

private slots:
    void on_messageLineEdit_returnPressed();
    void on_sendMessageButton_clicked();
    void PrivateMessageSendButton_clicked()
    void on_actionOpen_another_cliend_triggered();
    void on_actionCloseClient_triggered();

private:
 Ui::<MainWindow *ui;
};

#endif // MAINWINDOW_H


                                                              28,0-1      Внизу


