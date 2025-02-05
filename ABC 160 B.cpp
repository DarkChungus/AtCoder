#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main(){
	ll X, happiness = 0, temp, temp1, temp2;
	cin >> X;
	temp = X/500;
	for(int i=1; i<=temp; i++){
		happiness += 1000;
	}
	temp1 = X-(temp*500);
	temp2 = temp1/5;
	for(int i=1; i<=temp2; i++){
		happiness += 5;
	}	
	cout << happiness << endl;
	return 0;
}
