#define N 5
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::swap;

void printArray(int array[]) {
    cout << "[";
    for (int i = 0; i < N; i++)
    {
        cout << array[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void insertSort(int array[]){
    int j;
    for (int i = 1; i < N; i++)
    {
        j = i - 1;
        int x = array[i];
        while( j > -1 && x < array[j]) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = x;
    }
}

void selectionSort(int array[]){
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j=k=i; j < N; j++)
        {
            if(array[j] < array[k]){
                cout << "Changing min: " << array[j] << " with " << array[k] << endl;
                k = j;
            }
        }
        if(k != i) {
            swap(array[i], array[k]);
            cout << "Swapping " << array[i] << "with: " << array[k] << endl;
        }
    }
}

// j = i
// k = i

int main()
{
    int array [N] = {4,7,8,1,3};
    printArray(array);
    insertSort(array);
    printArray(array);
    cout << endl << endl;

    int array2 [N] = {15,11,16,10,21};
    printArray(array2);
    selectionSort(array2);
    printArray(array2);
    return 0;
}
