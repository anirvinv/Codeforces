#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		int len;
		cin >> len;

		if(len % 4 != 0){
			cout << "NO"<<endl;
		}
		else{
			cout << "YES" << endl;
			int val;
			for(int i = 0; i < len/2;i++){
				val = 2 * (i + 1);
				cout << val << " ";
			}
			for(int i = 0; i < len/2; i++){
				if(i == (len/2 - 1)){
					val = 3*(len/2) -1;
				}
				else{
					val = 2 * i + 1;
				
				}
				cout << val<< " ";
			}
			cout << endl;
		}
	}
}
