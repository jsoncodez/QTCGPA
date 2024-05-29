#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

string usrClassName = " ";
string usrGrade;
char usrCharGrade;
char usrGradeArray(1);
int usrGradeInt;
int usrCredits;
int QPI;
float resultGPA;
void printOut () {

}



///TESTTTTT

void MainWindow::on_addClassButton_clicked()
{


    usrClassName = ui->txtName->text().toStdString();
    usrGrade = ui->txtGrade->text().toStdString();
    usrCharGrade = usrGrade.at(0);

    if (usrCharGrade == 'A') {
        usrGradeInt = 4;
    } else if (usrCharGrade == 'B') {
        usrGradeInt = 3;
    } else if (usrCharGrade == 'C') {
        usrGradeInt = 2;
    } else if (usrCharGrade == 'D') {
        usrGradeInt = 1;
    } else if (usrCharGrade == 'F') {
        usrGradeInt = 0;
    }

    usrCredits = ui->txtCredit->text().toInt();
    ui->txtDegGPA->setText(QString::number(usrCredits));

    QPI = usrGradeInt * usrCredits;

    resultGPA = QPI; //remember need to change this once we can store multiple grades
    ui->txtGPA->setText(QString::number(resultGPA));
}


void MainWindow::on_removeClassBtn_clicked()
{

}


void MainWindow::on_removeAllBtn_clicked()
{

}

