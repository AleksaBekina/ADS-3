// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int count = 0;
  while (left <= right) {
    int middle = (left + right) / 2;
    if (arr[middle] == value) {
      count++;
      while(arr[--middle] == value) count++;
      middle += count;
      while (arr[++middle] == value) count++;
      return count;
    }
    else if (arr[middle] < value) {
      left = middle + 1;
    } else {
            right = middle - 1;
    }
  }
  return 0; // если ничего не найдено
}
