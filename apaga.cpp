#include <iostream>
using namespace std;
int main() { 
int n,cem,cinquenta,vinte,dez,cinco,real,dois;
cin>>n;
cout<<n<<endl;
for(cem=0;n>=100;cem++){
	n=n-100;
}
for(cinquenta=0;n>=50;cinquenta++){
	n=n-50;
}
for(vinte=0;n>=20;vinte++){
	n=n-20;
}
for(dez=0;n>=10;dez++){
	n=n-10;
}
for(cinco=0;n>=5;cinco++){
	n=n-5;
}
for(dois=0;n>=2;dois++){
	n=n-2;
}
for(real=0;n>=1;real++){
	n=n-1;
}
cout<<cem<<" nota(s) de R $ 100,00"<<endl;
cout<<cinquenta<<" nota(s) de R $ 50,00"<<endl;
cout<<vinte<<" nota(s) de R $ 20,00"<<endl;
cout<<dez<<" nota(s) de R $ 10,00"<<endl;
cout<<cinco<<" nota(s) de R $ 5,00"<<endl;
cout<<dois<<" nota(s) de R $ 2,00"<<endl;
cout<<real<<" nota(s) de R $ 1,00"<<endl;

return 0;
}

