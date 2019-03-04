#include "types.h"
#include "stat.h"
#include "user.h"

void print(int array[], int size);

int main(int argc, char** argv) {
    
    int input[] = {1,2,3,4,3,5,3,3,3,6};
    int size = sizeof(input) / sizeof(int);
    printf(1, "size of array is: %d\n", size);

    //int size = 6;
    int left = 0, right = 1;
    
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
