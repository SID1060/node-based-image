#include "EdgeDetectionNode.hpp"

EdgeDetectionNode::EdgeDetectionNode() : Node("EdgeDetection") {
    parameters_["threshold1"] = 100;
    parameters_["threshold2"] = 200;
}

cv::Mat EdgeDetectionNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    cv::Mat gray, result;
    cv::cvtColor(inputs[0], gray, cv::COLOR_BGR2GRAY);
    int t1 = parameters_["threshold1"].toInt();
    int t2 = parameters_["threshold2"].toInt();
    cv::Canny(gray, result, t1, t2);
    return result;
}

