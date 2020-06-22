#include<iostream>
#include<string>
using namespace std;

int main(){
	string s = "12:40:22PM";
	int n = s.size();
    int pre = stoi(s.substr(0,2));
    if(s[n-2] == 'P'){
    	if(pre > 12)
        	cout<<to_string(stoi(s.substr(0,2)) + 12) + s.substr(2,n-4);
        else 
        	cout<<s.substr(0,n-2);
    }
    else if(s[n-2]=='A'){
        if(pre == 12){
            cout<<"00"+s.substr(2,n-4);
        } else{
            cout<<s.substr(0,n-2);
        }
	}
}
