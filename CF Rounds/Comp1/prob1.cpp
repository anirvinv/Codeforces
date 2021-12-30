#include <iostream>
#include <string> 

using namespace std;

bool isBalanced(string s){
	int a = 0;
	int b = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i]=='a'){
			a++;
		}
		else{
			b++;
		}
	}
	return a==b;
}
int main(){
	int n;
	cin >> n;
	for(int i =0; i < n; i++){
		int length;
		string s;
		cin >> length;
		cin >> s;
		int l=0;
		int r=0;
		for(int j = 0; j < length; j++){
			for(int k = 1; k <= length-j; k++){
				if(isBalanced(s.substr(j, k))){
					l = j;
					r = k;
					break;
				}
			}
		}
		
		if(l==0 && r == 0){
			cout << -1 << " " << -1<< endl;
		}
		else{
			cout << l + 1 << " " << l + r<< endl;
		}
	}	
}
