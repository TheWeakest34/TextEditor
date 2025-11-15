#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAbout_triggered();

    void on_actFind_triggered();

    void on_actReplace_triggered();

    void on_actNew_triggered();

    void on_actOpen_triggered();

    void on_actSave_triggered();

    void on_actSaveAs_triggered();

    void on_textEdit_textChanged();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_redoAvailable(bool b);

    void on_textEdit_undoAvailable(bool b);

    void on_actCopy_triggered();

    void on_actCut_triggered();

    void on_actFont_triggered();

    void on_actSetFontColor_triggered();

    void on_actSetEditorBackgroundColor_triggered();

    void on_actLineWrap_triggered();

    void on_actUndo_triggered();

    void on_actRedo_triggered();

    void on_actPaste_triggered();

    void on_actShowToolsBar_triggered();

    void on_actShowStatusBar_triggered();

    void on_actSelectAll_triggered();

    void on_actExit_triggered();

    void on_textEdit_cursorPositionChanged();


private:
    Ui::MainWindow *ui;

    QLabel statusLabel;
    QLabel statusCursorLabel;

    QString filePath;
    bool textChanged;

    bool userEditConfirmed();
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
