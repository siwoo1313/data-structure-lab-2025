#include <iostream>  
using namespace std; 

int findMax(int arr[], int size) { //오류때문에 헤더 파일에 작성하지 않고 소스 파일에 작성하였음
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

    cout << "최댓값: " << maxValue << endl;
    return 0;
}
