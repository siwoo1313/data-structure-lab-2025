#include <iostream>
#include <vector>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

// 배열을 분할하는 함수 (Lomuto partition 방식)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // 마지막 요소를 피벗으로 선택
    int i = low - 1;        // 작은 요소들의 끝 위치

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // 피벗을 중간 위치로 이동
    return i + 1;
}

// Quick Sort 함수
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);  // 왼쪽 정렬
        quickSort(arr, pivotIndex + 1, high); // 오른쪽 정렬
    }
}

// 벡터 출력 함수
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(time(0))); // 난수 시드 초기화

    // 무작위 숫자 10개 생성
    vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 100); // 0~99 사이 난수
    }

    cout << "정렬 전 배열: ";
    printArray(numbers);

    quickSort(numbers, 0, numbers.size() - 1);

    cout << "정렬 후 배열: ";
    printArray(numbers);

    return 0;
}