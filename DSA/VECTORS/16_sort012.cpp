#include<iostream>
#include<vector>
using namespace std;

//METHOD 1 : 2 BAR TRAVERSAL
void sortColors(vector<int>& nums) {
        int no0=0;
        int no1=0;
        int no2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) no0++;
             if(nums[i]==1) no1++;
            if(nums[i]==2) no2++;
        }

         for(int i=0;i<nums.size();i++){
        if(i<no0) nums[i]=0;
        else if(i>=no0 && i<(no0+no1)) nums[i]=1;
        else nums[i]=2;
    }
      return;
    }

//METHOD 2: Three POINTERS / 1 bar traversal /dutch flag algo
void sort2(vector<int>&v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    // mid ke bare me socho
    // 0 to lo-1 me 0 , hi+1 se end me 2
    // lo se mid-1 me 1

    while(mid<=high){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }

        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }

        else{
            mid++;
        }
    }
}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
     v.push_back(0);
   

    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }



}