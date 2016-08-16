#ifndef BRWWINDOW_H
#define BRWWINDOW_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class brwWindow;
}

class brwWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit brwWindow(QWidget *parent = 0);
    ~brwWindow();

    QString getCno() const;
    QString getBno() const;

    QString getTime();

private slots:
    void on_cardQueryBtn_clicked();

    void on_borrowBtn_clicked();

    void on_retBtn_clicked();

private:
    Ui::brwWindow *ui;
};

#endif // BRWWINDOW_H
