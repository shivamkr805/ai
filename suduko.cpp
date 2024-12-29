#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
std::vector<int> possibleValues(int suduko[][9],pair<int,int> initialposition){
    std::vector<int> possibleoutcomes={1,2,3,4,5,6,7,8,9};
    
    // checking  row wise
    for(int i=0;i<9;i++){
       std::find(possibleoutcomes.begin(), possibleoutcomes.end(), i);
        if (it != numbers.end()) {

        };
    };
    return possibleoutcomes;
};
void solveSuduko(int suduko[][9]){
    vector<int> possiblemoves=possibleValues(suduko,make_pair(0,2));
    for(const auto p : possiblemoves){
         cout<<p<<endl;
    };
};
int main()
{
   int  sudoku[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}

    };

    solveSuduko(sudoku);
    cout<<"hello world"<<endl;
    return 0;
}
