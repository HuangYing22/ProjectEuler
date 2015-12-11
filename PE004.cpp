// PE4
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
// 注意审题

#include <iostream>
#include <vector>
using namespace std;

// answer is 906609
/*
int findDigits(int num) {
	if ((num >=0) && (num < 10)) return 1;
	if ((num >=10) && (num < 100)) return 10;
	if ((num >=100) && (num < 1000)) return 100;
	if ((num >=1000) && (num < 10000)) return 1000;
	if ((num >=10000) && (num < 100000)) return 10000;
	if ((num >=100000) && (num < 1000000)) return 100000;
	else return 0;
}
*/
 
/* 没有办法处理9 0009 9
/* 去掉首尾之后是9,不能保留中间的0
bool isPalindrome(int num) {
	int d = findDigits(num);
	if (d == 0) return false;
	
	if((num >= 0)&&(num < 10)) return true;
	else {
		if ((num/d) != (num%10)) return false;
		else {
			//cout<<"num "<<(num - num/d * d)/10<<endl;
			return isPalindrome((num - num/d * d)/10);
		}
	}
}
*/


bool isPalindrome(int num) {
	vector<int> vnum;
	while (num > 0) {
		vnum.push_back(num%10);
		num = num/10;
	}
	
	int start = 0;
	int end = vnum.size() - 1;
	
	while (start <= end) { //终止条件不能是start != end,偶数位时start可能超过end, 仍然不会停止
		if(vnum[start] != vnum[end]) return false;
		start ++;
		end --;
	}
	return true;
	
}

int main () {
    // insert code here...
	cout<<INT_MAX<<endl;
	
	/* 必须遍历所有3位数x3位数才能找到最大的
	/* 从999x999->999*100; 998x998->998x100...遍历 很可能找到的第一个回文数是: 大数x小数,不是所有可能的3位数x3位数的回文数中最大的一个
	/* 此时break出来找到的不一定是最大的回文数
	/* 最大的一个应该是 较大数x较大数
	 
	/* break出两层for loop的习惯用法
	bool flag = true;
	for(int i=999; i>=100; i--) {
		for(int j=i; j>=100; j--) {

			int p = i * j;
			cout<<"num ="<<i<<"x"<<j<<"="<<p<<endl;
			if(isPalindrome(p)) {
				cout<<p<<endl;
				flag = false;
				break;
			}
		}
		if(!flag){
			break;
		}
	}
	 */
	
	int res = 0;
	for(int i=999; i>=100; i--) {
		for(int j=i; j>=100; j--) {
	 
			int p = i * j;
			if(isPalindrome(p)) {
				if (p > res) {
					res = p;
				}
			}
		}
	}
	cout<<res<<endl;
	int wait;
	cin>>wait;
    return 0;
}

//bool res = true;
