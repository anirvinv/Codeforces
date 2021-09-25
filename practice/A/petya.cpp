#include <iostream> 

using namespace std;

void lower(string *s){
	string& ptr = *s;

	for(int i = 0; i < ptr.length(); i++){
		ptr[i] =(char)tolower(ptr[i]);
	//	cout <<(char)tolower(ptr[i]) << " " << endl;
	}

}

int main(){

	string a;
	string b;

	cin >> a >> b;
	
	lower(&a);
	lower(&b);

	int val = a.compare(b);
	if(val > 0){
		cout << 1;
	}
	else if(val == 0){
		cout << 0;
	}
	else{
		cout << -1;
	}
	



	
}
