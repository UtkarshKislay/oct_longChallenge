#include <bits/stdc++.h>

using namespace std;
void in_itCode();
#define ll long long int
#define end_l "\n"
#define loop(i,a,b) for(int i=a;i<b;i++)
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vect vector<int>
#define pb push_back
#define makep make_pair<int,int>
#define paivect vector<pair<int,int>>


int main(int argc, char const *argv[])
{
    // boost
       in_itCode();

     int t;cin>>t;
     while(t--){
     ll n;cin>>n;

     if(n==1 or n==2){
            cout<<1<<end_l;
     }else{
         ll mid=n;
         int k=0;
         while(mid!=1){
         	mid=mid/2;
         	k++;
         }
          ll start=pow(2,k);
          ll max1=n-start+1;
          ll max2=start/2;
          cout<<max(max2,max1)<<end_l;
     }
     }
	return 0;
}

void in_itCode(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
