#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
set<int> s;

s.insert(2);
s.insert(1);
s.insert(5);
s.insert(3);
s.insert(6);

for(auto i : s)
{cout<<i<<" ";}

    return 0;
}
