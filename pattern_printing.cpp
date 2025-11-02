 #include<iostream>
using namespace std;
int main() {
for (int i=1;i<4;i++){
    for (int i=1;i<6;i++){
        cout<<"*";}
    cout<<endl;
}
}

 /* 
#include<iostream>
using namespace std;
int main() {
int m,n ;
cin>>n;
cin>>m;
for (int i = 1; i<=n;i++){
    for (int j=1;j<=m;j++){
        cout<<"*";}
    cout<<endl;
   
}
}
 */
/* 
#include <iostream>
using namespace std;
int main() {
for (int i = 1 ;i<=4;i++){
    if (i==1||i==4){
        for (int j=1;j<=6;j++){
            cout<<"*"  ;  }}
    else {
        for (int j=1;j<=6;j++){
            if (j==1||j==6){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
            }        


     cout<<endl;}


}
 */

/* /
#include <iostream>
using namespace std;
int main() {
int m;
cin>>m;
for(int i = 1 ;i<=m;i++){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
cout<<endl;
}
}
 */
/* 
#include <iostream>
using namespace std;
int main (){
int n;
cin>>n;
for (int i = n; i >=1;i--){
    for (int j = 1 ; j <=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
 */
 /* 
#include <iostream>
using namespace std;
int main(){
int m ;
cin>>m;

for (int i=1 ;i<=m;i++){
    for (int j = 1;j<=(m-i);j++){
        cout<<" ";
    }
    for (int k = 1;k<=(2*i-1);k++){
        cout<<"*";
    }
    cout<<endl;
    }
cout<<"end of program";
}
 */
/* 
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i= 1;i<=n;i++){
    for (int j=i;j<=n;j++){
        cout<<j;
    }
    for (int k=1;k<=i-1;k++){
        cout<<k;
    }
    cout<<endl;
}
}

 */
 /* 
 #include <iostream>
 using namespace std;
 int main(){
int n;
cin>>n;
for (int i=1; i<=n;i++){
    for (int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;
}

 }
 */
 /* 
#include <iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
for (int i=1;i<=n;i++ ){
    if (i==1 || i==n){
        for (int j =1;j<=m;j++){
            cout<<j;
        }
    }
    else {
        for (int k = 1;k<=m;k++){
            if (k==1|| k==m){
                cout<<k;
            }
            else {
                cout<<" ";
            }
        }
    }
    cout<<endl;}
}

 */
/* 
#include <iostream>
using namespace std;
int main (){
int n,m;
cin>>n>>m;
for (int i = 1;i<=n;i++){
    for (int j =1 ; j<=m;j++){
        if ((i+j)%2==0){
            cout<<"1";
        }
        else {
            cout<<"2";
        }
    }
    cout<<endl;}

}
 */
/* 
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i =1;i<=n;i++){
    for (int j =1 ;j<=i;j++){
        cout<<j;
    }
    cout<<endl;}
}
 */










