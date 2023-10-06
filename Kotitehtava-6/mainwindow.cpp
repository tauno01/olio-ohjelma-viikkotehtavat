#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->num0, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num1, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num2, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num3, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num4, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num5, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num6, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num7, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num8, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->num9, SIGNAL(clicked(bool)), this, SLOT(numberButtonClicked()));
    connect(ui->plus, SIGNAL(clicked(bool)), this, SLOT(determineOperand()));
    connect(ui->substract, SIGNAL(clicked(bool)), this, SLOT(determineOperand()));
    connect(ui->multiply, SIGNAL(clicked(bool)), this, SLOT(determineOperand()));
    connect(ui->divide, SIGNAL(clicked(bool)), this, SLOT(determineOperand()));
    connect(ui->enter, SIGNAL(clicked(bool)), this, SLOT(enterClicked()));
    connect(ui->clear, SIGNAL(clicked(bool)), this, SLOT(clearClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberButtonClicked()
{
    if(number1 == "" && number2 == "") ui->result->setText("");
    QPushButton* senderButton = qobject_cast<QPushButton*>(sender());
    if (senderButton) {
        QString numberText = senderButton->text();
        buttonIsClicked(numberText);
    }
}


void MainWindow::buttonIsClicked(QString num) {
    switch (state) {
        case 1:
            number1 += num;
            break;
        case 2:
            number2 += num;
            break;
    }
    numberClickedHandler();
}

void MainWindow::numberClickedHandler()
{
    if(state == 1) ui->firstNum->setText(number1);
    if(state == 2) ui->secondNum->setText(number2);
}

void MainWindow::enterClicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::clearClicked()
{
    resetLineEdits();
}

void MainWindow::clearAndEnterClickHandler()
{
    if  (operand == "+") {
            result = number1.toDouble() + number2.toDouble();
        } else if (operand == "-") {
            result = number1.toDouble() - number2.toDouble();
        } else if (operand == "*") {
            result = number1.toDouble() * number2.toDouble();
        } else if (operand == "/") {
            result = number1.toDouble() / number2.toDouble();
        }

    ui->result->setText(QString::number(result));
    number1 = "";
    number2 = "";
    ui->firstNum->setText("");
    ui->secondNum->setText("");
    state = 1;
}

void MainWindow::determineOperand() {
    QPushButton* senderButton = qobject_cast<QPushButton*>(sender());
    if (senderButton) {
        QString numberText = senderButton->text();
        operand = numberText;
    }
    addSubMulDivClickHandler();
}

void MainWindow::addSubMulDivClickHandler()
{
    state = 2;
}

void MainWindow::resetLineEdits()
{
    state = 1;
    number1 = "";
    number2 = "";
    ui->firstNum->setText(" ");
    ui->secondNum->setText(" ");
    ui->result->setText(" ");
}
