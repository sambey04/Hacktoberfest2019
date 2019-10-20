#include<stdio.h>
#include<stdlib.h>
#define MAX1 20

int main()
{ int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {int k=i;
    for(int j=0;j<n;j++)
    {
      if(j==n-k || j==k)cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }
}