#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clases.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setVisible(0);
    ui->lineEdit_2->setVisible(0);
    ui->lineEdit_3->setVisible(0);
    ui->label->setText("");
    ui->label_2->setText("");
    ui->label_3->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_comboBox_activated(int index)
{
    int r=index;
    //r=ui->comboBox->currentIndex();
    if(r==0)
    {
        ui->label->setText("enter number");
        ui->label_2->setText("");
        ui->label_3->setText("");
        ui->lineEdit->setVisible(1);
        ui->lineEdit_2->setVisible(0);
        ui->lineEdit_3->setVisible(0);
        ui->textBrowser->setText("");
    }
    else if(r==1)
    {
        ui->label->setText("enter value of sin");
    ui->label_2->setText("");
    ui->label_3->setText("");
    ui->lineEdit->setVisible(1);
    ui->lineEdit_2->setVisible(0);
    ui->lineEdit_3->setVisible(0);
    ui->textBrowser->setText("");
    }
    else if(r==2)
    {
    ui->label->setText("enter a");
    ui->label_2->setText("enter b");
    ui->label_3->setText("enter c");
    ui->lineEdit->setVisible(1);
    ui->lineEdit_2->setVisible(1);
    ui->lineEdit_3->setVisible(1);
    ui->textBrowser->setText("");
    }
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->comboBox->currentIndex()==0)
    { QString viv;
    int h=ui->lineEdit->text().toInt();
        prost a;
        vector<int> res=a.prostoye(h);
        if(res.size()==0) viv="prostoye";
        else {viv="ne prostoye! del:";
                for(int i=0; i<res.size(); i++)
                viv=viv+QString::number(res[i])+", ";
        }
        ui->textBrowser->setText(viv);


    }
    if(ui->comboBox->currentIndex()==1)
    { QString viv;
        double h=ui->lineEdit->text().toDouble();
        sinusus a;
        double res=a.sinus(h);
        viv=QString::number(res);
        ui->textBrowser->setText(viv);


    }
    if(ui->comboBox->currentIndex()==2)
    { QString viv;
        int a=ui->lineEdit->text().toInt();
        int b=ui->lineEdit_2->text().toInt();
        int c=ui->lineEdit_3->text().toInt();
        Roots e;
        vector<double> res=e.Disc(a,b,c);
            for(int i=0; i<res.size(); i++)
                viv=viv+QString::number(res[i])+", ";

        ui->textBrowser->setText(viv);


    }
}

