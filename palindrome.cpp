#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin>>t;while(t--)
#define loop(variable,n) for(int variable=0;variable<n;variable++)
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool check(string s){
    string x = s;
    reverse(s.begin(),s.end());
    if(s==x)return true;
    return false;
}
void solve(vector<vector<string>>&ans,string s,vector<string>& temp,int idx){
    if(s==""){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<s.size();i++){
        string str=s.substr(0,i+1);
        if(check(str)){
            temp.push_back(str);
            solve(ans,s.substr(i+1,s.size()-i+1),temp,i+1);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>>v;
    vector<string>temp;
    solve(v,s,temp,0);
    return v;
}
int main(){
    fastIO();
    string s;
    cin>>s;
    vector<vector<string>>v=partition(s);
    loop(i,v.size()){
        loop(j,v[i].size()){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
/*
1. Wrong Ans?
Did u read the Statement properly?
Did u miss any constraints?
Did u miss any corner case?
Are u sure about your Solution?
2. No Idea?
Try Greedy..
Try DP...
First Try Recursive DP..
Then Try Iterative DP..
If memory exceeds, then try to reduce it..
If not possible then, try to solve it using following way..
Try to solve it using Permutation ans Combination..
Try to find Sequence..
Try to Solve it using Algebra..
*/