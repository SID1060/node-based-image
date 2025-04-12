#include "BrightnessContrastNode.hpp"

BrightnessContrastNode::BrightnessContrastNode() : Node("BrightnessContrast") {
    parameters_["brightness"] = 0;
    parameters_["contrast"] = 1.0;
}

cv::Mat BrightnessContrastNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    cv::Mat result;
    double brightness = parameters_["brightness"].toDouble();
    double contrast = parameters_["contrast"].toDouble();
    
    inputs[0].convertTo(result, -1, contrast, brightness);
    return result;
}

