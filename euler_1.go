package main

import "fmt"

func euler_1() {
    sum := 0
    for i := 0; i < 1000; i++ {
        if (i % 3 == 0 || i % 5 == 0){
            sum += i
        }
    }
    fmt.Printf("Euler 1 is: %d\n", sum)
}
