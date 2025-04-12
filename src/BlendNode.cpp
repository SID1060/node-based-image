#include "BlendNode.hpp"

BlendNode::BlendNode() : Node("Blend") {
    parameters_["mode"] = QString("normal");
    parameters_["opacity"] = 0.5;
}

cv::Mat BlendNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.size() < 2 || inputs[0].empty() || inputs[1].empty()) return cv::Mat();
    
    cv::Mat result;
    double opacity = parameters_["opacity"].toDouble();
    cv::addWeighted(inputs[0], opacity, inputs[1], 1.0 - opacity, 0.0, result);
    return result;
}

