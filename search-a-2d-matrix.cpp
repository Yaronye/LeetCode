class Solution {
public:
    bool checkRow();
    
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        if(matrix.size() == 1){
            return checkRow(matrix, target, 0);
        }
        for(int a = 0; a < matrix.size(); a++){
            if(matrix[a][0] > target && a == 0){
                return false;
            }
            else if(matrix[a][0] > target && a != 0){
                int row = a-1;
                return checkRow(matrix, target, row);
            }
            else if(matrix[a][0] == target){
                return true;
            }
        }
        int row = matrix.size() - 1;
        return checkRow(matrix, target, row);
        return false;
    }
        bool checkRow(vector<vector<int>>& matrix, int target, int row){
        for(int i = 0; i < matrix[row].size(); i++){
            if(matrix[row][i] == target){
                return true;
            }
        }
        return false;
    }
};

//time complexity = O(m + n)

//go through first int of every row until reaching an int > target
//go to row - 1, check every cell starting from the back
//if target in the row return true, else return false
