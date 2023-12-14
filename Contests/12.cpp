//Divisible sum pairs

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,countt=0;
    string t,s, a="";
    vector <int> arr;
    getline(cin,t);
    getline(cin,s);
    k=stoi(t);
    for(auto ch:s){
        a+=ch;
        if(ch==' '){ 
            arr.push_back(stoi(a));
            a="";
        }
    } 
    arr.push_back(stoi(a)); 
    n=arr.size();
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {

                 countt++;
            }

        }
    }
    cout << countt;
    return 0;
}
