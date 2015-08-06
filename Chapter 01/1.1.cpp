#include <iostream>
#include <cstdlib>
#define MAX 10000
using namespace std;

int cmp(const void*a,const void*b) {
    return *(int*)b - *(int*)a;
}

int main(void) {
    int num = 0, k = 0;
    int array[MAX];
    cin >> num >> k;
    for (int i = 0; i < num; i++)
        cin >> array[i];
    qsort(array, num, sizeof(int), cmp);
    for (int i = 0; i < num; ++i)
        cout << array[i] << " ";
    cout << endl;
    cout << array[k - 1] << endl;
}
