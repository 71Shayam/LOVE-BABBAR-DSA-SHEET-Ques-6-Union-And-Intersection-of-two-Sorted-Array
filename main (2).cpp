#include <iostream>
#include<vector>
using namespace std ;

int main() {
  int arr1[]={1,1,1,2,2,3,3,3} ;
  int m=sizeof(arr1)/sizeof(int) ;
  int arr2[]={3,3,3,4} ;
  int n=sizeof(arr2)/sizeof(int) ;
  int i=0 ;
  int j=0 ;
  vector<int>ans ;
  while(i<m && j<n){
    //skip duplicate
    while(i>0 && i<m && arr1[i] == arr1[i-1]){
      i++ ;
    }
    while(j>0 && j<n && arr2[j] == arr2[j-1]){
      j++ ;
    }
    // when one array is exhausted
    if(i>=m || j>=n){
      break ;
    }
    // comparision
    if(arr1[i]<arr2[j]){
      i++ ;
    }
    else if(arr1[i] >arr2[j]){
      j++ ;
    }
    else{
      ans.push_back(arr1[i]) ;
      i++ ;
      j++ ;
    }
  }
   //printing 
  for(int i=0 ;i<ans.size();i++){
    cout<<ans[i]<<" " ;
  }

  return 0 ;


}
