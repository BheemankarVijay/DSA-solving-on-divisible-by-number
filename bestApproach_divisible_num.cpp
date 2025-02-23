#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n) {
   
    vector<int> divisors; 

    
    int sqrtN = sqrt(n); 
    
    
    for (int i = 1; i <= sqrtN; ++i) { 
       
        if (n % i == 0) { 
           
            divisors.push_back(i); 

           
            if (i != n / i) {
               
                divisors.push_back(n / i); 
            }
        }
    }
    
    // Return the list of divisors
    return divisors; 
}


int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    vector<int> divisors = findDivisors(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
                      