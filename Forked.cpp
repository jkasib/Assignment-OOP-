#include <iostream>
#include <set>
#include <utility>
using namespace std;


int main(){

    int t;
    cin>>t;


    while(t--){
        int c=0;
        long long a, b, xk, yk, xq, yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        set<pair<int, int>> K; 
        set<pair<int, int>> Q; 

        K.insert({xk+a, yk+b});
        K.insert({xk-a, yk+b});
        K.insert({xk+a, yk-b});
        K.insert({xk-a, yk-b});
        K.insert({xk+b, yk+a});
        K.insert({xk-b, yk+a});
        K.insert({xk+b, yk-a});
        K.insert({xk-b, yk-a});

        Q.insert({xq-a, yq+b});
        Q.insert({xq+a, yq+b});
        Q.insert({xq+a, yq-b});
        Q.insert({xq-a, yq-b});
        Q.insert({xq+b, yq+a});
        Q.insert({xq-b, yq+a});
        Q.insert({xq+b, yq-a});
        Q.insert({xq-b, yq-a});


        for(auto x:K){
            if(Q.find(x)!=Q.end()){
                c++;
            }
        }

        cout<<c<<endl;

    }


    return 0;
}