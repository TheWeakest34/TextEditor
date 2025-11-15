/********************************************************************************
** Form generated from reading UI file 'replacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEDIALOG_H
#define UI_REPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplaceDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *searchText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *targetText;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbCaseSensitive;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnFindNext;
    QPushButton *btnReplace;
    QPushButton *btnReplaceAll;
    QPushButton *btnCancel;

    void setupUi(QDialog *ReplaceDialog)
    {
        if (ReplaceDialog->objectName().isEmpty())
            ReplaceDialog->setObjectName("ReplaceDialog");
        ReplaceDialog->resize(381, 157);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReplaceDialog->sizePolicy().hasHeightForWidth());
        ReplaceDialog->setSizePolicy(sizePolicy);
        ReplaceDialog->setMinimumSize(QSize(381, 157));
        ReplaceDialog->setMaximumSize(QSize(381, 157));
        gridLayout = new QGridLayout(ReplaceDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(ReplaceDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        searchText = new QLineEdit(ReplaceDialog);
        searchText->setObjectName("searchText");
        searchText->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(searchText);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(ReplaceDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        targetText = new QLineEdit(ReplaceDialog);
        targetText->setObjectName("targetText");
        targetText->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(targetText);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cbCaseSensitive = new QCheckBox(ReplaceDialog);
        cbCaseSensitive->setObjectName("cbCaseSensitive");

        horizontalLayout_3->addWidget(cbCaseSensitive);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ReplaceDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        rbUp = new QRadioButton(ReplaceDialog);
        rbUp->setObjectName("rbUp");
        rbUp->setMinimumSize(QSize(0, 0));
        rbUp->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(rbUp);

        rbDown = new QRadioButton(ReplaceDialog);
        rbDown->setObjectName("rbDown");
        rbDown->setMinimumSize(QSize(0, 0));
        rbDown->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(rbDown);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnFindNext = new QPushButton(ReplaceDialog);
        btnFindNext->setObjectName("btnFindNext");

        verticalLayout_4->addWidget(btnFindNext);

        btnReplace = new QPushButton(ReplaceDialog);
        btnReplace->setObjectName("btnReplace");

        verticalLayout_4->addWidget(btnReplace);

        btnReplaceAll = new QPushButton(ReplaceDialog);
        btnReplaceAll->setObjectName("btnReplaceAll");

        verticalLayout_4->addWidget(btnReplaceAll);

        btnCancel = new QPushButton(ReplaceDialog);
        btnCancel->setObjectName("btnCancel");

        verticalLayout_4->addWidget(btnCancel);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        retranslateUi(ReplaceDialog);

        QMetaObject::connectSlotsByName(ReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplaceDialog)
    {
        ReplaceDialog->setWindowTitle(QCoreApplication::translate("ReplaceDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ReplaceDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ReplaceDialog", "\346\233\277\346\215\242\344\270\272\357\274\232", nullptr));
        cbCaseSensitive->setText(QCoreApplication::translate("ReplaceDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        label->setText(QCoreApplication::translate("ReplaceDialog", "\346\226\271\345\220\221", nullptr));
        rbUp->setText(QCoreApplication::translate("ReplaceDialog", "\345\220\221\344\270\212", nullptr));
        rbDown->setText(QCoreApplication::translate("ReplaceDialog", "\345\220\221\344\270\213", nullptr));
        btnFindNext->setText(QCoreApplication::translate("ReplaceDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", nullptr));
        btnReplace->setText(QCoreApplication::translate("ReplaceDialog", "\346\233\277\346\215\242(R)", nullptr));
        btnReplaceAll->setText(QCoreApplication::translate("ReplaceDialog", "\345\205\250\351\203\250\346\233\277\346\215\242(A)", nullptr));
        btnCancel->setText(QCoreApplication::translate("ReplaceDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceDialog: public Ui_ReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEDIALOG_H
