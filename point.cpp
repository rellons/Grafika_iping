#include <bits/stdc++.h>
using namespace std;

class Point{
  private :
    int x;
    int y;

  public :
    Point(){
      x = 0; y = 0;
    }

    Point(int _x, int _y){
      x = _x;
      y = _y;
    }

    int getX(){return x;}
    int getY(){return y;}
    void setX(int _x){x = _x;}
    void setY(int _y){y = _y;}
};
