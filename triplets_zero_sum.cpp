#include<iostream>
#include<algorithm>
using namespace std;
bool findTriplets(int arr[], int n)
    {
        //Your code here
        sort(arr,arr+n);
        for(int i = 0; i<n; i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = arr[i]+arr[left]+arr[right];
                if(sum==0){
                    return true;
                    
                }
                else if(sum>0){
                    right--;
                }
                else {
                    left++;
                }
            }
        }
        return false;
    }
int main() {
    int arr[] = {0,-1,2,-3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findTriplets(arr,n);
}
