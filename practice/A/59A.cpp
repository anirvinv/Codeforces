#include <iostream>

using namespace std;

int main(){
	string s;

	cin >> s;
	
	int upper = 0;
	int lower = 0;

	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i])){
			upper++;
		}
		else{
			lower++;
		}
	}

	bool uppercase = upper > lower;

	if(uppercase){
		for(int i = 0; i < s.length(); i++){
			s[i] = (char)toupper(s[i]);
		}
	}
	else{	
		for(int i = 0; i < s.length(); i++){
			s[i] = (char)tolower(s[i]);
		}
	}
	cout << s;
}
