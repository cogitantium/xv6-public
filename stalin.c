#include "types.h"
#include "stat.h"
#include "user.h"

void print(int array[], int size);

int main(int argc, char** argv) {
    
    int input[] = {1,2,3,4,3,5};
    int size = sizeof(input) / sizeof(int);
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
        // increment right pointer when done with one iteration
        right++;
    } while(right < size);
    
    print(input, size);

    exit();
}

void print(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf(1, "%d", array[i]);
        if (i != size) printf(1, ", ");
    }
}
