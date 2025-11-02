//binary to decimal
/* 
#include <iostream>
using namespace std;
int main() {
cout<<"Enter a binary number:";
int b;
cin>>b;
int d=0;
int power =1;
while (b>0){
    int lastd=b%10;
    d+=lastd*power;
    power*=2;
    b/=10;
}

cout<<d;

 */

#include <iostream>
using namespace std;
int main(){

int d ;
cout<<"Enter your decimal number :";
cin>>d;
int p=1;
int ans=0;
while (d>0){
    int paratyd=d%2;
    ans+=paratyd*p;
    p*=10;
    d/=2;
}
cout<<ans;


}