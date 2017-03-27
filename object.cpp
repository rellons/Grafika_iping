#include "point.cpp"

using namespace std;

class Object{
  private :
      list<Point> Points;
      bool hide;
      string Name;

  public :
    Object(){
      hide = false;
      Name = "Object";
    }

    Object(string ObjectName){
      hide = false;
      Name = ObjectName;
    }

    Object(string ObjectName,list<Point> P){
      Points = P;
      Name = ObjectName;
      hide = false;
    }

    void addPoint(Point P){
      Points.push_back(P);
    }

    list<Point> getPoints(){
      return Points;
    }

    void setHide(){
      this->hide = true;
    }

    void setUnhide(){
      this->hide = false;
    }

    string getName() {
      return Name;
    }
};
