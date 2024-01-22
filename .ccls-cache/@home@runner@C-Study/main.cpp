#include<iostream>
using namespace std;

int main()
{
    int i , n , c=0;
  cout<< "Enter the desired number: ";
  cin>>n;
  for(i=1;i<=n;i++)
    {
      cout <<i<<"+";
      c=c+i;
    }

    return 0;
}
