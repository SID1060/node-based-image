#ifndef BLURNODE_HPP
#define BLURNODE_HPP
#include "Node.hpp"

class BlurNode : public Node {
public:
    BlurNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // BLURNODE_HPP

