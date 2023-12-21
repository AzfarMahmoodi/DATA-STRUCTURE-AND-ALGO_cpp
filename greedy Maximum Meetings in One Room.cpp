class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
         vector<pair<pair<int,int>,int>>vect;
        for(int i=0;i<N;i++){
            vect.push_back({{F[i],S[i]},i+1});
        }
        sort(vect.begin(),vect.end());
        vector<int>q;
        q.push_back(vect[0].second);
        //int cnt=1;
        int ansend=vect[0].first.first;
         for(int i=1;i<N;i++){
             if(vect[i].first.second>ansend){
                 //cnt++;
                 q.push_back(vect[i].second);
                 ansend=vect[i].first.first;sort(q.begin(),q.end());
             }
         }
         return q;
    }
};
