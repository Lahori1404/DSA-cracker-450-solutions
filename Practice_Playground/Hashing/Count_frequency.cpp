#include<bits/stdc++.h>
using namespace std;

void count_frequncy(vector<int> &A){
 
 int n = A.size();
 unordered_map<int,int> mp;
 for (int i = 0; i < n; i++)
 {
   mp[A[i]]++;
 }
 

unordered_map<int,int> :: iterator it;

for(it = mp.begin() ; it != mp.end() ; it++){

cout<< it->first <<" "<< it->second<< endl;

}


}

int main(int argc, char const *argv[])
{
int n;
cin>>n;
vector<int> V(n);

for (int i = 0; i < n; i++)
{
    cin>>V[i];
}


count_frequncy(V);
    return 0;
}
