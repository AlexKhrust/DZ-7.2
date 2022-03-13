#include <iostream>
using namespace std;

void insertSort(int a[], int size) {        //сортировка вставками
    int buf;
    int i, j;
    for (i = 0; i < size; i++) {
        buf = a[i];
        for (j = i - 1; j >=0 && a[j]>buf; j--) {
            a[j + 1] = a[j];
            }
        a[j + 1] = buf;        
        }
    }

int main()
{
    setlocale(LC_ALL, "rus");

    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {    //заполнение массива
        arr[i] = rand() % 100;
        cout << arr[i] << "\t";
    }
    cout << endl << endl;

    insertSort(arr, size);

    for (int i = 0; i < size; i++) {    //вывод массива после сортировки
        cout << arr[i] << "\t";
    }

}