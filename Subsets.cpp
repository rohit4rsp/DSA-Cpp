#include<iostream>
#include<vector>
using namespace std;


void solve(vector<int> nums, vector<int> output, int index, vector< vector<int> >& ans){
        
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }
        
    //exclude
    solve( nums, output, index+1, ans);
        
    //include
    int element = nums[index];
    output.push_back(element);
    solve( nums, output, index+1, ans);
        
}
    

vector< vector<int> > subsets(vector<int>& nums) {
        
    vector< vector<int> > ans;
    vector<int> output;
    int index = 0;
    solve( nums, output, index, ans);
    return ans;
        
}


int main()
{
	
	int v[3] = {1, 2, 3};
	
	int n = sizeof(v)/sizeof(int);
	
	vector<int> vect(v,v+n);
	
	subsets(vect);
	
//	vector< vector<int> > ans = subsets(vect);
//	
//	for(int i=0; i < ans.size(); i++){
//		for(int j=0; j<ans.size(); j++){
//			cout << ans[i]<<" ";
//		}
//		cout<<endl;	
//	}
	
	
return 0;
}

