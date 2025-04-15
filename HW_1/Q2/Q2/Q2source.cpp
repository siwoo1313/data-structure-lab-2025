#include "Q2header.h"
#include <stdexcept>

ImageProcessor::ImageProcessor(const std::string& imagePath) {
    // �̹����� �׷��̽����Ϸ� �б�
    image = cv::imread(imagePath, cv::IMREAD_GRAYSCALE);
    if (image.empty()) {
        throw std::runtime_error("�̹����� �ҷ��� �� �����ϴ�: " + imagePath);
    }
}

int ImageProcessor::getMaxBrightness() const {
    double minVal, maxVal;
    cv::minMaxLoc(image, &minVal, &maxVal);
    return static_cast<int>(maxVal);
}