#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
   int rows=6,count=1;
   for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
   }
    
    
	return 0;
}



