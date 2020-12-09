/********************************************************************************
** Form generated from reading UI file 'pathToRepo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHTOREPO_H
#define UI_PATHTOREPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogRepo
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogRepo)
    {
        if (DialogRepo->objectName().isEmpty())
            DialogRepo->setObjectName(QString::fromUtf8("DialogRepo"));
        DialogRepo->resize(433, 80);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogRepo->sizePolicy().hasHeightForWidth());
        DialogRepo->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(DialogRepo);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(DialogRepo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(DialogRepo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(DialogRepo);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRepo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRepo, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRepo);
    } // setupUi

    void retranslateUi(QDialog *DialogRepo)
    {
        DialogRepo->setWindowTitle(QCoreApplication::translate("DialogRepo", "\320\237\321\203\321\202\321\214 \320\272 \321\200\320\265\320\277\320\276\320\267\320\270\321\202\320\276\321\200\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRepo: public Ui_DialogRepo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHTOREPO_H
