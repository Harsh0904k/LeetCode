class Solution {
public:
    bool row(vector<vector<char>>& board){
    int n = 0;
    while(n<9){
        for(int i = 0; i<9;i++){
            for(int j = i+1; j<9; j++){
                if(board[n][i]==board[n][j] && board[n][i]!='.'){
                    return false;
                }
            }
        }
        n++;
    }
    return true;
    }

    bool column(vector<vector<char>>& board){
    int n = 0;
    while(n<9){
        for(int i = 0; i<9;i++){
            for(int j = i+1; j<9; j++){
                if(board[i][n]==board[j][n] && board[i][n]!='.'){     
                    return false;
                }
            }
        }
        n++;
    }
    return true;
    }


    bool box(vector<vector<char>>& board) {
    for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) {
            for (int i = 0; i < 9; i++) {
                for (int j = i + 1; j < 9; j++) {

                    int r1 = row + i / 3;
                    int c1 = col + i % 3;

                    int r2 = row + j / 3;
                    int c2 = col + j % 3;                    

                    if (board[r1][c1] == board[r2][c2] &&
                        board[r1][c1] != '.') {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

    bool isValidSudoku(vector<vector<char>>& board) {
        bool ro = row(board);
        bool co = column(board);
        bool bo = box(board);
        return ro && co && bo;
    }
};