#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget) {
    ui->setupUi(this);
    this->setMinimumSize(200, 300);
    this->setMaximumSize(200, 300);

    this->setWindowTitle("QCalculator");

    QFont font("仿宋", 14);
    ui->lineEdit->setFont(font);
    ui->lineEdit->setReadOnly(true);

    ui->Equal->setStyleSheet("background:grey");
}

Widget::~Widget() {
    delete ui;
}

void Widget::on_One_clicked()
{
    expression += '1';
    ui->lineEdit->setText(expression);
}


void Widget::on_Two_clicked()
{
    expression += '2';
    ui->lineEdit->setText(expression);
}


void Widget::on_Three_clicked()
{
    expression += '3';
    ui->lineEdit->setText(expression);
}


void Widget::on_Four_clicked()
{
    expression += '4';
    ui->lineEdit->setText(expression);
}


void Widget::on_Five_clicked()
{
    expression += '5';
    ui->lineEdit->setText(expression);
}


void Widget::on_Six_clicked()
{
    expression += '6';
    ui->lineEdit->setText(expression);
}


void Widget::on_Seven_clicked()
{
    expression += '7';
    ui->lineEdit->setText(expression);
}


void Widget::on_Eight_clicked()
{
    expression += '8';
    ui->lineEdit->setText(expression);
}


void Widget::on_Nine_clicked()
{
    expression += '9';
    ui->lineEdit->setText(expression);
}


void Widget::on_Add_clicked()
{
    expression += '+';
    ui->lineEdit->setText(expression);
}


void Widget::on_Sub_clicked()
{
    expression += '-';
    ui->lineEdit->setText(expression);
}


void Widget::on_Tim_clicked()
{
    expression += '*';
    ui->lineEdit->setText(expression);
}


void Widget::on_Div_clicked()
{
    expression += '/';
    ui->lineEdit->setText(expression);
}

void Widget::on_LeftBracket_clicked()
{
    expression += '(';
    ui->lineEdit->setText(expression);
}


void Widget::on_RightBracket_clicked()
{
    expression += ')';
    ui->lineEdit->setText(expression);
}


void Widget::on_Zero_clicked()
{
    expression += '0';
    ui->lineEdit->setText(expression);
}


void Widget::on_AC_clicked()
{
    expression.clear();
    ui->lineEdit->setText(expression);
}


void Widget::on_Del_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

int Widget::priority(const char ch) {
    if(ch == '(') {
        return 3;
    } else if(ch == '*' || ch == '/') {
        return 2;
    } else if(ch == '+' || ch == '-') {
        return 1;
    }
    return -1;
}

void Widget::on_Equal_clicked()
{
    QStack<int> s_num, s_option;

    char option[MaxLength] = { 0 };
    int i = 0, temp = 0, num1, num2;

    QByteArray byte_array = expression.toUtf8();
    strncpy(option, byte_array.data(), MaxLength - 1);

    while(option[i] != '\0' || !s_option.empty()) {
        if(option[i] >= '0' && option[i] <= '9') { //计数
            temp = temp * 10 + option[i] - '0';
            i ++;
            if(option[i] < '0' || option[i] > '9') {
                s_num.push(temp);
                temp = 0;
            }
        } else { //运算
            if(s_option.empty() ||
                priority(option[i]) > priority(s_option.top()) ||
                (s_option.top() == '(' && option[i] != ')')) {
                s_option.push(option[i]);
                i ++;
            } else if(s_option.top() == '(' && option[i] == ')') {
                s_option.pop();
                i ++;
            } else if((option[i] == ')' && s_option.top() != '(') ||
                       priority(option[i] <= priority(s_option.top())) ||
                       (option[i] == '\0' && !s_option.empty())) {
                char ch = s_option.top();
                s_option.pop();
                num1 = s_num.top(); s_num.pop();
                num2 = s_num.top(); s_num.pop();
                if(ch == '+') {
                    s_num.push(num1 + num2);
                } else if(ch == '-') {
                    s_num.push(num2 - num1);
                } else if(ch == '*') {
                    s_num.push(num1 * num2);
                } else if(ch == '/') {
                    s_num.push(num2 / num1);
                }
            }
        }
    }
    ui->lineEdit->setText(QString::number(s_num.top()));
    expression.clear();
}

