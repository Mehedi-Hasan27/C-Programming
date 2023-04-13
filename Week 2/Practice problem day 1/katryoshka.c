#include<stdio.h>
int main()
{
   long long int n, m, k, res = 0;// ekhane n=eye,m=mouth,k=body
scanf("%lld %lld %lld", &n, &m, &k); // eyes, mouth, body
// 1. two eyes, one body 20 0 34
// 2.
// 3. one eye, one mouth, one body
// ekta eye ar ekta body must
if(n == 0 || k == 0){
printf("0\n");
}
else{
long long int mn = n; // min ber korte hole amake boro value diye compare korte hobe..3 ta value theke.ekhane ami first e eye ke choto dhore nisi.
if(m < mn){//body check kortesi minimum kina 
mn = m;
}
if(k < mn){
mn = k;
}
n -= mn;
m -= mn;
k -= mn;
res += mn;
if(n/2 < k){
res += n / 2;
}
else{
res += k;
}
printf("%lld\n", res);
}



    return 0;
}