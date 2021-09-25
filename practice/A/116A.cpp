#include <iostream>

using namespace std;

int main(){
	
	int n; 

	cin >> n;
	int minCapacity;
	for(int i = 0; i < n; i++){
		int a;
	       	int b;
		int people;
		cin >> a >> b;
		if(i==0){
			people = b;
			minCapacity = b;
		}
		else{
			people -= a;
			people += b;
			if(people > minCapacity){
				minCapacity = people;
			}	
		}
		
		
	}
	cout << minCapacity;

}
