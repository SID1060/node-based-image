#ifndef IMAGEINPUTNODE_HPP
#define IMAGEINPUTNODE_HPP
#include "Node.hpp"

class ImageInputNode : public Node {
public:
    ImageInputNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // IMAGEINPUTNODE_HPP

