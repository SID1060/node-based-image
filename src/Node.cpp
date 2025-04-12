#include "Node.hpp"

Node::Node(const QString& type) : type_(type) {}

QString Node::getType() const { return type_; }

void Node::addInput(Node* node) { inputs_.push_back(node); }

void Node::setParameter(const QString& key, const QVariant& value) {
    parameters_[key] = value;
}

QVariant Node::getParameter(const QString& key) const {
    auto it = parameters_.find(key);
    return it != parameters_.end() ? it->second : QVariant();
}

