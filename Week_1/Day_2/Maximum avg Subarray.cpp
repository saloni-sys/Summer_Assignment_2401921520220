#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
  int nums=[1,12,-5,-6,50,3];
  int k=4;
  int n= nums.size();
  int sum=0;

for(int i=0;i<n;i++){
sum+=nums[i];
}

int max_sum=sum;

int l=0,r=n-1;

while(r<n-1){

sum=sum-nums[l];
l++;

r++;
sum=sum+nums[r];

max_sum=max(max_sum,sum);

}

cout<<"max avg subarray sum is"<<max_sum<<endl;

return 0;

}
  
