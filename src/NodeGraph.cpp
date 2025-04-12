#include "NodeGraph.hpp"
#include <algorithm>

NodeGraph::NodeGraph(QObject* parent) : QGraphicsScene(parent) {}

void NodeGraph::addNode(Node* node, const QPointF& pos) {
    nodes_.push_back(node);
}

void NodeGraph::connectNodes(Node* from, Node* to) {
    connections_[to].push_back(from);
    to->addInput(from);
}

cv::Mat NodeGraph::execute() {
    for (auto node : nodes_) {
        if (node->getType() == "Output") {
            std::vector<cv::Mat> inputs;
            for (auto input : connections_[node]) {
                inputs.push_back(input->process({}));
            }
            return node->process(inputs);
        }
    }
    return cv::Mat();
}

