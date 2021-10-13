
class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    //	pair<int ,int>p;
    sort(a,a+n);
    int i,j;
    long long d=0;
    for( i=0;i<n;i++){
        if(a[i]<=0)
        continue;
        int j=lower_bound(a,a+n,-a[i]+1)-a;
           // cout<<j<<" ";
        d+=i-j;
    }

    	
    	return d;
    }   
};
