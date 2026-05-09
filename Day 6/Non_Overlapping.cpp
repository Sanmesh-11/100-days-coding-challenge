#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Function to compare intervals by ending time
bool compare(vector<int> a, vector<int> b) {
    return a[1] < b[1];
}

// Function to find minimum intervals to remove
int earseOverlapIntervals(vector<vector<int>> & intervals){

// Sort interval according to end time
sort(intervals.begin(),intervals.end(),compare)

//Count removed intervals


}
