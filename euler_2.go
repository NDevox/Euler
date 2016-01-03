package main

import "fmt"

func euler_2() {
    var total, during, before int = 0, 1, 1

    for after := 0; after <= 4000000; after += before {
        
        if after % 2 == 0 {
            total += after
        }
        before = during
        during = after
    }

    fmt.Printf("Euler 2 is: %d\n", total)
}
