#include <iostream> 
using namespace std;


int main(){

	string stones;

	int n;
	cin >> n;
	cin >> stones;
	int count =0;
	for(int i =0; i < stones.length()-1; i++){
	
		if(stones[i] == stones[i+1]){
			count++;
		}		

	}
	cout << count;

}
