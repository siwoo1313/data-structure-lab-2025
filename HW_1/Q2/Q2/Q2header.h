#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include <opencv2/opencv.hpp>
#include <string>

class ImageProcessor {
public:
    ImageProcessor(const std::string& imagePath);
    int getMaxBrightness() const;

private:
    cv::Mat image;
};

#endif 