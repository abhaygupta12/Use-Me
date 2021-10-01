#include<iostream>
#include<vector>
using namespace std;
const int N =40;

void sum(int*p, int n, int d[])
{
    int i;
    *p = 0;
    for(i=0;i<n;++i)
    *p = *p + d[i];
}
int main()
{
    int i;
    int accum = 0;
    int data[N];
    for(i = 0; i < N; ++i)
       data[i] = i;

    sum(&accum, N, data);
    cout<<" sum is "<< accum<<endl;
    return 0;
}
//we also programmed it as
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter number till which you would like to add";
	cin>>n;
	while(n>0)
	{
		sum+=n;
		n--;
	}
	cout<<"\n sum is:"<<sum;
	return 0;
}

