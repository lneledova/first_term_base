#include <random>
#include <iostream>
#include <cstdint>

#include "quickSort.h"

int main() {
  const int64_t arr_size = 18;
  int arr[arr_size];

  for (int i = 0; i < arr_size; ++i) {
    arr[i] = std::rand() / (RAND_MAX / 30);
  }

  for (int i = 0; i < arr_size; ++i) {
      std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
  
  QuickSort(arr, 0, arr_size - 1);
  
  for (int i = 0; i < arr_size; ++i) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';

  return 0;
}