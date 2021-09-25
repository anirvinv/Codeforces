#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	string name;

	cin >> name;

	unordered_map<char, int> umap;
	
	int count=0; 

	for(int i =0; i < name.length(); i++){
		if(umap.find(name[i])==umap.end()){	
			umap[name[i]] = 1;
			count++;
		}
		else{		
		}
	}
	string output;

	if(count %2==0){
		output = "CHAT WITH HER!";
	}
	else{
		output = "IGNORE HIM!";
	}

	cout << output;
}
