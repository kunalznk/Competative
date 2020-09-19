#include <bits/stdc++.h>

using namespace std;
struct T{
 unsigned short a;
 unsigned short b;
 char c;


};

int main(){


    ios_base::sync_with_stdio(0); //0 or false
    cin.tie(0);

    int t;
    unsigned short a,b,re;
    char c;
	cin >>t;
	vector<int> r;
    vector<struct T> V;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        V.push_back({a,b,c});
        }

    for(int i=0;i<t;i++){

       if(V[i].c == 'L'){

        //a = V.[i];
       // b = V.[i]
        re =  (V[i].a << V[i].b) | ( V[i].a >> (16-V[i].b));
        r.push_back(re);

       }
       else{
        re = (V[i].a >> V[i].b) | ( V[i].a << 16-V[i].b);
        r.push_back(re);

       }

    }

    for(int i=0;i<t;i++){

        cout<<r.at(i)<<'\n';

    }

   return 0;
}
