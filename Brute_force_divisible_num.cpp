#include <bits/stdc++.h> 
using namespace std;

int* printDivisors(int n, int &size) {
    // Allocate memory for
    // the array of divisors
    int *divisors = new int[n]; 
     // Initialize the count of divisors
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
           
            divisors[count++] = i; 
        }
    }

    size = count; 
   
    return divisors; 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int size;
    int *divisors = printDivisors(number, size);

    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << std::endl;

    delete[] divisors;

    return 0;
}