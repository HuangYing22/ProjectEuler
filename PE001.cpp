#include <iostream>
#include <vector>
using namespace std;


int main() {
	// your code goes here
	int i;
	int resSum=0;
	for(i=1;i<1000;i++) {
	    if ((i%3 ==0) || (i%5 ==0)) {
	        resSum += i;
	    }
	}
	cout<<resSum<<endl;
	return 0;
}
