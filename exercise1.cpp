#include<iostream>
#include<sstream>   // to work with an array has whitespace
#include<vector>    // to work with an array has whitespace
#include <bits/stdc++.h> // to use swap
#include<set>   //To remove duplicate permutations
void permute(std::vector<int> &nums,int s,int l,std::set<std::vector<int>> &permutation );
int main(){
    std::string m;
    int l;
    int s;
    int num;
    std::cout<<"enter the length of sequence ";
    std::cin>>l;
    std::cin.ignore();
    std::cout<<"enter the sequence ";
    std::getline(std::cin >>std ::ws,m);   // to add number with whitespace if we got int before it
    std::stringstream ss(m);
    std::vector<int> nums;
    while (ss >> num){
        nums.push_back(num);
    }
    std::set<std::vector<int>> permutation;
    permute(nums,0,l,permutation);

    return 0;
}
void permute(std::vector<int> &nums,int s,int l,std::set<std::vector<int>> &permutation ){
    if(s==l){
        if (permutation.find(nums) == permutation.end()) {
            permutation.insert(nums);

            for(int j=0;j<l;j++){
        
                std::cout<<nums[j]<<' ';
            }
            std::cout << std::endl;
        }
    }    
    else{
        for(int i=s;i<l;i++){
            std::swap(nums[s],nums[i]);
            permute(nums,s+1,l,permutation);
            std::swap(nums[s],nums[i]);  // backtrack

        }
    }
}


    





