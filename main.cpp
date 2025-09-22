#include "mainwindow.h"
#include <QApplication>
#include "algorithms/bubble_sort.h"
#include <QDebug>
#include <vector>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    std::vector<int> data = {5, 3, 8, 1, 2};
    bubbleSort(data);
    for (int v : data) {
        qDebug() << v;
    }
    return 0;
    w.show();
    return a.exec();
}
