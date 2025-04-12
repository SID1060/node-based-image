#include "ConvolutionNode.hpp"

ConvolutionNode::ConvolutionNode() : Node("Convolution") {
    parameters_["kernel"] = QString("0,-1,0,-1,5,-1,0,-1,0");
}

cv::Mat ConvolutionNode::process(const std::vector<cv::Mat>& inputs) {
    if (inputs.empty() || inputs[0].empty()) return cv::Mat();
    
    cv::Mat result;
    QString kernelStr = parameters_["kernel"].toString();
    QStringList values = kernelStr.split(",");
    cv::Mat kernel(3, 3, CV_32F);
    for (int i = 0; i < 9; ++i) {
        kernel.at<float>(i / 3, i % 3) = values[i].toFloat();
    }
    cv::filter2D(inputs[0], result, -1, kernel);
    return result;
}

