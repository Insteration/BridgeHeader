//
//  sorter.c
//  BridgeHeader
//
//  Created by Артём Кармазь on 7/18/19.
//  Copyright © 2019 Артём Кармазь. All rights reserved.
//

#include "sorter.h"

int sorter(int *arr, int size) {
    for (int i = 0; i < 10; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return *arr;
}
