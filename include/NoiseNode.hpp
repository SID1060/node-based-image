#ifndef NOISENODE_HPP
#define NOISENODE_HPP
#include "Node.hpp"

class NoiseNode : public Node {
public:
    NoiseNode();
    cv::Mat process(const std::vector<cv::Mat>& inputs) override;
};

#endif // NOISENODE_HPP

