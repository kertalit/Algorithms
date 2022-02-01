#include <iostream>

int binarySearch(int a[], int count, int item )
{
  int low = 0;
  int high = count - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    int guess = a[mid];

    if (guess == item)
    {
      return mid;
    }

    if (guess > item)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
      
  }
  return -1;
}



int main()
{
  int list[10] = { 1, 2, 4, 5, 21, 31, 51, 61, 62, 77 };
  int result = binarySearch(list, 10, 6);

  std::cout << result;
  return 0;
}