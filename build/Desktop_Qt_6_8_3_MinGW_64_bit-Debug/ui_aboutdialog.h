/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(400, 288);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(false);
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, -30, 341, 151));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 210, 211, 19));
        layoutWidget = new QWidget(AboutDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 110, 224, 73));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(AboutDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 70, 101, 121));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/images/textBook.svg);"));

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "\345\205\263\344\272\216", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "\346\227\240\344\270\212\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "V1.0 build 20251103", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "\345\274\200\345\217\221\350\200\205\357\274\232\345\217\266\347\202\257\345\235\232", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "\345\255\246\345\217\267   \357\274\2322023414290434", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Email  \357\274\2323278839504@qq.com", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
