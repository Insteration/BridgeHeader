//
//  main.swift
//  BridgeHeader
//
//  Created by Артём Кармазь on 7/18/19.
//  Copyright © 2019 Артём Кармазь. All rights reserved.
//

import Foundation

var numbers: [Int32] = [3, 7, 4, 8, 5]
var n: Int32 = Int32(numbers.count)

sorter(&numbers, n)
print(numbers)
