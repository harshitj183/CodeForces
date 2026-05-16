#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
   
string s ;
cin>>s;
string target = "hello";
int count = 0;
 
for(int i =0 ; i< s.size();i++){
 
if (s[i]==target[count]){
 
count++;
 
}
 
 
}
 
cout << ((count == 5) ? "YES" : "NO");
    return 0;
}