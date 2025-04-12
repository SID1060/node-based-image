#ifndef OUTPUTNODE_HPP
#define OUTPUTNODE_HPP
#include "Node.hpp"

class OutputNode : public Node {
public:
    OutputNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // OUTPUTNODE_HPP

