#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;
string key(int m,int n);
long long grid(int m,int n);

int main(){
    cout<< grid(1,1) <<endl;    //1
    cout<< grid(2,2)<< endl;    //2
    cout<< grid(3,3)<< endl;    //6
    cout<< grid(18,18)<<endl;   //2333606220
    return 0;
}

long long grid(int m,int n){
    static unordered_map<string,long long> memo;
    if(memo.count(key(m,n))){
        return memo[key(m,n)];
    }
    if(memo.count(key(n,m))){
        return memo[key(n,m)];
    }
    if(m==1 && n==1){
        return 1;
    }
    if(m==0 || n==0){
        return 0;
    }
    memo[key(m,n)]=grid(m-1,n)+ grid(m,n-1);
    return memo[key(m,n)];
}

string key(int m,int n){
    return to_string(m) + ',' + to_string(n);
}
