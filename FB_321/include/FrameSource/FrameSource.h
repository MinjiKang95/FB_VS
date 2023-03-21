#pragma once

//#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

class FrameSource
{
public:
	virtual ~FrameSource() {}

	virtual void nextFrame(cv::OutputArray frame) = 0;
	virtual void reset() = 0;
};

