#include "bits/stdc++.h"
using namespace std;

char findLongestShift(int numberOfNurses,vector<pair<int,int>>leaveTime){
    int prevTime=0;
    int ans=INT_MIN; 
    int ansNurse=-1; //nurse number
    for(int itr=0;itr<numberOfNurses;itr++){
        int itrTime=leaveTime[itr].second;
        int tempTime=itrTime-prevTime;
        if(tempTime>ans){
            ans=tempTime;
            ansNurse=leaveTime[itr].first;
        }
        prevTime=itrTime;
    }
    return 'a'+ ansNurse; //nurse id
}
int main(){
    int numberOfNurses;cin>>numberOfNurses;
    vector<pair<int,int>>leaveTime;
    for(int itr=0;itr<numberOfNurses;itr++){
        int employeeNumber;cin>>employeeNumber;
        int leave_time;cin>>leave_time;
        leaveTime.push_back({employeeNumber,leave_time});
    }
    char ans=findLongestShift(numberOfNurses,leaveTime);
    cout<<ans<<endl;
    return 0;
}