#include<iostream>

using namespace std;

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
    cout << "Lotfan zarfiat array(n) ra vared konid:\n";
    int n;
    cin >> n;
    cout << "Lotfan anasor array ra vared konid:\n";
    int a[n], i, j;
    for (i = 0; i < n; cin >> a[i], i++);
    insertion_sort(a, n);
    cout << "Array moratab shode be sorat zir ast:\n";
    for (j = 0; j < n; cout << a[j] << ' ', j++);
    return 0;
}
