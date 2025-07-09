/** Performing all fundamental operations in un-sorted array ( order doesn't matter )
 *  (1) Insert an element at any position.
 *  (2) Remove an element from any position
 *  (3) Search an element.
 *  (4) Traverse entire array
 */

#include <iostream>
using namespace std; 


/*  Algorithm:
    Size: no. of elements currently array is holding
    Capacity: maximum no. of elements that array can hold.

 *  1. check if there is enough room? if No, return true, if Yes move ahead   
    2. If size is Zero ( array is empty ), insert element at 0th index.
    3. If position of newValue is last element of array,if (position == size) then insert at end
    4. If position of newValue is in middle of array
       If (index < size) 
          move arr[position] at the end arr[size]
          copy arr[position] = newValue 
    5. increase size by 1
    
 */
bool insert(int arr[], int& size, const int capacity, int newValue, int position) {
    if (size == capacity) { // No room to insert.
        return false;
    }

    if (size == 0) { // Array is empty.
        arr[0] = newValue;        

    } else if (position == size) { // Insert at end.
        arr[size] = newValue;

    } else { // Somewhere in middle of array. if (index < size)
        arr[size] = arr[position]; 
        arr[position] = newValue;
    }
    ++size;

    return true;
}

void traverse(int arr[], int& size) {
    for (int index = 0; index < size; ++index) {    
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main() { 
    int array[10]; 
    int size = 0;
    const int CAPACITY = 10;

    insert(array, size, CAPACITY, 10, 0);
    insert(array, size, CAPACITY, 55, 1);
    insert(array, size, CAPACITY, 82, 1);

    traverse(array, size);
    
    return 0;
}
