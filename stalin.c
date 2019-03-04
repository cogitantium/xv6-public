#include "types.h"
#include "stat.h"
#include "user.h"

void print(int array[], int size);

int main(int argc, char** argv) {
    
    // hardcode array, calculate size of array, and initialise pointers
    int input[] = {1,2,3,4,3,5,3,3,3,6};
    int size = sizeof(input) / sizeof(int), left = 0, right = 1;
    
    // pretty-print array
    print(input, size);

    do {
        // if rightside is smaller than leftside, then swap, else increment
        if (input[right] < input[left]) {
            // increment right pointer until sorted acendingly
            while (input[right] < input[left]) {
                right++;
            }
            // insert next correct element immediately to the right of leftmost correct element
            input[left+1] = input[right];
            // increment left pointer after swap
            left++;          
        } else { // else increment both pointers
            left++;
            right++;
        }
    } while(right < size);
    
    // pretty-print array
    print(input, left);

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
