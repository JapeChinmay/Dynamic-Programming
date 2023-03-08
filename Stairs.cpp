#include<bits/stdc++.h>

using namespace std;

int count(int stairs) {

    if(stairs == 0) return 1;
    if(stairs == 1) return 0;


    int l = count(stairs-1);
    int r  =count(stairs - 2);


    return l + r;
    
       

}

int main() {

    int stairs;
    cin >> stairs;


    int ans  = count(stairs);
    cout << ans << endl;
    


      return 0;

}