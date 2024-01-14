void largest(int n, vector<int> arr,vector<int>&ans){
    int small=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(small<arr[i]){
            second=small;
            small=arr[i];
            
        }
        else if((second<arr[i]) && (arr[i]!=small)){
            second=arr[i];
        }
    }
    ans.push_back(second);
}
void smallest(int n, vector<int> arr,vector<int>&ans){
    int small=INT_MAX;
    int second=INT_MAX;
    for(int i=0;i<n;i++){
        if(small>arr[i]){
            second=small;
            small=arr[i];
            
        }
        else if((second>arr[i]) && (arr[i]!=small)){
            second=arr[i];
        }
    }
    ans.push_back(second);
}




vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;
    largest(n, a,ans);
    smallest(n, a,ans);
    return ans;
}
