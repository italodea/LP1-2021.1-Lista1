#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::string temp = "";
    if(SIZE == 2 || SIZE == 3){
        temp = arr[0];
        arr[0] = arr[SIZE-1];
        arr[SIZE-1] = temp;
    }
    else if(SIZE > 2){
        for (int i = 0; i < SIZE/2; i++) {
            if(i != (SIZE/2) + 1){
                temp = arr[i];
                arr[i] = arr[SIZE-i-1];
                arr[SIZE-i-1] = temp;
            }
        }
    }
}
