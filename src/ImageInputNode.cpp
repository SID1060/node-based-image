#include "ImageInputNode.hpp"

ImageInputNode::ImageInputNode() : Node("ImageInput") {
    parameters_["path"] = QString("");
}

cv::Mat ImageInputNode::process(const std::vector<cv::Mat>& inputs) {
    QString path = parameters_["path"].toString();
    if (!path.isEmpty()) {
        return cv::imread(path.toStdString());
    }
    return cv::Mat();
}

