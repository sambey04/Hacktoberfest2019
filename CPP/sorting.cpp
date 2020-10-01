#include<iostream>
#include<iomanip>
using namespace std;

void sortasdin(int[],int,int);
void sortdesdin(int[],int,int);
void Menu();

int din;

void Menu()
{
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
  	cout << "|                 Pilihan Sort		               |" << endl;
  	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
  	cout << " 1.pengurutan secara Ascending " << endl;
	cout << " 2.pengurutan secara Descending" << endl;
	cout << " 3. Keluar Program " << endl;
	cout<<endl<<endl;
}

int main()
{
	int listdin[10]={65,2,44,26,19,22,5,3,12};
	int tiwi;
	cout<<"Data sebelum diurutkan : ";
	for(int idin=0;idin<9;idin++)
		cout<<setw(3)<<listdin[idin];
	cout<<endl<<endl;
	Menu();
	cout<<"Input Pilihan : ";cin>>din;
	while(din!=3)
	{
	cout<<endl<<endl;
	if(din==1)
	{
		sortasdin(listdin,0,9);
		cout<<"Data setelah diurutkan : ";
		for(tiwi=1;tiwi<=9;tiwi++)
			cout<<setw(3)<<listdin[tiwi];
	}
	else if(din==2)
	{
		sortdesdin(listdin,0,9);
		cout<<"Data setelah diurutkan : ";
		for(tiwi=0;tiwi<9;tiwi++)
			cout<<setw(3)<<listdin[tiwi];
	}
	else
		cout<<"Inputan Salah"<<endl;
	
	cout<<endl<<endl<<endl;
	Menu();
	cout << " Pilih [1/2/3] : " ;cin>>din;
	cin.get();
	}
}

void sortasdin(int numdin[],int kiridin, int kanandin)
{
	int pdin,ldin,rdin;
	ldin=kiridin;
	rdin=kanandin;
	pdin=numdin[kiridin];
	
	while(kiridin<kanandin)
	{
		while((numdin[kanandin]>=pdin)&&(kiridin<kanandin))
			kanandin--;
		if(kiridin!=kanandin)
		{
			numdin[kiridin]=numdin[kanandin];
			kiridin++;
		}
		while((numdin[kiridin]<=pdin)&&(kiridin<kanandin))
			kiridin++;
		if(kiridin!=kanandin)
		{
			numdin[kanandin]=numdin[kiridin];
			kanandin--;
		}
	}
	numdin[kiridin]=pdin;
	pdin=kiridin;
	kiridin=ldin;
	kanandin=rdin;
	if(kiridin<pdin)
		sortasdin(numdin,kiridin,pdin-1);
	if(kanandin>pdin)
		sortasdin(numdin,pdin+1,kanandin);
		
}

void sortdesdin(int numdin[],int kiridin, int kanandin)
{
	int pdin,ldin,rdin;
	ldin=kiridin;
	rdin=kanandin;
	pdin=numdin[kiridin];
	
	while(kiridin<kanandin)
	{
		while((numdin[kanandin]<=pdin)&&(kiridin<kanandin))
			kanandin--;
		if(kiridin!=kanandin)
		{
			numdin[kiridin]=numdin[kanandin];
			kiridin++;
		}
		while((numdin[kiridin]>=pdin)&&(kiridin<kanandin))
			kiridin++;
		if(kiridin!=kanandin)
		{
			numdin[kanandin]=numdin[kiridin];
			kanandin--;
		}
	}
	numdin[kiridin]=pdin;
	pdin=kiridin;
	kiridin=ldin;
	kanandin=rdin;
	if(kiridin<pdin)
		sortdesdin(numdin,kiridin,pdin-1);
	if(kanandin>pdin)
		sortdesdin(numdin,pdin+1,kanandin);
}
