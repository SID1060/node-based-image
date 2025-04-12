#ifndef THRESHOLDNODE_HPP
#define THRESHOLDNODE_HPP
#include "Node.hpp"

class ThresholdNode : public Node {
public:
    ThresholdNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // THRESHOLDNODE_HPP

