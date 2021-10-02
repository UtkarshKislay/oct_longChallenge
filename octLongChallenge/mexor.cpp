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
     	ll x;
     	cin>>x;
      ll oor=0;
      ll mid=0;
      ll k=0;

      while(oor<x){
      	oor = oor|k;

        if(oor>x){
            break;
        }
         mid=oor;
         if(oor>k){
            k=oor;
            k++;
         }else{
             k++;
         }
      }
      cout<<mid+1<<end_l;

      }
	return 0;
}

void in_itCode(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
