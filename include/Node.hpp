#ifndef NODE_HPP
#define NODE_HPP
#include <opencv2/opencv.hpp>
#include <QString>
#include <vector>
#include <map>
#include <QVariant>

class Node {
public:
    Node(const QString& type);
    virtual ~Node() = default;
    virtual cv::Mat process(const std::vector<cv::Mat>& inputs) = 0;
    QString getType() const;
    void addInput(Node* node);
    void setParameter(const QString& key, const QVariant& value);
    QVariant getParameter(const QString& key) const;

protected:
    QString type_;
    std::vector<Node*> inputs_;
    std::map<QString, QVariant> parameters_;
};

#endif // NODE_HPP

