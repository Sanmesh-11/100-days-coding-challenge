#include<iostream>
#include<vector>

using namespace std;

void find_flower_indices(int n, int t, vector<int>&arr,int result[2]){


    for (int i = 0; i < n; i++)
    {
       //Check every pair
       for(int j=i+1 ;j<n ; j++){

        //If sum becomes target

        if (arr[i] + arr[j] == t){

            result[0] = i;
            result[1] = j;

            return ; //stop function
        }
       }
    }
    
}

int main(){

    int n, t;

    cin>> n>> t;
    vector<int> arr(n);

    //Input array

   for(int i=0; i<n ; i++){
    cin >> arr[i];

   }

   int result[2];

   //Function call
   find_flower_indices(n,t,arr,result);

   //Print answer
   cout << result[0] << " " << result[1];

   return 0;

}