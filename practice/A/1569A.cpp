#include <iostream>
#include <string>

using namespace std;


int main(){
	int t;
	cin >> t;	
	for(int i = 0; i < t; i++){
		int n;
		string s;
		cin >> n >> s;
		
		int found = s.find("ab");
		if(found == -1){
			found = s.find("ba");
		}
		if(found == -1){
			cout << -1 << " " << -1 << endl;
		}
		else{
			cout << found +1 << " " << found + 2 << endl;
		}

	}

}
