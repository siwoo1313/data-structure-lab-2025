#include <iostream>
#include "Q2header.h"

int main() {
    try {
        // �̹��� ó�� ��ü ����
        ImageProcessor processor("Lenna.png");

        // �ִ� ��� ���
        int maxBrightness = processor.getMaxBrightness();

        // ���
        std::cout << "�ִ� ��� ��: " << maxBrightness << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "[���� �߻�] " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
