#include "finddialog.h"
#include "ui_finddialog.h"
#include <QMessageBox>

FindDialog::FindDialog(QWidget *parent,QPlainTextEdit *textEdit)
    : QDialog(parent)
    , ui(new Ui::FindDialog)
{
    ui->setupUi(this);
    pTextEdit = textEdit;
    ui->rbDown->setChecked(true);
}

FindDialog::~FindDialog()
{
    delete ui;
}

void FindDialog::on_btnFindNext_clicked()
{
    QString target = ui->searchText->text();
    if(target.isEmpty())
        return;

    QString text = pTextEdit->toPlainText();
    QTextCursor c = pTextEdit->textCursor();
    int index = -1;
    Qt::CaseSensitivity cs = ui->cbCaseSensitive->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;

    if(ui->rbDown->isChecked()){
        index = text.indexOf(target,c.position(),cs);
        if(index < 0)   //有可能是已经到文本尽头了
            index = text.indexOf(target,0,cs);    //从头开始查找

        if(index >= 0){
            c.setPosition(index);
            c.setPosition(index + target.length(),QTextCursor::KeepAnchor);
            pTextEdit->setTextCursor(c);
        }
    }
    else if(ui->rbUp->isChecked()){
        index = text.lastIndexOf(target,c.position() - 1,cs);
        if(index < 0)
            index = text.lastIndexOf(target,text.length() - 1,cs);

        if(index >= 0){
            c.setPosition(index + target.length());
            c.setPosition(index,QTextCursor::KeepAnchor);
            pTextEdit->setTextCursor(c);
        }
    }
    if(index < 0){
        QMessageBox msg(this);
        msg.setWindowTitle("记事本");
        msg.setText(QString("找不到 ") + target);
        msg.setWindowFlag(Qt::Drawer);
        msg.setIcon(QMessageBox::Information);
        msg.setStandardButtons(QMessageBox::Ok);
        msg.exec();
    }
}


void FindDialog::on_btnCancel_clicked()
{
    accept();
}

