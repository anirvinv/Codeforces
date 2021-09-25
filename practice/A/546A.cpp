#include <iostream>

using namespace std;

int main(){

	int k, n, w;

	cin >> k >> n >> w;

	int cost = w * k * (w + 1)/2;

	int borrow = cost - n;
	
	if(borrow <= 0){
		borrow = 0;
	}

	cout << borrow;


}
