#include "MainWindow.hpp"
#include <QDockWidget>
#include <QMenuBar>
#include <QToolBar>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    setupUi();
}

void MainWindow::setupUi() {
    nodeGraph_ = new NodeGraph(this);
    canvas_ = new QGraphicsView(nodeGraph_, this);
    setCentralWidget(canvas_);

    QMenu* fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction("Open", this, [](){});
    fileMenu->addAction("Save", this, [](){});

    QDockWidget* properties = new QDockWidget("Properties", this);
    addDockWidget(Qt::RightDockWidgetArea, properties);

    resize(800, 600);
}

