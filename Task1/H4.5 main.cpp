//Task1.H4.5
#include<iostream>
using namespace std;

int main() {
	int num = 0;

	++num; //num=1
	num *= 10;//num=10
	num += 2;//num=12
	num = num * 10;//num=120
	num += 3;//num=123
	num = num * 10 + 4;//num=1234
	num = 5 + num * 10;//num=12345
	num = (num * 10 + 6) * 10 + 7;//num=1234567
	num = 5 * num * 2 * 1 + 5 + 2 + 1;//num=12345678

	cout<<num<<"\n"; // num=12345678

	return 0;
} // output : 12345678
