#include <iostream>
#include <utility>
#include <algorithm>

int binarySearch(int a[], int count, int item)
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

int find_Smallest(int a[], int count)
{
  int smallest = a[0];
  int smallest_index = 0;

  for (int i = 1; i < count; i++)
  {
    if (a[i] < smallest)
    {
      smallest = a[i];
      smallest_index = i;
    }
  }
  return smallest_index;
}

void selection_sort(int a[], int count)
{
  for (int start_index = 0; start_index < count - 1; start_index++)
  {
    int smallest_index = start_index;

    for (int currentIndex = start_index + 1; currentIndex < count; currentIndex++)
    {
      if (a[currentIndex] < a[smallest_index])

        smallest_index = currentIndex;
    }

    int memory = a[start_index];
    a[start_index] = a[smallest_index];
    a[smallest_index] = memory;

  }

}






int main()
{
  const int i = 10;
  int list[i] = { 545, 51, 1, 654, 45, 65, 76, 42, 65, 98 };
  for (int i = 0; i < 10; i++)
  {
    std::cout << list[i] << " ";
  }

  selection_sort(list, 10);



  std::cout << std::endl;

  for (int i = 0; i < 10; i++)
  {
    std::cout << list[i] << " ";
  }

  return 0;

}