#ifndef CONVOLUTIONNODE_HPP
#define CONVOLUTIONNODE_HPP
#include "Node.hpp"

class ConvolutionNode : public Node {
public:
    ConvolutionNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // CONVOLUTIONNODE_HPP

