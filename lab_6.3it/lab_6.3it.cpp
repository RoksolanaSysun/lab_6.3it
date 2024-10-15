#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
void generateArrayTemplate(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 15;
    }
}

template <typename T>
bool isNonIncreasingTemplate(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}

template <typename T>
void PrintTemplate(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << setw(4);
    }
    cout << endl;
}

void generateArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1 + rand() % 15;
    }
}

bool isNonIncreasing(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << setw(4);
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int a[5];
    generateArray(a, 5);
    Print(a, 5);
    cout << "Is non-increasing (it): " << (isNonIncreasing(a, 5) ? "yes" : "no") << endl << endl;

    int b[5];
    generateArrayTemplate(b, 5);
    PrintTemplate(b, 5);
    cout << "Is non-increasing (template): " << (isNonIncreasingTemplate(b, 5) ? "yes" : "no") << endl << endl;

    int s[5] = { 5, 4, 3, 2, 1 };
    Print(s, 5);
    cout << "Is non-increasing (it): " << (isNonIncreasing(s, 5) ? "yes" : "no") << endl;
    cout << "Is non-increasing (template): " << (isNonIncreasingTemplate(s, 5) ? "yes" : "no") << endl;

    return 0;
}