#ifndef IS_SORTED_UNTIL_H
#define IS_SORTED_UNTIL_H

template <class T>
const T* IsSortedUntil(const T* begin, const T* end) {
  for (const T* iter = begin + 1; iter < end; ++iter) {
    if (*(iter) < *(iter - 1)) {
      return iter;
    }
  }
  return end;
}

#endif