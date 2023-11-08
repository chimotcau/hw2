#include<iostream>
#include<sstream>
#include<vector>
#include <bits/stdc++.h> 
void permute(std::vector<int> &nums,int s,int l );
int main(){
    std::string m;
    int l;
    int s;
    int num;
    std::cout<<"enter the length of sequence ";
    std::cin>>l;
    std::cin.ignore();
    std::cout<<"enter the sequence ";
    std::getline(std::cin >>std ::ws,m);   // to add number with whitespace if before we got int
    std::stringstream ss(m);
    std::vector<int> nums;
    while (ss >> num){
        nums.push_back(num);
    }
    permute(nums,0,l);

    return 0;
}
void permute(std::vector<int> &nums,int s,int l ){
    if(s==l){
    for(int j=0;j<l;j++){
        std::cout<<nums[j]<<' ';
        }
        std::cout << std::endl;
    }
    else{
        for(int i=s;i<l;i++){
            std::swap(nums[s],nums[i]);
            permute(nums,s+1,l);
            std::swap(nums[s],nums[i]);

        }
    }

    



}

