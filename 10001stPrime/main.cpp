//
//  main.cpp
//  10001stPrime
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//
//  https://github.com/mwienands/10001stPrime.git
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?

#include <iostream>


bool isPrime(int num) {
    if (num <= 3) {
        return num > 1;
    } else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}



int main(int argc, const char * argv[]) {

    int count = 0;
    int i = 1;
    while(count <10001){
        if(isPrime(i)){
            count++;
        }
        i++;
    }
    std::cout << i-1;
    return 0;
}

