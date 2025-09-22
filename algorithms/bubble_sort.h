#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>
#include <algorithm>

template<typename T> void bubbleSort(std::vector<T>& data){

    for(int i =0; i < data.size(); ++i){
        for(int j = 0; j +1 < data.size(); ++j){
            if(data[j] > data[j+1]){
                std::swap(data[j], data[j+1]);
            }
        }
    }
}

#endif // BUBBLE_SORT_H

