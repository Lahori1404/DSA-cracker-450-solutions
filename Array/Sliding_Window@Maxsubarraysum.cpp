#include<bits/stdc++.h>

using namespace std;

int maxsubarraysum(vector<int> &a,int x, int k){

int n = a.size();
int sum = 0;                       // here k denotes the elemnts in the 
for(int i=0 ; i< k; i++){
 sum+=a[i];                      // Find the sum of first k elements whose sum is less than the desired sum x.
}

int ans=0;
if (sum < x){ans = sum;}         //  If sum of first k elements is less than X then initialize the ans variable with k.

for(int i=k ; i< n; i++){         // Apply sliding window for the given example for k+1 to n elements of the array

sum-=a[i-k];                     // reduces first element from sum to maintain the length of the window equal to k

sum+=a[i];                       // increment the sum by the element from k+1 

if(sum <= x){ans = max(ans,sum);}} //if ans is max for now then replace it with current sum

return ans;
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
     
   
    cout << maxsubarraysum(A,18,2);
    return 0;
}
