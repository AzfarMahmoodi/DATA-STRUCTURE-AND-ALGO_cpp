vector<int> spiralMatrix(vector<vector<int>>&matrix) {
    // Write your code here.
    vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col; 
        int starting_row=0;
        int ending_row=row-1;
        int starting_col=0;
        int ending_col=col-1;
        while(total>count){
            for(int index=starting_col;count<total && index<=ending_col;index++){
                ans.push_back(matrix[starting_row][index]);
                count++;
            }
            starting_row++;
            for(int index=starting_row;count<total && index<=ending_row;index++){
                ans.push_back(matrix[index][ending_col]);
                count++;
            }
            ending_col--;

        
            for(int index=ending_col; count<total && index>=starting_col;index--){
            ans.push_back(matrix[ending_row][index]);
            count++;
            }
            ending_row--;

            for(int index=ending_row;count<total && index>=starting_row;index--){
                ans.push_back(matrix[index][starting_col]);
                count++;
            }
            starting_col++;
        } 
        return ans ;
    
}
