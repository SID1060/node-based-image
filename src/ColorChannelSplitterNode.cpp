#include "ColorChannelSplitterNode.hpp"

ColorChannelSplitterNode::ColorChannelSplitterNode() : Node("ColorChannelSplitter") {
    parameters_["channel"] = QString("R");
}

cv::Mat ColorChannelSplitterNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    std::vector<cv::Mat> channels;
    cv::split(inputs[0], channels);
    QString channel = parameters_["channel"].toString();
    cv::Mat result;
    if (channel == "R") {
        cv::cvtColor(channels[2], result, cv::COLOR_GRAY2BGR);
        return result;
    }
    if (channel == "G") {
        cv::cvtColor(channels[1], result, cv::COLOR_GRAY2BGR);
        return result;
    }
    if (channel == "B") {
        cv::cvtColor(channels[0], result, cv::COLOR_GRAY2BGR);
        return result;
    }
    return cv::Mat();
}

