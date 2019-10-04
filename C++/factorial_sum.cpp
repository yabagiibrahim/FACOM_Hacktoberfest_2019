#include<bits/stdc++.h>
using namespace std;


long long int memoria[500];

long long int fat(long long int x){
    if(x==0)return 1;
    if(memoria[x]!=0)return memoria[x];
    memoria[x]=fat(x-1)*x;
    return memoria[x];
}

int main(){
        int fat1,fat2;
        cout<<"Type '-1' anytime to end the program"<<endl<<endl;
        while(1){
        	cout<<"Type the two factorial numbers:"<<endl;
        	cin>>fat1;
        	if(fat1 == -1)break;
        	cin>>fat2;
        	if(fat2 == -1)break;

        cout<<"Result : "<<fat(fat1) + fat(fat2)<<endl<<endl;
        }
        cout<<"End of execution..."<<endl;
        cout<<"Thank you and dont forget to give us stars :D"<<endl;
return 0;
}
