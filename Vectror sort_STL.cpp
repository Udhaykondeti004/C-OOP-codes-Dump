#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int input;
    vector<int> ivec;
    while(cin>>input)
    ivec.push_back(input);
    
    sort(ivec.begin(),ivec.end());
    
    for(int i=0;i<ivec.size();i++)
    cout<<ivec[i]<<" ";
    cout<<endl;
    
    vector<int>::iterator it;
    for(it=ivec.begin();it!=ivec.end();it++)
    cout<<*it<<" ";
    
	return 0;
}

