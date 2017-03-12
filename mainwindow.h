#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_C_Sharp_clicked();

    void on_C_clicked();

    void on_D_clicked();

    void on_D_Sharp_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_F_Sharp_clicked();

    void on_G_clicked();

    void on_G_Sharp_clicked();

    void on_A_clicked();

    void on_A_Sharp_clicked();

    void on_B_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
