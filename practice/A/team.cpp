#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int result=0;

	for(int i = 0; i < n; i++){
		int count = 0;
		int view;
		for(int j = 0; j < 3; j++){
			cin >> view;
			if (view) {
				count++;
			}
			if(count == 2){
				result++;
				count = 0;
			}
		}
	}

	cout << result << endl;
	return 0;
}
