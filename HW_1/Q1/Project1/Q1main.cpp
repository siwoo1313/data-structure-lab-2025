int main() {
    int numbers[] = { -4, 7, 0, 30, 1 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxNumber = findMax(numbers, size);
    cout << "ÃÖ´ñ°ª: " << maxNumber << endl;

    return 0;
}