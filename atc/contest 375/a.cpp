//
// Created by sarthakzzzzz on 12-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main(){
    int N;cin>>N;
    double tt = 0;
    int xmin = 0,ymin = 0;
    for(int i = 0;i<N;i++){
        int x,y;
        cin>>x>>y;
        tt += sqrt(pow(x-xmin,2)+pow(y-ymin,2));
        xmin = x;
        ymin = y;
    }
    tt += sqrt(pow(xmin,2)+pow(ymin,2));
    cout<<fixed<<setprecision(21)<<tt<<endl;
    return 0;
}
