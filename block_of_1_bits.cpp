#include<iostream>
#include <bitset>
using namespace std;
//������� ������� ���� ������� �������� n ��������� � ������� p
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
	temp1=32-n-p;��
	x=(mask>>temp1);//��������� ��� ����� ����
	temp2=32-p;
	temp2=mask>>temp2;//��������� ��� ����� ������
	x=x^temp2;//���������� ��� � ������� ���� �� ���  ����� ����
return x;
}