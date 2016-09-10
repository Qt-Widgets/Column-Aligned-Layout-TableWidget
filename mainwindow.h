#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class ColumnAlignedLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onTableColumnsResized(int logicalIndex, int oldSize, int newSize);

private:
    Ui::MainWindow *ui;

    ColumnAlignedLayout *alignedLayout;
};

#endif // MAINWINDOW_H