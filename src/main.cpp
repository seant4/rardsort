#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include "./inc.h"
//this gonna suck


int main(){
    int size = 0;
    std::cout << "How large: \n";
    std::cin >> size;
    int runs = 0;
    bool state = false;
    srand(time(0));
    int list[size];
    int * l;
    l = list;
    gen(l, size);
    while(state == false){
        gen(l, size);
        if(check(l, size) == false){
            runs++;
            for(int i = 0; i < size; i++){
                std::cout << l[i];
                std::cout << "\n";
            }
            std::cout << runs <<std::endl;
            system("clear");
        }else{
            system("clear");
            std::cout << "Ran: "<< runs << " times\n";
            std::cout << "you lyin'";
            state = true;
        }
    }
    return 0;
}
