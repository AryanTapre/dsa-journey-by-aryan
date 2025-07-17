#include <iostream>
using namespace std;

void arrayStackAllocation()
{
  int array[][2] = {
      {2, 4},
      {9, 10}};

  cout << *(array[0] + 0 * 2 * 0) << "\n"; // element address = base_addr + i * total_no_cols + j
  int *p = (array[1] + 1 * 2 * 0);
  cout << *p << "\n";

  cout << "base address " << array << "\n";
}

void oneDArrayHeapAllocation()
{ // 1D array Heap allocation
  int size = 5;

  int *array = new int[5];

  // Initializing elements.
  for (size_t i = 0; i < 5; ++i)
  {
    *(array + i) = i * 2;
  }

  for (int i = 0; i < size; ++i)
  {
    std::cout << array[i] << " ";
  }
  cout << "\n";

  delete[] array;
  array = nullptr;
}

void twoDArrayHeapAllocationNonContiguos()
{ // 2D array Heap allocation, Non-contiguous.
  int rows = 2;
  int cols = 2;

  int **array = new int *[rows];
  for (size_t i = 0; i < rows; ++i)
  {
    *(array + i) = new int[cols];
  }

  // Initializing elements.
  for (size_t i = 0; i < rows; ++i)
  {
    for (size_t j = 0; j < cols; ++j)
    {
      *(*(array + i) + j) = 23;
    }
  }

  for (size_t i = 0; i < rows; ++i)
  {
    for (size_t j = 0; j < cols; ++j)
    {
      cout << *(*(array + i) + j) << " ";
    }
    cout << "\n";
  }

 // Releasing the memory.
  for (int i=0; i<rows; i++) {
    delete[] array[i];
  }

  cout << "base_addr " << array << "\n";
  
  delete[] array;
  array = nullptr;
}

void twoDArrayHeapAllocationContiguous()
{
  int rows = 2;
  int cols = 2;

  int *array = new int[rows * cols];

  for (size_t i=0; i<2; ++i) {
    for (size_t j=0; j<2; ++j) {
      *(array + (i * cols + j)) = 23;
    }
  }

  // array[0 * cols + 0] = 1;
  // array[0 * cols + 1] = 2;
  // array[1 * cols + 0] = 3;
  // array[1 * cols + 1] = 4;
  for (size_t i=0; i<2; ++i) {
    for (size_t j=0; j<2; ++j) {
      cout << *(array + (i * cols + j)) << " ";
    }
    cout << "\n";
  }

  // Releasing memory
  delete[] array;
  array = nullptr;
}

int main()
{
  // arrayStackAllocation();
  // oneDArrayHeapAllocation();
  //twoDArrayHeapAllocationNonContiguos();
  twoDArrayHeapAllocationContiguous();
  return 0;
}
