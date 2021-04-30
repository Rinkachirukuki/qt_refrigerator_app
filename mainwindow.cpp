#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    refrigerator = new Refrigerator();

    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(EventTick()));
    timer->start(200);

    ui->label_6->setText(QString::number(refrigerator->controlPanel->GetTemperature()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::EventTick(){

    refrigerator->EventTick();

    ui->temperatureLabel->setText(QString::number(refrigerator->thermometer->GetTemperature()));

}

void MainWindow::on_pushButton_clicked()
{
    refrigerator->controlPanel->TurnOnFridge();
    ui->pushButton->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    refrigerator->controlPanel->TurnOffFridge();
    ui->pushButton->setEnabled(true);
    ui->pushButton_3->setEnabled(false);
}

void MainWindow::on_pushButton_2_clicked()
{
    refrigerator->door->Open();
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    refrigerator->door->Close();
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_4->setEnabled(false);
}

void MainWindow::on_pushButton_5_clicked()
{
    refrigerator->usbPort->Connect();
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(true);
}

void MainWindow::on_pushButton_6_clicked()
{
    refrigerator->usbPort->Disconnect();
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_7_clicked()
{
    refrigerator->refrigerationUnit->BreakDownMotor();
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(true);
}

void MainWindow::on_pushButton_8_clicked()
{
    refrigerator->refrigerationUnit->FixMotor();
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(false);
}

void MainWindow::on_pushButton_9_clicked()
{
    refrigerator->controlPanel->IncreaseTemperature();
    ui->label_6->setText(QString::number(refrigerator->controlPanel->GetTemperature()));
}

void MainWindow::on_pushButton_10_clicked()
{
    refrigerator->controlPanel->DecreaseTemperature();
    ui->label_6->setText(QString::number(refrigerator->controlPanel->GetTemperature()));
}


