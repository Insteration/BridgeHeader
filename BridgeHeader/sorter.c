//
//  sorter.c
//  BridgeHeader
//
//  Created by Артём Кармазь on 7/18/19.
//  Copyright © 2019 Артём Кармазь. All rights reserved.
//

#include "sorter.h"

void sorter(int *arr, int size) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //    return *arr;
}


