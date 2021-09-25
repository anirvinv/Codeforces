#include <iostream>

using namespace std;

int main(){
	int x = 0;
	int n;

	cin >> n;
	string statement;
	for(int i = 0; i < n; i++){
		cin >> statement;
		if(statement.find("++") > statement.length()){
			x--;	
		}
		else{
		
			x++;
		}	
	}
	cout << x;

	return 0;
}
