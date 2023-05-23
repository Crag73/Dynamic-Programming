#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map <string,int> m;
    

    pair<string,int> p1=make_pair("temperature",40);
    m.insert(p1);
    pair<string,int> p2("energy",0);
    m.insert(p2);
    m["hunger"]=100;
    cout<< m["hunger"]<<endl;
    cout<< m.at("temperature") <<endl;
    cout<< m["not_in_key"]<< endl;  //It makes a new one and assigns the value as 0
    cout<< m.at("not_in_key") <<endl; // If this key is not avaliable this gives an error but as it was used after m["not_in_key"], it gives 0
    cout<<m.size()<<endl;
    m.erase("energy");  
    cout<< m.size()<<endl;
    auto it=m.begin();
    while(it!=m.end()){
        cout<< it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}