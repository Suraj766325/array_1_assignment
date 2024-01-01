// 1) Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int a[n],product=1,i;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    product*=a[i];
    }
    cout<<"product = "<<product;
}




// 2) Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int a[n],l=INT_MIN,sl=INT_MIN,i;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl && a[i]!=l)
        sl=a[i];
    }
    cout<<"second laregst = "<<sl;
}




//Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int a[n],m=INT_MAX,i;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]<m)
    m=a[i];
    }
    cout<<"minimum = "<<m;
}




// 4) Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int a[n],i,j;
    bool flag =false;
    cout<<"enter array = ";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        break;
    }
    if(flag==true)
    cout<<"contain duplicate element";
    else
    cout<<"does not contain duplicate elelment";
}




// 5) WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
   cout<<"enter size of array = ";
   cin>>n;
   int a[n],i;
   cout<<"enter array = ";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            cout<<"smallest missing number is "<<i+1;
            break;
        }
    }
    if(i==n)
    cout<<"not missing";

}




// 6) Predict the output.
int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
}

Output=49