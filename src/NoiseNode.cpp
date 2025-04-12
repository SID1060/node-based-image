#include "NoiseNode.hpp"

NoiseNode::NoiseNode() : Node("Noise") {
    parameters_["scale"] = 10.0;
}

cv::Mat NoiseNode::process(const std::vector<cv::Mat>& inputs) {
    cv::Mat result(512, 512, CV_8UC3);
    cv::randu(result, 0, 255);
    return result;
}

