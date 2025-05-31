#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QFont>
#include <QStack>
#include <QByteArray>
#include <QThread>

#define MaxLength 256

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_One_clicked();
    void on_Two_clicked();
    void on_Three_clicked();
    void on_Four_clicked();
    void on_Five_clicked();
    void on_Six_clicked();
    void on_Seven_clicked();
    void on_Eight_clicked();
    void on_Nine_clicked();
    void on_Add_clicked();
    void on_Sub_clicked();
    void on_Tim_clicked();
    void on_Div_clicked();
    void on_LeftBracket_clicked();
    void on_RightBracket_clicked();
    void on_Zero_clicked();
    void on_AC_clicked();
    void on_Del_clicked();
    void on_Equal_clicked();
    int priority(const char ch);

private:
    Ui::Widget *ui;
    QString expression;
};

#endif // WIDGET_H
