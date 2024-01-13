public:
   int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>m;
        // vector<int>v;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int temp=k-arr[i];
            
            if(m[temp]>0)
            {
                count+=m[temp];
            }
            
            m[arr[i]]++;
            
            
        }
        return count;
    }

