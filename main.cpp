#include <iostream>
using namespace std;
class addition
{
  int x, y;

public:
  addition(int a, int b) : x(a), y(b) {n++;} ;
 
    // Default constructor
  addition() : x(0), y(0) {} 
  //  ~addition(){n--;};
  static int n;
  void getdata();
  addition operator+(addition &other);
};
int addition::n=0;
void addition::getdata()
{
  cout << x << "," << y << endl;
};
 addition addition::operator+(addition & other)
{
  addition temp;
  temp.x = x + other.x;
  temp.y = y + other.y;
  return temp;
};
int main()
{
  cout << "hiioi" << endl;
  addition a(3, 7);
  a.getdata();
  addition b(5, 4),c;
  c=a+b;
  c.getdata();
  cout<<addition::n<<endl;
  return 0;
}
