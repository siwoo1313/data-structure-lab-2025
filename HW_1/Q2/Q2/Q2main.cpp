#include <iostream>
#include "Q2header.h"

int main() {
    try {
        // 이미지 처리 객체 생성
        ImageProcessor processor("Lenna.png");

        // 최대 밝기 계산
        int maxBrightness = processor.getMaxBrightness();

        // 출력
        std::cout << "최대 밝기 값: " << maxBrightness << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "[에러 발생] " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
