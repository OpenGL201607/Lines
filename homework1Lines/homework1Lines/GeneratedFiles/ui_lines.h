/********************************************************************************
** Form generated from reading UI file 'lines.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINES_H
#define UI_LINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinesClass
{
public:

    void setupUi(QWidget *LinesClass)
    {
        if (LinesClass->objectName().isEmpty())
            LinesClass->setObjectName(QStringLiteral("LinesClass"));
        LinesClass->resize(600, 400);

        retranslateUi(LinesClass);

        QMetaObject::connectSlotsByName(LinesClass);
    } // setupUi

    void retranslateUi(QWidget *LinesClass)
    {
        LinesClass->setWindowTitle(QApplication::translate("LinesClass", "Lines", 0));
    } // retranslateUi

};

namespace Ui {
    class LinesClass: public Ui_LinesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINES_H
