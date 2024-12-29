#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <map>

using namespace std;
const int Row = 6;
const int Col = 5;
int visited[Row][Col] = {false};

// 1=open,0=wall
bool checkwin(int exitRow, int exitCol, int startRow, int startCol)
{
  if (startRow == exitRow && startCol == exitCol)
  {
    return true;
  }
  else
  {
    return false;
  };
};
vector<pair<int, int>> expansionFunc(pair<int, int> currentPos, int maze[][5])
{
  vector<pair<int, int>> direction;

  int moves[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  for (const auto &move : moves)
  {
    int newRow = currentPos.first + move[0];
    int newCol = currentPos.second + move[1];
    if (newRow >= 0 && newCol >= 0 && newRow < Row && newCol < Col && maze[newRow][newCol] == 1 && visited[newRow][newCol] == false)
    {
      direction.push_back(make_pair(newRow, newCol));
      // que.erase();
    };
  };
  return direction;
};
void printans(pair<int,int> goal,map<pair<int,int>,pair<int,int>>& parentmap,pair<int,int> start){
    vector<pair<int,int>> path;
    pair<int,int> current=goal;
    while(current!=start){
         path.push_back(current);
         current=parentmap[current];

    };
     path.push_back(start); 
     for (const auto& p : path) {
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
};
int findPath(int startRow, int startCol, int exitRow, int exitCol, int maze[][5])
{
  std::vector<std::pair<int, int>> que;
  bool found = false;
  que.push_back(make_pair(startRow, startCol));
     for (const auto& p : que) {
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
      map<pair<int, int>, pair<int, int>> parentMap;

  visited[startRow][startCol]=true;
  while (!que.empty() && !found)
  {
        pair<int, int> parentQue = que.front();
    que.erase(que.begin());

    if (parentQue.first == exitRow && parentQue.second == exitCol)
  {
    printans(make_pair(parentQue.first,parentQue.second),parentMap,make_pair(startRow,startCol));
    found=true;
    break;
  };
    std::vector<std::pair<int, int>> directions = expansionFunc(parentQue, maze);
    // que.push_back(directions);

    for (const auto &p : directions)
    {
      que.push_back(p);
      visited[p.first][p.second]=true;
       parentMap[{p.first,p.second}] = {parentQue.first,parentQue.second};
    };
   
  };
  return 0;
};
int main()
{
  // 
  int maze[6][5]={
   {1, 0, 1, 0, 1},
   {1, 1, 1, 0, 0},
   {1, 0, 1, 1, 1},
   {1, 0, 1, 0, 1},
   {1, 1, 1, 1, 1},
   {0, 1, 1, 0, 1}
  //
  };

  // int maze[6][5] = {
  //     {1, 0, 1, 0, 1},
  //     {1, 0, 1, 0, 1},
  //     {1, 1, 1, 1, 0},
  //     {0, 1, 0, 1, 0},
  //     {1, 1, 1, 1, 1},
  //     {0, 1, 1, 0, 1}

  // };
  int startRow = 0, startCol = 0;
  int exitRow = 5, exitCol = 4;
  int result = findPath(startRow, startCol, exitRow, exitCol, maze);

  cout << "hio";
  return 0;
}