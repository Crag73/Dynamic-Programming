#include <bits/stdc++.h>

using namespace std;
bool canSum(int number,vector <int> arr,unordered_map <int,bool> memo){
    if(memo.count(number)){
        return memo[number];
    }
    int n=arr.size();
    if(number==0){  
        return true;
    }
    if(number<0){
        return false;
    }
    for(int i=0;i<n;i++){
        int rmd=n-arr[i];
        if(canSum(rmd,arr,memo)){
            memo[rmd]=true;
            return true;
        }
        memo[rmd]=false;
    }
    memo[n]=false;
    return false;
}
int main(){
    vector <int> arr={7,14};
    unordered_map <int,bool> memo;
    cout<< canSum(300,arr,memo);
    return 0;
}