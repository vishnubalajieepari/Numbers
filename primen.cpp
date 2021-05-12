//method one
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,c=1,i;
	cout<<"Enter a number";
	cin>>num;
	for(i=2;i<=num/2;i++)
    {
		if(num%i==0)
		{
			cout<<"Not a prime number";
			c=0;
			break;
		}
    }
if(c==1)
{
  	cout<<"prime number";
}
return 0;
}
//method two
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,c=1,i;
cout<<"Enter a number";
cin>>num;
for(i=2;i<=sqrt(num+1);i++)
{
	if(num%i==0)
	{
		cout<<"Not a prime number";
		c=0;
		break;
	}
}
if(c==1)
{
  	cout<<"prime number";
}
}
//method three
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,c=1,i;
	cout<<"Enter a number";
	cin>>n;
	for(i=2;i<=sqrt(num);i++)
    {
		if(num%i==0)
		{
			cout<<"Not a prime number";
			c=0;
			break;
		}
    }
if(c==1)
{
  	cout<<"prime number";
}
return 0;
}
