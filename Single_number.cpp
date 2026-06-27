#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> nums;
    for(int i=0;i<n;i++) cin>>nums[i];
    set <int> s;

        for(int x:nums){
            if(s.find(x)==s.end()){ 
                s.insert(x);
            }else{
                s.erase(x);
            }
        }

    for(int x:s)
        cout<<x<<endl;
    return 0;

}