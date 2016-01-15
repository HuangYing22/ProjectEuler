/* Project Euler 21
Let d(n) be defined as the sum of proper divisors of n 
(numbers less than n which divide evenly into n).

If d(a) = b and d(b) = a, where a ≠ b, 
then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, 
the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; 
therefore d(220) = 284. 
The proper divisors of 284 are 1, 2, 4, 71 and 142; 
so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>
using namespace std;

int d(int n) {
    int d = 0;
    
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            d += i;
        }
    }
    return d;
}

int main() {
	// your code goes here
	int sum = 0;
	// cout << d(220) << endl;
	// cout << d(284) << endl;
	for(int i = 1; i < 10000; i++) {
	    int d_i = d(i);
	    if(d_i == i) continue;
	    if(d(d_i) == i ) {
	        cout << i << " " << d_i << endl;
	        sum += i;
	    }
	}
	cout << sum << endl;
	return 0;
}
