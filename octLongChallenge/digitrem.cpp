#include <bits/stdc++.h>

using namespace std;
void in_itCode();
#define ll int
#define end_l "\n"
#define loop(i,a,b) for(int i=a;i<b;i++)
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vect vector<int>
#define pb push_back
#define makep make_pair<int,int>
#define paivect vector<pair<int,int>>

ll solve(ll n,int d){
      string str=to_string(n);
     int leng=str.size();
     int cha=d+48;
     int pos=-1;
      ll ans=0;

     loop(i,0,leng){
         if(str[i]==cha){
            pos=i;
             break;
         }
     }

     //case 1
     if(pos+1==leng){
         return n+1;
     }

     //case 2
     if(pos==-1){
        return n;
     }

     //case 3
     string s1="";
     for(int i=0;i<=pos;i++){
        s1+=str[i];
     }
     string s2="";
     for(int i=pos+1;i<leng;i++){
        s2+=str[i];
     }
     ll last=stoi(s1)+1;
     int po=leng-(pos+1);
     ll power=pow(10,po);

       ans=last*power;
     return ans;

}

int main(int argc, char const *argv[])
{
    // boost
       in_itCode();
    int t;cin>>t;
     while(t--){
            ll n;cin>>n;
             int d;cin>>d;
            ll result=solve(n,d);
            ll temp=result;
            int rem;
            while(temp>0){
                rem=temp%10;
                if(rem==d){
                    temp=solve(result,d);
                    result=temp;
                   continue;
                }
                temp/=10;

            }
              cout<<result-n<<end_l;

      }
	return 0;
}

void in_itCode(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
