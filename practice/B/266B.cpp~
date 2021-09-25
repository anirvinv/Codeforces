#include <iostream>

using namespace std;

int main(){

	int n, t;
	cin >> n >> t;

	string line;

	cin >> line;

	for(int i = 0; i < t; i++){
		for(int j = 0; j < n-1; j++){
			if(line[j] =='B'&& line[j+1]=='G'){
				char temp = line[j];
				line[j] = line[j+1];
				line[j+1] = temp;
			j++;
			}
		}
	}
	cout << line;

}
