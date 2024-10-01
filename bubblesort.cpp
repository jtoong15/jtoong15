#include <iostream>

void bubble_sort(int array[], int size);

int main(){
    int size = 10;
    
    int array[] = {10,8,1,9,2,7,3,4,6,5};
   

    std::cout << "Unsorted Array: ";
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    bubble_sort(array, size);

    std::cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    return 0;
}

void bubble_sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; ++i){
        for(int j = 0; j < size - i - 1; ++j){
            if(array[i] > array[j + 1]){
                //swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
}