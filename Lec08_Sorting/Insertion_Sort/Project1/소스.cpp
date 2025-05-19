#include <iostream>
#include <vector>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

// Insertion Sort 함수
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];     // 현재 삽입할 값
        int j = i - 1;
        // 왼쪽 부분에서 key보다 큰 값은 오른쪽으로 한 칸 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // 적절한 위치에 key 삽입
        arr[j + 1] = key;
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

    insertionSort(numbers);

    cout << "정렬 후 배열: ";
    printArray(numbers);

    return 0;
}