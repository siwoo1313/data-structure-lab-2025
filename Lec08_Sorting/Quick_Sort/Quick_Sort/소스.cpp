#include <iostream>
#include <vector>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

// �迭�� �����ϴ� �Լ� (Lomuto partition ���)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // ������ ��Ҹ� �ǹ����� ����
    int i = low - 1;        // ���� ��ҵ��� �� ��ġ

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // �ǹ��� �߰� ��ġ�� �̵�
    return i + 1;
}

// Quick Sort �Լ�
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);  // ���� ����
        quickSort(arr, pivotIndex + 1, high); // ������ ����
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

    quickSort(numbers, 0, numbers.size() - 1);

    cout << "���� �� �迭: ";
    printArray(numbers);

    return 0;
}