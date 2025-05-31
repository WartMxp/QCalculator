/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *AC;
    QPushButton *Add;
    QPushButton *Sub;
    QPushButton *Del;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *Tim;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Div;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *LeftBracket;
    QPushButton *Zero;
    QPushButton *RightBracket;
    QPushButton *Equal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(200, 300);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 173, 40));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 174, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        AC = new QPushButton(widget);
        AC->setObjectName("AC");
        AC->setMinimumSize(QSize(40, 40));
        AC->setMaximumSize(QSize(40, 40));
        AC->setIconSize(QSize(12, 12));

        gridLayout->addWidget(AC, 0, 0, 1, 1);

        Add = new QPushButton(widget);
        Add->setObjectName("Add");
        Add->setMinimumSize(QSize(40, 40));
        Add->setMaximumSize(QSize(40, 40));
        Add->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Add, 0, 1, 1, 1);

        Sub = new QPushButton(widget);
        Sub->setObjectName("Sub");
        Sub->setMinimumSize(QSize(40, 40));
        Sub->setMaximumSize(QSize(40, 40));
        Sub->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Sub, 0, 2, 1, 1);

        Del = new QPushButton(widget);
        Del->setObjectName("Del");
        Del->setMinimumSize(QSize(40, 40));
        Del->setMaximumSize(QSize(40, 40));
        Del->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Del, 0, 3, 1, 1);

        Seven = new QPushButton(widget);
        Seven->setObjectName("Seven");
        Seven->setMinimumSize(QSize(40, 40));
        Seven->setMaximumSize(QSize(40, 40));
        Seven->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Seven, 1, 0, 1, 1);

        Eight = new QPushButton(widget);
        Eight->setObjectName("Eight");
        Eight->setMinimumSize(QSize(40, 40));
        Eight->setMaximumSize(QSize(40, 40));
        Eight->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Eight, 1, 1, 1, 1);

        Nine = new QPushButton(widget);
        Nine->setObjectName("Nine");
        Nine->setMinimumSize(QSize(40, 40));
        Nine->setMaximumSize(QSize(40, 40));
        Nine->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Nine, 1, 2, 1, 1);

        Tim = new QPushButton(widget);
        Tim->setObjectName("Tim");
        Tim->setMinimumSize(QSize(40, 40));
        Tim->setMaximumSize(QSize(40, 40));
        Tim->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Tim, 1, 3, 1, 1);

        Four = new QPushButton(widget);
        Four->setObjectName("Four");
        Four->setMinimumSize(QSize(40, 40));
        Four->setMaximumSize(QSize(40, 40));
        Four->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Four, 2, 0, 1, 1);

        Five = new QPushButton(widget);
        Five->setObjectName("Five");
        Five->setMinimumSize(QSize(40, 40));
        Five->setMaximumSize(QSize(40, 40));
        Five->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Five, 2, 1, 1, 1);

        Six = new QPushButton(widget);
        Six->setObjectName("Six");
        Six->setMinimumSize(QSize(40, 40));
        Six->setMaximumSize(QSize(40, 40));
        Six->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Six, 2, 2, 1, 1);

        Div = new QPushButton(widget);
        Div->setObjectName("Div");
        Div->setMinimumSize(QSize(40, 40));
        Div->setMaximumSize(QSize(40, 40));
        Div->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Div, 2, 3, 1, 1);

        One = new QPushButton(widget);
        One->setObjectName("One");
        One->setMinimumSize(QSize(40, 40));
        One->setMaximumSize(QSize(40, 40));
        One->setIconSize(QSize(12, 12));

        gridLayout->addWidget(One, 3, 0, 1, 1);

        Two = new QPushButton(widget);
        Two->setObjectName("Two");
        Two->setMinimumSize(QSize(40, 40));
        Two->setMaximumSize(QSize(40, 40));
        Two->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Two, 3, 1, 1, 1);

        Three = new QPushButton(widget);
        Three->setObjectName("Three");
        Three->setMinimumSize(QSize(40, 40));
        Three->setMaximumSize(QSize(40, 40));
        Three->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Three, 3, 2, 1, 1);

        LeftBracket = new QPushButton(widget);
        LeftBracket->setObjectName("LeftBracket");
        LeftBracket->setMinimumSize(QSize(40, 40));
        LeftBracket->setMaximumSize(QSize(40, 40));
        LeftBracket->setIconSize(QSize(12, 12));

        gridLayout->addWidget(LeftBracket, 4, 0, 1, 1);

        Zero = new QPushButton(widget);
        Zero->setObjectName("Zero");
        Zero->setMinimumSize(QSize(40, 40));
        Zero->setMaximumSize(QSize(40, 40));
        Zero->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Zero, 4, 1, 1, 1);

        RightBracket = new QPushButton(widget);
        RightBracket->setObjectName("RightBracket");
        RightBracket->setMinimumSize(QSize(40, 40));
        RightBracket->setMaximumSize(QSize(40, 40));
        RightBracket->setIconSize(QSize(12, 12));

        gridLayout->addWidget(RightBracket, 4, 2, 1, 1);

        Equal = new QPushButton(widget);
        Equal->setObjectName("Equal");
        Equal->setMinimumSize(QSize(40, 40));
        Equal->setMaximumSize(QSize(40, 86));
        Equal->setIconSize(QSize(12, 12));

        gridLayout->addWidget(Equal, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        AC->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        Add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Del->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        Seven->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Eight->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Nine->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Tim->setText(QCoreApplication::translate("Widget", "\303\227", nullptr));
        Four->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Five->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Six->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Div->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        One->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Two->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Three->setText(QCoreApplication::translate("Widget", "3", nullptr));
        LeftBracket->setText(QCoreApplication::translate("Widget", "(", nullptr));
        Zero->setText(QCoreApplication::translate("Widget", "0", nullptr));
        RightBracket->setText(QCoreApplication::translate("Widget", ")", nullptr));
        Equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
