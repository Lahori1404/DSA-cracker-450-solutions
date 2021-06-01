#include<bits/stdc++.h>

using namespace std;

int minimumsubarray(vector<int>&V,int x){

int n = V.size();
int size = n+1;
int end = 0;
int sum = 0;
int start = 0;

while(end < n)
{

while(sum < x && end < n){sum+=V[end++];}

while(sum >= x){
if(size > end-start){size = end-start;}
sum-=V[start++];

}}

return size;

}
 
 int main(int argc, char const *argv[])
 {
     vector<int> A;
    int n;
    cin>>n;
     for (int i = 0; i < n; i++)
     {
         /* code */
         int x;
         cin>>x;
         A.push_back(x);
     }
cout << minimumsubarray(A,25);
     return 0;
 }
 