// 2DSnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // If divisible by any number, not prime
        }
    }
    return true; // If no divisors found, it's prime
}

int main()
{
	std::cout << "Enter Dimentios for making a prime matrix:  ";
    int n;
    std::cin >> n;
    int var1 = 1;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            var1++;
           if(isPrime(var1) == false)
            {
                std::cout << "@";
            }
            else
            {
                std::cout << " " << "*" << " ";
		   }
        }
		std::cout << std::endl;
	}
}

