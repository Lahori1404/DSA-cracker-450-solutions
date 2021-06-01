#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

priority_queue<int,vector<int>, greater<int>> pqm;

int n;
cin>>n;
vector<vector<int>> A1(n);
vector<int> ans;
for (int i = 0; i < n; i++)
{
    int size;
    cin>>size;
    A1[i] = vector<int>(size);
    for (int j = 0; j < size; j++)
    {
        cin >> A1[i][j];

    }
    
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < A1[i].size(); j++)
    {
        pqm.push(A1[i][j]);
        
    }
    
}

cout<<pqm.size()<<endl;

while(!pqm.empty()){
    ans.push_back(pqm.top());
    pqm.pop();
}

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

    return 0;
}
