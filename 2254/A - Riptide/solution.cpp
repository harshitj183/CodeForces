#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int n;
     cin>>n;
     while(n--){
 
 
 
 
        int a,b, c;
 
cin>>a>>b>>c;
int count =0;
 
while(a != b && b != c &&  c !=  a){
 
if( a< b && a < c) a++;
if(b < a && b < c) b++;
if( c < a && c < b) c++;
if( a >b && a > c) a--;
if(b > a && b > c) b--;
if( c > a && c > b) c--;
 
count++;
}
 
cout<<count<<endl;
 
 
     }
    return 0;
}