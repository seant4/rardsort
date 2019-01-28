#include <iostream>
#include <stdlib.h>   
#include <algorithm>  

void gen(int * arr, int size){ 
    for(int i = 0; i < size; i=i+1){
        arr[i] = rand() % size;
    }
    for(int i = 0; i < size; i=i+1){
        std::cout << arr[i];
    }
}

bool check(int * arr, int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] < arr[i+1]){
            ;
        }else{
            return false;
        }
    }
    return true;
}
