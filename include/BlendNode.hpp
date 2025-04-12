#ifndef BLENDNODE_HPP
#define BLENDNODE_HPP
#include "Node.hpp"

class BlendNode : public Node {
public:
    BlendNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // BLENDNODE_HPP

