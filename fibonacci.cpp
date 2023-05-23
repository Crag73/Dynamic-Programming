#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

long long int fibo(int n){
    static unordered_map <int,int> memo={};
    if(n<=2){
        return 1;
    }
    if(memo.count(n)>=1){
        return memo[n];
    }
    memo[n]=fibo(n-1)+fibo(n-2);
    return memo[n];
}

int main(){

    cout<< fibo(8)<<endl;    //21
    cout<< fibo(3) <<endl;   //2
    cout<< fibo(60) << endl;  //1820529360
    return 0;
}