#ifndef EDGEDETECTIONNODE_HPP
#define EDGEDETECTIONNODE_HPP
#include "Node.hpp"

class EdgeDetectionNode : public Node {
public:
    EdgeDetectionNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // EDGEDETECTIONNODE_HPP

