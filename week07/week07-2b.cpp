class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<2;i++){ //Step04: 印出模擬棋盤的內容
            for(int j=0;j<3;j++){
                cout << board[i][j] << ' ';
            }            
            cout << "\n";
        }
        cout << "\n";
    }
    bool testWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; // 上面橫行
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; // 中間橫行
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; // 下面橫行
        //再來是直的
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; // 左直行
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; // 中直行
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; // 右直行
        //再來要寫斜的對角線
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; // 左上右下
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; // 右上左下

        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; // Step03: C的陣列，裡面都放0代表沒有人放東西
        int now = 1; //1,2,1,2 (把now = 3 - now就會跳動了)
        //myDrawBoard(board);
        for(auto move : moves){ // Step01: C++進階迴圈
            int i = move[0], j = move[1]; // Step02: 取出陣列裡的值
            board[i][j] = now;
            //myDrawBoard(board);
            if(testWin(board,now)){
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now;
        }
        if(moves.size() == 9) return "Draw";
        else return "Pending"; // 還沒走完9步, 再等人繼續下, 叫"Pending"等待
    }
};