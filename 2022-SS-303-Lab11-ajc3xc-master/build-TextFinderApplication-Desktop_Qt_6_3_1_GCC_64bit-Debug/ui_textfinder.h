/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFinder
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *TextFinder)
    {
        if (TextFinder->objectName().isEmpty())
            TextFinder->setObjectName(QString::fromUtf8("TextFinder"));
        TextFinder->resize(800, 600);
        widget = new QWidget(TextFinder);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 60, 298, 226));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        findButton = new QPushButton(widget);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        horizontalLayout->addWidget(findButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(TextFinder);

        QMetaObject::connectSlotsByName(TextFinder);
    } // setupUi

    void retranslateUi(QWidget *TextFinder)
    {
        TextFinder->setWindowTitle(QCoreApplication::translate("TextFinder", "TextFinder", nullptr));
        label->setText(QCoreApplication::translate("TextFinder", "Keyword:", nullptr));
        findButton->setText(QCoreApplication::translate("TextFinder", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFinder: public Ui_TextFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H
