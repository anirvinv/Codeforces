#include <iostream>
#include <cmath>

using namespace std;


int main(){

	int destX = 2;
	int destY = 2;
	int y = 0;
	int x = 0;
	int var;
	for(int i =0; i < 5; i++){
	
		for(int j = 0; j < 5; j++){
			cin >> var;
			if(var == 1){
				x = j;
				y=i;
			}
		}	
	}
	
	cout << abs(x - destX) + abs(y - destY);
	return 0;

}
