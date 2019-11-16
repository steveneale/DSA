#include <iostream>
#include <DSA++/arrays/sorting.hpp>
using namespace std;

int main() {

    /**
     * Array examples
     */

    // Example of an insertion sort
    cout << "Insertion sort" << endl;
    cout << "--------------" << endl;
    cout << "Input: {6, 5, 3, 2, 8, 10, 9}" << endl;
    
    int array[7] = {6, 5, 3, 2, 8, 10, 9};
    int array_size = 7;

    arrays::sorting::insertion_sort(array, array_size);

    cout << "Sorted array: " << endl;
    
    for (int i = 0; i < 7; i++) {
        cout << "--- [" << i << "]: " << array[i] << endl;
    }
    
    cout << endl;

    return 0;
}