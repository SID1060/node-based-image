#include "ThresholdNode.hpp"

ThresholdNode::ThresholdNode() : Node("Threshold") {
    parameters_["value"] = 128;
    parameters_["type"] = QString("binary");
}

cv::Mat ThresholdNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    cv::Mat gray, result;
    cv::cvtColor(inputs[0], gray, cv::COLOR_BGR2GRAY);
    int value = parameters_["value"].toInt();
    cv::threshold(gray, result, value, 255, cv::THRESH_BINARY);
    return result;
}

