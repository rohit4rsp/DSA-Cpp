#include <bits/stdc++.h> 
#include<stack>

void sortedInsert(stack<int> &s, int num){
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    
    int n = s.top();
    s.pop();
    
    sortedInsert(s,num);
    
    s.push(n);
    
}

void sortedStack(stack<int> &s)
{
    if(s.empty()){
        return;
    }
    
    int num = s.top();
    s.pop();
    
    sortedStack(s);
    
    sortedInsert(s,num);
    
}


stack<int> sortStack(stack<int> &s)
{
    sortedStack(s);
    return s;    
}

int main(){
	
	return 0;
	
}
