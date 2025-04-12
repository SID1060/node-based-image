#include "BlurNode.hpp"

BlurNode::BlurNode() : Node("Blur") {
    parameters_["radius"] = 5;
}

cv::Mat BlurNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    cv::Mat result;
    int radius = parameters_["radius"].toInt() * 2 + 1;
    cv::GaussianBlur(inputs[0], result, cv::Size(radius, radius), 0);
    return result;
}

