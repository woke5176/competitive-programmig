#include <iostream>
using namespace std;
void swap (int* arr, int i, int j) {
  const int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void heapify (int* arr, int max, int root) {
  const int left = root * 2;
  const int right = left + 1;
  int largest = root;

  if (left < max && arr[largest] < arr[left]) {
    largest = left;
  }

  if (right < max && arr[largest] < arr[right]) {
    largest = right;
  }

  if (largest != root) {
    swap(arr, largest, root);
    heapify(arr, max, largest);
  }
}

void heapSort (int* arr, int len) {
  int i;

  for (i = len / 2; i >= 0; --i) {
    heapify(arr, len, i);
  }

  for (i = len - 1; i >= 0; --i) {
    swap(arr, i, 0);
    heapify(arr, i, 0);
  }
}

int main () {
  int n;
  cout<<"Enter the size of array : "<<endl;
  cin>>n;
  int arr[n];
  heapSort(arr,n);
  for ( int i=0;i<n;i++) {
    cout << n << ' ';
  }
}
