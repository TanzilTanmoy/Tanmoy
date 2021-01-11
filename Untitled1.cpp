#include<bits/stdc++.h>
using namespace std;
#define   ll          long long
#define   pb          push_back
#define   in          insert
#define   F           first
#define   S           second
#define   mk          make_pair
#define   all(v)      v.begin(),v.end()
#define   allr(v)     v.rbegin(),v.rend()
#define   cout(p)     cout<<p<<"\n"
#define   boo         bool ok=false
#define   sz          size()
#define   Tc()        ll T,cs=0; cin>>T; hell: while(T--)
#define   Tanmoy      ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

const ll MOD=1e9+7, MAX=2e6+10;
ll a[MAX], b[MAX], c[MAX];

/*********************************
for(ll i=0; i<n; i++) cin>>a[i]; *
for(ll j=0; j<n; j++)            *
for(ll i=n-1; i>=0; i--)         *
*********************************/

int main()
{
   Tanmoy;

   //freopen("in.txt", "r" , stdin);

   /* Kadane's Algorithm */
   /* Largest sum contiguous sub array */

   Tc(){

        ll n, Sum=0, Largest_sum_contiguous_sub_array=0, x=0;

        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }

        for(ll i=0; i<n; i++){

            x+=a[i];
            if(x > Largest_sum_contiguous_sub_array){
                Largest_sum_contiguous_sub_array=x;
            }
            if(x < 0){
                x=0;
            }
        }

        cout<<Largest_sum_contiguous_sub_array<<"\n";

   }


   return 0;
}
