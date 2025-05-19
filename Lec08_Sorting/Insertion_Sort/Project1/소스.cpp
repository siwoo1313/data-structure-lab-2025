#include <iostream>
#include <vector>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

// Insertion Sort �Լ�
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];     // ���� ������ ��
        int j = i - 1;
        // ���� �κп��� key���� ū ���� ���������� �� ĭ �̵�
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // ������ ��ġ�� key ����
        arr[j + 1] = key;
    }
}

// ���� ��� �Լ�
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    srand(static_cast<unsigned>(time(0))); // ���� �õ� �ʱ�ȭ

    // ������ ���� 10�� ����
    vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 100); // 0~99 ���� ����
    }

    cout << "���� �� �迭: ";
    printArray(numbers);

    insertionSort(numbers);

    cout << "���� �� �迭: ";
    printArray(numbers);

    return 0;
}