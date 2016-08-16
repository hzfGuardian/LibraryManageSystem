#ifndef INSERTWINDOW_H
#define INSERTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QFile>
#include <QFileDialog>

namespace Ui {
class insertWindow;
}

class insertWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit insertWindow(QWidget *parent = 0);
    ~insertWindow();
    QString getBno() const;
    QString getCategory() const;
    QString getTitle() const;
    QString getPress() const;
    QString getYear() const;
    QString getAuthor() const;
    QString getPrice() const;
    QString getTotal() const;
    QString getStock() const;

    QString getFileName() const;

    bool inTable(QString bno);

private slots:
    void on_insertBtn_clicked();

    void on_mulInsertBtn_clicked();

    void on_selectFileBtn_clicked();

private:
    Ui::insertWindow *ui;
};

#endif // INSERTWINDOW_H
