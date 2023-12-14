//Compare the Triplets

#include <iostream>
#include <vector>

using namespace std;

void cmp(vector <int> v1,vector <int> v2){
    int c=0,d=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]>v2[i])
            c++;
        if(v2[i]>v1[i])
            d++;
    }
    cout<<c<<" "<<d;
}

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector <int> v1;
    vector <int> v2;
    string a="";
    for(auto ch:s1){
        a+=ch;
        if(ch==' '){ 
            v1.push_back(stoi(a));
            a="";
        }
    } 
    v1.push_back(stoi(a));
    a="";
    for(auto ch:s2){ 
        a+=ch;
        if(ch==' '){ 
            v2.push_back(stoi(a));
            a="";
        }
    }
    v2.push_back(stoi(a));
    a="";
    
    cmp(v1,v2);
}
