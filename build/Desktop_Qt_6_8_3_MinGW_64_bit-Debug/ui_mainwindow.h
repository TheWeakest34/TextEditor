/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <codeeditor.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actOpen;
    QAction *actSave;
    QAction *actSaveAs;
    QAction *actExit;
    QAction *actUndo;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFind;
    QAction *actReplace;
    QAction *actFont;
    QAction *actRedo;
    QAction *actSelectAll;
    QAction *actShowToolsBar;
    QAction *actShowStatusBar;
    QAction *actAbout;
    QAction *actShowLineNumber;
    QAction *actLineWrap;
    QAction *actSetFontColor;
    QAction *actSetEditorBackgroundColor;
    QAction *actSetFontBackgroundColor;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    CodeEditor *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_V;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(677, 535);
        actNew = new QAction(MainWindow);
        actNew->setObjectName("actNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/New.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actNew->setIcon(icon);
        actNew->setMenuRole(QAction::MenuRole::NoRole);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName("actOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Open.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actOpen->setIcon(icon1);
        actOpen->setMenuRole(QAction::MenuRole::NoRole);
        actSave = new QAction(MainWindow);
        actSave->setObjectName("actSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSave->setIcon(icon2);
        actSave->setMenuRole(QAction::MenuRole::NoRole);
        actSaveAs = new QAction(MainWindow);
        actSaveAs->setObjectName("actSaveAs");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/SaveAs.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSaveAs->setIcon(icon3);
        actSaveAs->setMenuRole(QAction::MenuRole::NoRole);
        actExit = new QAction(MainWindow);
        actExit->setObjectName("actExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Exit.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actExit->setIcon(icon4);
        actExit->setMenuRole(QAction::MenuRole::NoRole);
        actUndo = new QAction(MainWindow);
        actUndo->setObjectName("actUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Undo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actUndo->setIcon(icon5);
        actUndo->setMenuRole(QAction::MenuRole::NoRole);
        actCut = new QAction(MainWindow);
        actCut->setObjectName("actCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Cut.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCut->setIcon(icon6);
        actCut->setMenuRole(QAction::MenuRole::NoRole);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName("actCopy");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Copy.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCopy->setIcon(icon7);
        actCopy->setMenuRole(QAction::MenuRole::NoRole);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName("actPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Paste.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actPaste->setIcon(icon8);
        actPaste->setMenuRole(QAction::MenuRole::NoRole);
        actFind = new QAction(MainWindow);
        actFind->setObjectName("actFind");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Find.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFind->setIcon(icon9);
        actFind->setMenuRole(QAction::MenuRole::NoRole);
        actReplace = new QAction(MainWindow);
        actReplace->setObjectName("actReplace");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Replace.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actReplace->setIcon(icon10);
        actReplace->setMenuRole(QAction::MenuRole::NoRole);
        actFont = new QAction(MainWindow);
        actFont->setObjectName("actFont");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/Font.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFont->setIcon(icon11);
        actFont->setMenuRole(QAction::MenuRole::NoRole);
        actRedo = new QAction(MainWindow);
        actRedo->setObjectName("actRedo");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/Redo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actRedo->setIcon(icon12);
        actRedo->setMenuRole(QAction::MenuRole::NoRole);
        actSelectAll = new QAction(MainWindow);
        actSelectAll->setObjectName("actSelectAll");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/SelectAll.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSelectAll->setIcon(icon13);
        actSelectAll->setMenuRole(QAction::MenuRole::NoRole);
        actShowToolsBar = new QAction(MainWindow);
        actShowToolsBar->setObjectName("actShowToolsBar");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/ToolsBar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actShowToolsBar->setIcon(icon14);
        actShowToolsBar->setMenuRole(QAction::MenuRole::NoRole);
        actShowStatusBar = new QAction(MainWindow);
        actShowStatusBar->setObjectName("actShowStatusBar");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/StatusBar.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actShowStatusBar->setIcon(icon15);
        actShowStatusBar->setMenuRole(QAction::MenuRole::NoRole);
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName("actAbout");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/About.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actAbout->setIcon(icon16);
        actAbout->setMenuRole(QAction::MenuRole::NoRole);
        actShowLineNumber = new QAction(MainWindow);
        actShowLineNumber->setObjectName("actShowLineNumber");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/ShowLine.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actShowLineNumber->setIcon(icon17);
        actShowLineNumber->setMenuRole(QAction::MenuRole::NoRole);
        actLineWrap = new QAction(MainWindow);
        actLineWrap->setObjectName("actLineWrap");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/LineWrap.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actLineWrap->setIcon(icon18);
        actLineWrap->setMenuRole(QAction::MenuRole::NoRole);
        actSetFontColor = new QAction(MainWindow);
        actSetFontColor->setObjectName("actSetFontColor");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/FontColor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSetFontColor->setIcon(icon19);
        actSetFontColor->setMenuRole(QAction::MenuRole::NoRole);
        actSetEditorBackgroundColor = new QAction(MainWindow);
        actSetEditorBackgroundColor->setObjectName("actSetEditorBackgroundColor");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/EditorColor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSetEditorBackgroundColor->setIcon(icon20);
        actSetEditorBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        actSetFontBackgroundColor = new QAction(MainWindow);
        actSetFontBackgroundColor->setObjectName("actSetFontBackgroundColor");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/FrontBackColor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSetFontBackgroundColor->setIcon(icon21);
        actSetFontBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(1, 1, 1, 1);
        textEdit = new CodeEditor(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 677, 24));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_O = new QMenu(menubar);
        menu_O->setObjectName("menu_O");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_O->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(actNew);
        menu_F->addAction(actOpen);
        menu_F->addAction(actSave);
        menu_F->addAction(actSaveAs);
        menu_F->addSeparator();
        menu_F->addAction(actExit);
        menu_E->addAction(actUndo);
        menu_E->addAction(actRedo);
        menu_E->addAction(actCut);
        menu_E->addAction(actCopy);
        menu_E->addAction(actPaste);
        menu_E->addSeparator();
        menu_E->addAction(actFind);
        menu_E->addAction(actReplace);
        menu_E->addSeparator();
        menu_E->addAction(actSelectAll);
        menu_O->addAction(actLineWrap);
        menu_O->addAction(actShowLineNumber);
        menu_O->addAction(actFont);
        menu_O->addAction(actSetFontColor);
        menu_O->addSeparator();
        menu_O->addAction(actSetFontBackgroundColor);
        menu_O->addAction(actSetEditorBackgroundColor);
        menu_V->addAction(actShowToolsBar);
        menu_V->addAction(actShowStatusBar);
        menu_H->addAction(actAbout);
        toolBar->addAction(actNew);
        toolBar->addAction(actOpen);
        toolBar->addAction(actSave);
        toolBar->addAction(actSaveAs);
        toolBar->addSeparator();
        toolBar->addAction(actUndo);
        toolBar->addAction(actRedo);
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addSeparator();
        toolBar->addAction(actFind);
        toolBar->addAction(actReplace);
        toolBar->addSeparator();
        toolBar->addAction(actFont);
        toolBar->addAction(actShowLineNumber);
        toolBar->addAction(actLineWrap);
        toolBar->addSeparator();
        toolBar->addAction(actShowToolsBar);
        toolBar->addAction(actShowStatusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
#if QT_CONFIG(tooltip)
        actNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actSaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(tooltip)
        actExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actUndo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#if QT_CONFIG(tooltip)
        actUndo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
#if QT_CONFIG(tooltip)
        actCopy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFind->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", nullptr));
#if QT_CONFIG(tooltip)
        actFind->setToolTip(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actReplace->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242(&R)", nullptr));
#if QT_CONFIG(tooltip)
        actReplace->setToolTip(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actReplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(&F)", nullptr));
#if QT_CONFIG(tooltip)
        actFont->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actRedo->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        actRedo->setToolTip(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actSelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actSelectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actShowToolsBar->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217(&T)", nullptr));
#if QT_CONFIG(tooltip)
        actShowToolsBar->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actShowStatusBar->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actShowStatusBar->setToolTip(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actAbout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        actShowLineNumber->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\345\217\267", nullptr));
#if QT_CONFIG(tooltip)
        actShowLineNumber->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actShowLineNumber->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actLineWrap->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214(&W)", nullptr));
#if QT_CONFIG(tooltip)
        actLineWrap->setToolTip(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actSetFontColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actSetFontColor->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actSetEditorBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actSetEditorBackgroundColor->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actSetFontBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actSetFontBackgroundColor->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213(&V)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
