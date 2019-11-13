namespace arrays 
{
    namespace sorting
    {
        void insertion_sort(int array[], int array_size);
        
        void insertion_sort(int array[], int array_size) {
            for (int i = 0; i < array_size; i++) {
                int key = array[i];
                int j = i-1;
                while (j >= 0 && array[j] > key) {
                    array[j+1] = array[j];
                    j -= 1;
                    array[j+1] = key;
                }
            }
        }        
    }
}
