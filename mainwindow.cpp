#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtMultimedia/QSound"
#include "QtMultimedia/qsound.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_C_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/c1.wav");
}

void MainWindow::on_C_Sharp_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/c1s.wav");
}

void MainWindow::on_D_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/d1.wav");
}

void MainWindow::on_D_Sharp_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/d1s.wav");
}

void MainWindow::on_E_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/e1.wav");
}

void MainWindow::on_F_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/f1.wav");
}

void MainWindow::on_F_Sharp_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/f1s.wav");
}

void MainWindow::on_G_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/g1.wav");
}

void MainWindow::on_G_Sharp_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/g1s.wav");
}

void MainWindow::on_A_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/a1.wav");
}

void MainWindow::on_A_Sharp_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/a1s.wav");
}

void MainWindow::on_B_clicked()
{
    QSound::play("/home/pi/Piano/Samples/wav-piano-sound/wav/b1.wav");
}
