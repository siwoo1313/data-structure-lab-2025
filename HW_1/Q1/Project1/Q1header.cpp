#include <iostream>
using namespace std;

// 최댓값을 구해서 반환하는 함수
int findMax(int arr[], int size) {
    // 배열이 비어 있는 경우 예외 처리 (여기선 -1 반환)
    if (size <= 0) return -1;

    int maxVal = arr[0]; // 첫 번째 요소를 초기 최댓값으로 설정

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // 더 큰 값이 있으면 갱신
        }
    }

    return maxVal;
}
