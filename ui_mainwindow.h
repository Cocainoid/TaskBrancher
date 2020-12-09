/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *taskType;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *taskDoer;
    QSpacerItem *horizontalSpacer_15;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer_16;
    QFrame *line_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTextEdit *textEdit;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *toolButtonRepo;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *toolButtonRevision;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QToolButton *toolButton_4;
    QFrame *line;
    QLabel *label_9;
    QToolButton *toolButton_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *line_2;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(709, 628);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 5, -1, 5);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 5);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        taskType = new QComboBox(centralwidget);
        taskType->setObjectName(QString::fromUtf8("taskType"));
        taskType->setMinimumSize(QSize(150, 30));

        horizontalLayout->addWidget(taskType);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        taskDoer = new QComboBox(centralwidget);
        taskDoer->setObjectName(QString::fromUtf8("taskDoer"));
        taskDoer->setMinimumSize(QSize(150, 30));

        horizontalLayout->addWidget(taskDoer);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        toolButton_6 = new QToolButton(centralwidget);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        toolButton_6->setMinimumSize(QSize(150, 30));

        horizontalLayout->addWidget(toolButton_6);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);


        verticalLayout_5->addLayout(horizontalLayout);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, -1, 5);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(0, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);


        verticalLayout_5->addLayout(verticalLayout);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 5, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(140, 0));

        horizontalLayout_4->addWidget(label_5, 0, Qt::AlignHCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_6, 0, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(140, 0));

        horizontalLayout_4->addWidget(label_7, 0, Qt::AlignHCenter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, 5);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(140, 30));
        checkBox->setIconSize(QSize(25, 25));

        horizontalLayout_3->addWidget(checkBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        toolButtonRepo = new QToolButton(centralwidget);
        toolButtonRepo->setObjectName(QString::fromUtf8("toolButtonRepo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonRepo->sizePolicy().hasHeightForWidth());
        toolButtonRepo->setSizePolicy(sizePolicy);
        toolButtonRepo->setMinimumSize(QSize(140, 30));
        toolButtonRepo->setMaximumSize(QSize(150, 16777215));
        toolButtonRepo->setSizeIncrement(QSize(150, 0));
        toolButtonRepo->setBaseSize(QSize(150, 0));

        horizontalLayout_3->addWidget(toolButtonRepo);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        toolButtonRevision = new QToolButton(centralwidget);
        toolButtonRevision->setObjectName(QString::fromUtf8("toolButtonRevision"));
        sizePolicy.setHeightForWidth(toolButtonRevision->sizePolicy().hasHeightForWidth());
        toolButtonRevision->setSizePolicy(sizePolicy);
        toolButtonRevision->setMinimumSize(QSize(140, 30));
        toolButtonRevision->setMaximumSize(QSize(150, 16777215));
        toolButtonRevision->setSizeIncrement(QSize(150, 0));
        toolButtonRevision->setBaseSize(QSize(150, 0));

        horizontalLayout_3->addWidget(toolButtonRevision, 0, Qt::AlignHCenter);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 5, -1, 5);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(140, 20));

        verticalLayout_3->addWidget(label_8, 0, Qt::AlignHCenter);

        toolButton_4 = new QToolButton(centralwidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(140, 30));

        verticalLayout_3->addWidget(toolButton_4, 0, Qt::AlignHCenter);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(140, 20));

        verticalLayout_3->addWidget(label_9, 0, Qt::AlignHCenter);

        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(140, 30));

        verticalLayout_3->addWidget(toolButton_3, 0, Qt::AlignHCenter);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 5, -1, 5);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(140, 30));
        pushButton->setSizeIncrement(QSize(0, 0));
        pushButton->setBaseSize(QSize(150, 0));

        verticalLayout_4->addWidget(pushButton, 0, Qt::AlignHCenter);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_4->addWidget(textEdit_2);


        verticalLayout_7->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 709, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \321\200\320\265\320\277\320\276\320\267\320\270\321\202\320\276\321\200\320\270\321\216", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 \321\201 \320\267\320\260\320\264\320\260\321\207\320\260\320\274\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\270\320\277\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\276\320\264\320\270\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\271 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\262\320\265\321\202\320\272\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\276\320\264\320\270\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\271 \320\262\320\265\321\202\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\265\320\262\320\270\320\267\320\270\320\270", nullptr));
        checkBox->setText(QString());
        toolButtonRepo->setText(QCoreApplication::translate("MainWindow", "Repo Browser", nullptr));
        toolButtonRevision->setText(QCoreApplication::translate("MainWindow", "Revision", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\262\320\265\321\202\320\272\320\270 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\204\320\260\320\271\320\273\320\276\320\262 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
