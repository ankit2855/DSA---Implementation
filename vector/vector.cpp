#include<bits/stdc++.h>
#include "vector.h"
using namespace std;


int main(){

     Vector<char> vc;
     vc.push_back('a');
     vc.push_back('n');
     vc.push_back('k');
     vc.push_back('i');
     vc.push_back('t');
    
     vc.push_back('s');
     vc.pop_back(); //> pop 's'
    for(int i = 0; i<vc.size(); i++){
        cout<<vc[i]<<" ";
    }
    cout<<endl;
    cout<<vc.size()<<", "<<vc.capacity()<<", "<<vc.front()<<", "<<vc.back();

    cout<<endl;
    Vector<int>vi;
     vi.push_back(7);
     vi.push_back(8);
     vi.push_back(9);
     vi.push_back(10);


    for(int i = 0; i<vi.size(); i++){
        cout<<vi[i]<<" ";
    }
    cout<<endl;
    cout<<vi.size()<<", "<<vi.capacity()<<", "<<vi.front()<<", "<<vi.back();

 return 0;

}