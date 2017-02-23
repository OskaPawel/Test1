#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);

            A=0; B=0; C=0; D=0; E=0; F=0; G=0; H=0; I=0; J=0; K=0; L=0; M=0; N=0; O=0; P=0;
            suma=A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P;
            wynik=suma/ile_liczb;

            ui->Wynik->setText(QString::number(wynik));
            ui->A_suma->setText(QString::number(suma));
            ui->A_ile->setText(QString::number(ile_liczb));
            wskaznik=&A;



            ui->r_A->setText(QString::number(A));   ui->r_B->setText(QString::number(B));
            ui->r_C->setText(QString::number(C));   ui->r_D->setText(QString::number(D));
            ui->r_E->setText(QString::number(E));   ui->r_F->setText(QString::number(F));
            ui->r_G->setText(QString::number(G));   ui->r_H->setText(QString::number(H));
            ui->r_I->setText(QString::number(I));   ui->r_J->setText(QString::number(J));
            ui->r_K->setText(QString::number(K));   ui->r_L->setText(QString::number(L));
            ui->r_M->setText(QString::number(M));   ui->r_N->setText(QString::number(N));
            ui->r_O->setText(QString::number(O));   ui->r_P->setText(QString::number(P));

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ramki()
{
    ui->r_A->setText(QString::number(A));   ui->r_B->setText(QString::number(B));
    ui->r_C->setText(QString::number(C));   ui->r_D->setText(QString::number(D));
    ui->r_E->setText(QString::number(E));   ui->r_F->setText(QString::number(F));
    ui->r_G->setText(QString::number(G));   ui->r_H->setText(QString::number(H));
    ui->r_I->setText(QString::number(I));   ui->r_J->setText(QString::number(J));
    ui->r_K->setText(QString::number(K));   ui->r_L->setText(QString::number(L));
    ui->r_M->setText(QString::number(M));   ui->r_N->setText(QString::number(N));
    ui->r_O->setText(QString::number(O));   ui->r_P->setText(QString::number(P));
}

void MainWindow::oblicz()
{
   suma=A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P;
   wynik=suma/ile_liczb;
   ui->A_suma->setText(QString::number(suma));
   ui->Wynik->setText(QString::number(wynik));
   ui->A_ile->setText(QString::number(ile_liczb));
}

void MainWindow::pozycja()
{
    if (numer==1)
    {
        wskaznik=&A;
        ui->Znak->move(25,180);
    }
    else if (numer==2)
    {
        wskaznik=&B;
        ui->Znak->move(65,180);
    }
    else if (numer==3)
    {
        wskaznik=&C;
        ui->Znak->move(105,180);
    }
    else if (numer==4)
    {
        wskaznik=&D;
        ui->Znak->move(145,180);
    }
    else if (numer==5)
    {
        wskaznik=&E;
        ui->Znak->move(185,180);
    }
    else if (numer==6)
    {
        wskaznik=&F;
        ui->Znak->move(225,180);
    }
    else if (numer==7)
    {
        wskaznik=&G;
        ui->Znak->move(265,180);
    }
    else if (numer==8)
    {
        wskaznik=&H;
        ui->Znak->move(305,180);
    }
    else if (numer==9)
    {
        wskaznik=&I;
        ui->Znak->move(25,300);
    }
    else if (numer==10)
    {
        wskaznik=&J;
        ui->Znak->move(65,300);
    }
    else if (numer==11)
    {
        wskaznik=&K;
        ui->Znak->move(105,300);
    }
    else if (numer==12)
    {
        wskaznik=&L;
        ui->Znak->move(145,300);
    }
    else if (numer==13)
    {
        wskaznik=&M;
        ui->Znak->move(185,300);
    }
    else if (numer==14)
    {
        wskaznik=&N;
        ui->Znak->move(225,300);
    }
    else if (numer==15)
    {
        wskaznik=&O;
        ui->Znak->move(265,300);
    }
    else if (numer==16)
    {
        wskaznik=&P;
        ui->Znak->move(305,300);
    }
    else if (numer>16)
    {
        numer=16;
        ile_liczb=16;
    }
    else if (numer<1)
    {
        numer=1;
    }

}


void MainWindow::on_Ocena1_clicked()
{
      *wskaznik=1;
      oblicz();
      ramki();




}

void MainWindow::on_Ocena2_clicked()
{
    *wskaznik=2;
    oblicz();
    ramki();

}

void MainWindow::on_Ocena3_clicked()
{
    *wskaznik=3;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena4_clicked()
{
    *wskaznik=4;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena5_clicked()
{
    *wskaznik=5;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena6_clicked()
{
    *wskaznik=6;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena15_clicked()
{
    *wskaznik=1.5;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena25_clicked()
{
    *wskaznik=2.5;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena35_clicked()
{
    *wskaznik=3.5;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena45_clicked()
{
    *wskaznik=4.5;
    oblicz();
    ramki();
}

void MainWindow::on_Ocena55_clicked()
{
    *wskaznik=5.5;
    oblicz();
    ramki();
}

void MainWindow::on_Nastepny_clicked()
{

   // wskaznik++;
    numer++;
  //  ui->Znak->move(65,180);
    ile_liczb++;
  //  oblicz();
    ramki();
    pozycja();

}

void MainWindow::on_Poprzedni_clicked()
{

  //  wskaznik--;
    numer--;
  //  oblicz();
    ramki();
    pozycja();

}

void MainWindow::on_Reset_clicked()
{
     A=0; B=0; C=0; D=0; E=0; F=0; G=0; H=0; I=0; J=0; K=0; L=0; M=0; N=0; O=0; P=0;
     wskaznik=&A;
     numer=1;
     ile_liczb=1;
     suma=0;

     ramki();
     oblicz();
     pozycja();

}
