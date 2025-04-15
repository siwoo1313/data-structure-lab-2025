#include <iostream>  
using namespace std; 

int findMax(int arr[], int size) { //���������� ��� ���Ͽ� �ۼ����� �ʰ� �ҽ� ���Ͽ� �ۼ��Ͽ���
    if (size <= 0) return -1;
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr[] = { -4, 7, 0, 30, 1 };
    int maxValue = findMax(arr, 5);

    cout << "�ִ�: " << maxValue << endl;
    return 0;
}
