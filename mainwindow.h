#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include <QMainWindow>
#include <QAbstractButton>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void numberGroup_clicked(QAbstractButton*);
    void actionGroup_clicked(QAbstractButton*);

    void on_actionDel_clicked();
    void on_actionCalc_clicked();
    void on_comma_clicked();
    void on_actionClear_clicked();






private:
    Ui::MainWindow *ui;

    const int DIGIT_LIMIT = 16;

    bool operatorClicked;

    QChar storedOperator;

    bool hasStoredNumber;

    double storedNumber;

    void calculate_result();

protected:
    void keyPressEvent(QKeyEvent *e);
};

#endif // MAINWINDOW_H
