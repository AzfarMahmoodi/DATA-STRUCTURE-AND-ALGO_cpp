       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0;
            int j=0;
            int k=0;
            vector<int>ans;
            while(i<n1 && j<n2 && k<n3){
                if((A[i]==B[j])&&(B[j]==C[k])){
                    if (ans.empty() || A[i] != ans.back())
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j]){
                    i++;
                }
              else if(B[j]<C[k]){
                    j++;
                }
                
                else{
                    k++;
                }
            }
            return ans;
        }
