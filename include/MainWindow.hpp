#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP
#include <QMainWindow>
#include <QGraphicsView>
#include "NodeGraph.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);

private:
    void setupUi();
    NodeGraph* nodeGraph_;
    QGraphicsView* canvas_;
};

#endif // MAINWINDOW_HPP

