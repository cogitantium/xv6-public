#include "types.h"
#include "stat.h"
#include "user.h"

void print(int array[], int size);

int main(int argc, char** argv) {
    
    // hardcode array, calculate initial size of array, and initialise pointers
    int array[] = {1,2,3,4,3,5,3,3,3,6};
    int initSize = sizeof(array) / sizeof(int), finalSize, left = 0, right = 1;
    
    // pretty-print array
    print(array, initSize);

    do {
        // if rightside is smaller than leftside, then swap, else increment
        if (array[left] > array[right]) {
            // increment right pointer until sorted acendingly
            while (array[left] > array[right]) {
                right++;
            }
            // insert next correct element immediately to the right of leftmost correct element
            array[left+1] = array[right];
            // increment left pointer after swap
            left++;          
        } else { // else increment both pointers
            left++;
            right++;
        }
    } while(right < initSize);
    
    // after 'sorting', the size of the array is now the left pointer
    finalSize = left;

    // pretty-print array
    print(array, finalSize);

    exit();
}

void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf(1, "%d", array[i]);
        // print comma-separated until last
        if (i != size - 1) printf(1, ", ");
    }
    printf(1, "\n");
}
