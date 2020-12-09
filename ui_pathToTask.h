/********************************************************************************
** Form generated from reading UI file 'pathToTask.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHTOTASK_H
#define UI_PATHTOTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogTask
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogTask)
    {
        if (DialogTask->objectName().isEmpty())
            DialogTask->setObjectName(QString::fromUtf8("DialogTask"));
        DialogTask->resize(397, 73);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogTask->sizePolicy().hasHeightForWidth());
        DialogTask->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(DialogTask);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(DialogTask);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(DialogTask);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(DialogTask);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogTask, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogTask, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogTask);
    } // setupUi

    void retranslateUi(QDialog *DialogTask)
    {
        DialogTask->setWindowTitle(QCoreApplication::translate("DialogTask", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 \321\201 \320\267\320\260\320\264\320\260\321\207\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTask: public Ui_DialogTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHTOTASK_H
