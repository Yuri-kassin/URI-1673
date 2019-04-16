#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int i,aux,ii;
	string v;
	vector<char> x;
	stack<char>cont;
	char y;

    while(getline(cin,v)){
		ii=0;
 		for(i=0;i<v.size();i++){
			y=v[i];
			while(y==v[i] && cont.size()<9 && i<v.size()){
				cont.push(v[i]);
				i++;
			}
			if(v.size()==1){
				cout<<1;
				cout<<v[0];
				cout<<1;
				if(v[0]=='1')cout<<1;
			}
			else{
				i--;
				if(cont.size()==1){
					if(ii>0){
						x.pop_back();
						ii--;
					}
						
					else x.push_back('1');
					x.push_back(v[i]);
					x.push_back('1');
					if(v[i]=='1')x.push_back('1');
					ii++;
    			}
    				
    			else{
					ii=0;
					x.push_back(cont.size()+'0');
					x.push_back(v[i]);
				}
    			
			}
			while(!cont.empty())cont.pop();
		}
		for(i=0;i<x.size();i++)cout<<x[i];
		cout<<endl;
		while(!x.empty())x.pop_back();
	}

	system("pause");
	return 0;
}
