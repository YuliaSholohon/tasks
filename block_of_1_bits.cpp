#include<iostream>
#include <bitset>
using namespace std;
//функція повертає блок одиниць довжиною n починаючи з позиції p
unsigned long block_of_1(int n,int p);
int main(){
	int n,p;
	cout<< "Enter n=";
	cin>>n;
	cout<<"Enter p=";
	cin>>p;
	unsigned long x=block_of_1(n,p);
	unsigned long long x1;
	x1=static_cast<unsigned long long> (x);
	cout <<"result is= "<< bitset<32>(x1) << endl;

	return 0;
}
unsigned long block_of_1(int n,int p)
{
	unsigned long mask=0xffffffff;
	unsigned  long  x;
	int temp1,temp2;
	temp1=32-n-p;оо
	x=(mask>>temp1);//визначаємо межі блоку зліва
	temp2=32-p;
	temp2=mask>>temp2;//визначаємо межі блоку зправа
	x=x^temp2;//накладання меж з правого боку на межі  лівого боку
return x;
}