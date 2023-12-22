#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k] = list1[i];
            i++;
        }
        else {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        list3[k] = list1[i];
        i++;
        k++;
    }
    while (j < size2) {
        list3[k] = list2[j];
        j++;
        k++;
    }
}
int main() {
    int size1, size2;
    cout << "数组一元素个数为：";
    cin >> size1;
    cout << "数组二元素个数为：";
    cin >> size2;
    int* list1 = new int[size1];
    cout << "数组一: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }
    int* list2 = new int[size2];
    cout << "数组二: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }
    int* list3 = new int[size1 + size2];
    merge(list1, size1, list2, size2, list3);
    cout << "最终数组为：";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
    return 0;
}