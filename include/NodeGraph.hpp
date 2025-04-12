#ifndef NODEGRAPH_HPP
#define NODEGRAPH_HPP
#include <QGraphicsScene>
#include "Node.hpp"
#include <map>

class NodeGraph : public QGraphicsScene {
    Q_OBJECT
public:
    NodeGraph(QObject* parent = nullptr);
    void addNode(Node* node, const QPointF& pos);
    void connectNodes(Node* from, Node* to);
    cv::Mat execute();

private:
    std::vector<Node*> nodes_;
    std::map<Node*, std::vector<Node*>> connections_;
};

#endif // NODEGRAPH_HPP

