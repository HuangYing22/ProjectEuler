#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	vector<int> fibNums;
	fibNums.push_back(1);
	fibNums.push_back(2);
	int res = 2;
	
	int numMax = 4000000;

	int i = 2;
	while(fibNums[i-1] < numMax) {

	    fibNums.push_back(fibNums[i-2] + fibNums[i-1]);

	    if (fibNums[i] % 2 == 0) {
	        res += fibNums[i];
	    }
	    
	    i++;
	}
	
	cout<<res<<endl;
	return 0;
}
