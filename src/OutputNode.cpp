#include "OutputNode.hpp"

OutputNode::OutputNode() : Node("Output") {
    parameters_["path"] = QString("");
    parameters_["format"] = QString("PNG");
}

cv::Mat OutputNode::process(const std::vector<cv::Mat>& inputs) {
    if (!inputs.empty() && !inputs[0].empty()) {
        QString path = parameters_["path"].toString();
        if (!path.isEmpty()) {
            cv::imwrite(path.toStdString(), inputs[0]);
        }
        return inputs[0];
    }
    return cv::Mat();
}

