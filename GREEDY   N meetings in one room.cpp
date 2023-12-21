
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
220 /220
Your Total Score: 
88
Total Time Taken: 
0.68
Correct Submission Count: 
3

    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vect;
        for(int i=0;i<n;i++){
            vect.push_back({end[i],start[i]});
        }
        sort(vect.begin(),vect.end());
        
        int cnt=1;
        int ansend=vect[0].first;
         for(int i=1;i<n;i++){
             if(vect[i].second>ansend){
                 cnt++;
                 ansend=vect[i].first;
             }
             
         }
         return cnt;
    }
