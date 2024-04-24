#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l <= n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r <= n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n + 1]; // Increase array size by 1 for one-based indexing
    for (int i = 1; i <= n; i++) { // Start loop from 1 for one-based indexing
        cin >> arr[i];
    }
    for (int i = n / 2; i >= 1; i--) { // Start loop from n/2 for one-based indexing
        heapify(arr, n, i);
    }
    for (int i = 1; i <= n; i++) { // Loop from 1 to n for one-based indexing
        cout << arr[i] << " ";
    }
    return 0;
}
