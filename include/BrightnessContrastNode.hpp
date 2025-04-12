#ifndef BRIGHTNESSCONTRASTNODE_HPP
#define BRIGHTNESSCONTRASTNODE_HPP
#include "Node.hpp"

class BrightnessContrastNode : public Node {
public:
    BrightnessContrastNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // BRIGHTNESSCONTRASTNODE_HPP

