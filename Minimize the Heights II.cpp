 int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int mini=arr[0]+k;
        int maxi=arr[n-1]-k;
        int mii,mai;
        for(int i=0;i<n;i++){
            mii=min(mini,arr[i+1]-k);
            mai=max(maxi,arr[i]+k);
            if(mii<0){
                continue;
            }
            ans=min(ans,mai-mii);
        }
        return ans;
    }
