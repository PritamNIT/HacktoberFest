#include <iostream>
using namespace std;
typedef long long ll;
int bintog(int x)
{
    return x^(x>>1); //1110 =>
    //calculations:
    //1110
    //in gray code first bit is as it is 2nd bit is 1st bit xor 2nd bit ....
    //1110 xor 0111 //bit shifted to 1 places
    
   
}
int main() 
{
    int n;
    cin>>n;
    cout<<bintog(n);  
}
