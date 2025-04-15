#include <iostream>
using namespace std;

// �ִ��� ���ؼ� ��ȯ�ϴ� �Լ�
int findMax(int arr[], int size) {
    // �迭�� ��� �ִ� ��� ���� ó�� (���⼱ -1 ��ȯ)
    if (size <= 0) return -1;

    int maxVal = arr[0]; // ù ��° ��Ҹ� �ʱ� �ִ����� ����

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // �� ū ���� ������ ����
        }
    }

    return maxVal;
}
