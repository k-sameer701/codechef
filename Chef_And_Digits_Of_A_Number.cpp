#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int c=0, r=0;
        for(int i=0; i<x.size(); i++){
            if(x[i] == '0'){
                c++; 
            }
                
            else{
                r++;
            }
                
        }
        //cout << c << " " << r << endl; 
        if(c==1 || r==1) 
            cout << "Yes" << endl;
        
        else    
            cout << "No" << endl;
    }
}