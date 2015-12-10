//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
//Bigger than max unsigned int 4294967295

#include <iostream>
#include<vector>
using namespace std;

bool isPrime(int num) {
    for(int i = 2; (i*i) < num; i++) {
        if (num % i == 0) {
            return false;
        } 
    }
    return true;
}

int main() {
	// your code goes here
	//cout<<INT_MAX<<endl;
	//cout<<UNSIGN_INT_MAX<<endl;
	
    int res = 1;
    long long tarNum = 600851475143;
    //int tarNum = 13195;
    cout<<tarNum<<endl;
    for(long long i = 3; i < tarNum; i = i + 2) {
        if (isPrime(i)) {
            if((tarNum % i) == 0) {
                cout << "i "<<i<<endl;
                res = i;
            }
        }
    }
	cout<<res<<endl;
	return 0;
}
