//PE5
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    if(v.empty()) return;
    int n = v.size();
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//v0-works
/*
int main () {
    // insert code here...
	int res = 1;
	vector<int> vfac;
	vfac.push_back(2);
	for(int j=3; j<=20; j++) {
		int num = j;
		cout<<"num = "<<num<<endl;
		for(int i=0; i<vfac.size(); i++) {
			if (num % vfac[i] == 0) {
				num /= vfac[i];
			}
		}
		if(num != 1) {
			vfac.push_back(num);
		}
		printVector(vfac);
	}
	
	int n = vfac.size();
	for(int i=0; i<n; i++) {
		res *= vfac[i];
	}
	cout<<"res "<<res<<endl;
    int wait;
	cin>>wait;
    return 0;
}
*/

int main () {
    // insert code here...
	int res = 2;
	vector<int> vfac;
	vfac.push_back(2);
	for(int j=3; j<=20; j++) {
		int num = j;
		cout<<"num = "<<num<<endl;
		for(int i=0; i<vfac.size(); i++) {
			if (num % vfac[i] == 0) {
				num /= vfac[i];
			}
		}
		if(num != 1) {
			vfac.push_back(num);
			res *= num;
			cout<<"res = "<<res<<endl;
		}
		printVector(vfac);
	}
	
	cout<<"res "<<res<<endl;
    int wait;
	cin>>wait;
    return 0;
}
