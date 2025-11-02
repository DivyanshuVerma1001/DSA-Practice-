/* #include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
while (n!=0){
    n=n/10;
    count++;
    //cout<<n;
    //cout<<endl;
    //cout<<count;
} 
cout <<count;
 

}
 */
/* 
#include <iostream>
using namespace std;
int main() {
int n;
cin>> n;
int sum =0;

while (n!=0){

    int x=n%10;
    sum+=x;
    n/=10;
}
cout<<sum;
 }
  */
  /* 
#include <iostream >
using namespace std;
int main (){
int n;
cin>>n;
int f=0;
while (n!=0){
    int x=n%10;
    f*=10;
    f+=x;
    //cout<<f<<endl;
    n/=10;
}
cout<<f;
}
 */
/* 
#include <iostream>
using namespace std;
int main(){
int n ;
cin >> n;
int sum =0;
while (n>0){
    if (n%2==0){
        sum-=n;
   
    }
    else{
        sum+=n;
    }
    n--;


}

cout<<sum;
 }

  */
/* 
#include <iostream>
using namespace std;
int main() {
int n ;
cin>>n;
int factorial =1;
    
for (int i = 1;i<=n;i++){
    factorial *=i;
    //cout<<i<<endl;
    cout << factorial<<endl;
  
}
}
 */
/* 
#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x =1;
for (int i=1;i<=b;i++){
    x*=a;
}
cout<<x;
}
 */








