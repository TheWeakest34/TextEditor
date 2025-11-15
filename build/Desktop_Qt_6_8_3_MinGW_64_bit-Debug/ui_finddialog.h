/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *searchText;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnFindNext;
    QSpacerItem *verticalSpacer;
    QPushButton *btnCancel;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbCaseSensitive;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName("FindDialog");
        FindDialog->resize(381, 116);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindDialog->sizePolicy().hasHeightForWidth());
        FindDialog->setSizePolicy(sizePolicy);
        FindDialog->setMinimumSize(QSize(200, 116));
        FindDialog->setMaximumSize(QSize(381, 116));
        gridLayout_2 = new QGridLayout(FindDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(FindDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        searchText = new QLineEdit(FindDialog);
        searchText->setObjectName("searchText");

        horizontalLayout_2->addWidget(searchText);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnFindNext = new QPushButton(FindDialog);
        btnFindNext->setObjectName("btnFindNext");

        verticalLayout_2->addWidget(btnFindNext);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnCancel = new QPushButton(FindDialog);
        btnCancel->setObjectName("btnCancel");

        verticalLayout_2->addWidget(btnCancel);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cbCaseSensitive = new QCheckBox(FindDialog);
        cbCaseSensitive->setObjectName("cbCaseSensitive");

        horizontalLayout_3->addWidget(cbCaseSensitive);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FindDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        rbUp = new QRadioButton(FindDialog);
        buttonGroup = new QButtonGroup(FindDialog);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(rbUp);
        rbUp->setObjectName("rbUp");

        horizontalLayout->addWidget(rbUp);

        rbDown = new QRadioButton(FindDialog);
        buttonGroup->addButton(rbDown);
        rbDown->setObjectName("rbDown");

        horizontalLayout->addWidget(rbDown);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276", nullptr));
        label_2->setText(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        btnFindNext->setText(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", nullptr));
        btnCancel->setText(QCoreApplication::translate("FindDialog", "\345\217\226\346\266\210", nullptr));
        cbCaseSensitive->setText(QCoreApplication::translate("FindDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        label->setText(QCoreApplication::translate("FindDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QCoreApplication::translate("FindDialog", "\345\220\221\344\270\212", nullptr));
        rbDown->setText(QCoreApplication::translate("FindDialog", "\345\220\221\344\270\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
