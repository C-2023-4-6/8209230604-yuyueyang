#include <iostream>
using namespace std;
void change(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    int* arr = new int[n];
    cout << "请输入" << n << "个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "指针及指针指向的内容：" << endl;
    for (int i = 0; i < n; i++) {
        cout << "地址: " << &arr[i] << ", 内容: " << arr[i] << endl;
    }
    change(arr, n);
    cout << "排序后的数组元素：";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}