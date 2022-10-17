#include <cstdint>
#include <iostream>

void QuickSort(int* arr, int64_t left, int64_t right) {
  using std::swap;

  if (left >= right) {
    return;
  }
  int pivot = arr[right];
  int64_t i = left;
  int64_t j = right - 1;
  int64_t left_eq = left - 1;
  int64_t right_eq = right;

  while (i <= j) {
    while (arr[i] < pivot) {
      ++i;
    }
    while (arr[j] > pivot) {
      --j;
    }
    if (i >= j) {
      break;
    }
    swap(arr[i], arr[j]);
    if (arr[i] == pivot) {
      ++left_eq;
      swap(arr[left_eq], arr[i]);
    }
    ++i;

    if (arr[j] == pivot) {
      --right_eq;
      swap(arr[right_eq], arr[j]);
    }
    --j;
  }

  swap(arr[i], arr[right]);
  j = i - 1;
  ++i;
  for (int64_t k = left; k <= left_eq; k++, j--) {
    swap(arr[k], arr[j]);
  }
  for (int64_t k = right - 1; k >= right_eq; k--, i++) {
    swap(arr[k], arr[i]);
  }

  QuickSort(arr, left, j);
  QuickSort(arr, i, right);
}
