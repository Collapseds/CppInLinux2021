#include "SelectionSort.h"

void SelectionSort(double list[], const std::size_t size){
    
//for 循环, 每次从list[i]~list[size-1]中找出一个最小的数,与list[i]交换
    for (int i=0 ; i < size-1 ; i++){
        //初始化,将list[i]记为最小值, 将i记作最小值的索引
        double min = list[i];
        int index = i;
        //用循环,找出list[i+1]~list[size-1]中的最小值和他的下标
        for (int j = i + 1 ; j < size ; j++){
            if(list[j] < list[index]) index = j;
        }
        list[i] = list[index];
        list[index] = min;
        //若list[i]不是最小值,那么交换list[i]<-->list[index]
    }
}

