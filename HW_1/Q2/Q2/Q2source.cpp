#include "Q2header.h"
#include <stdexcept>

ImageProcessor::ImageProcessor(const std::string& imagePath) {
    // 이미지를 그레이스케일로 읽기
    image = cv::imread(imagePath, cv::IMREAD_GRAYSCALE);
    if (image.empty()) {
        throw std::runtime_error("이미지를 불러올 수 없습니다: " + imagePath);
    }
}

int ImageProcessor::getMaxBrightness() const {
    double minVal, maxVal;
    cv::minMaxLoc(image, &minVal, &maxVal);
    return static_cast<int>(maxVal);
}