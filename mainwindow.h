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
    void ramki();
    void oblicz();
    void pozycja();

    ~MainWindow();

private slots:
    void on_Ocena1_clicked();

    void on_Ocena2_clicked();

    void on_Ocena3_clicked();

    void on_Ocena4_clicked();

    void on_Ocena5_clicked();

    void on_Ocena6_clicked();

    void on_Ocena15_clicked();

    void on_Ocena25_clicked();

    void on_Ocena35_clicked();

    void on_Ocena45_clicked();

    void on_Ocena55_clicked();

    void on_Nastepny_clicked();

    void on_Poprzedni_clicked();

    void on_Reset_clicked();

private:

    Ui::MainWindow *ui;

    int numer=1;
    double A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P;
    double wynik=0;
    double suma=0;
    int ile_liczb=1;
    double *wskaznik;



};

#endif // MAINWINDOW_H
