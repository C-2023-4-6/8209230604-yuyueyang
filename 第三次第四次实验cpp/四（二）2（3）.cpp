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
    cout << "����������Ԫ�ظ���: ";
    cin >> n;
    int* arr = new int[n];
    cout << "������" << n << "������: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "ָ�뼰ָ��ָ������ݣ�" << endl;
    for (int i = 0; i < n; i++) {
        cout << "��ַ: " << &arr[i] << ", ����: " << arr[i] << endl;
    }
    change(arr, n);
    cout << "����������Ԫ�أ�";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}