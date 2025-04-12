#ifndef COLORCHANNELSPLITTERNODE_HPP
#define COLORCHANNELSPLITTERNODE_HPP
#include "Node.hpp"

class ColorChannelSplitterNode : public Node {
public:
    ColorChannelSplitterNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // COLORCHANNELSPLITTERNODE_HPP

