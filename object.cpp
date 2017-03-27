#include "point.cpp"
#include "Line.h"

using namespace std;

class Object{
  private :
      list<Point> Points;
      bool hide;
      string Name;
      Line l;

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

    void drawObject(){
      if(!hide){
        list<Point>::iterator it,it2;
        it = Points.begin();
        it2 = ++(Points.begin());
        for (it,it2; it != Points.end(); ++it,++it2){
            list<Point>::iterator Point1 = it;
            list<Point>::iterator Point2 = it2;
            if(Point2 == Points.end()){
              Point2 = Points.begin();
            }
            l.insertLine((*Point1).getX(), (*Point1).getY(), (*Point2).getX(), (*Point2).getY(), 255, 255 , 255);
        }
      }
    }
};

int DrivermainObject() {

  // nerima masukan point
  Point p1 (100, 200);
  Point p2 (100, 300);
  Point p3 (200, 300);
  Point p4 (200, 200);

  //construct list of point dari point input
  list<Point> p;
  p.push_back(p1);
  p.push_back(p2);
  p.push_back(p3);
  p.push_back(p4);

  system("clear");

  // construct object dari list of point
  Object o ("object1", p);
  cout << o.getName() << endl;

  // draw point menjadi object
  o.drawObject();

  return 0;
}
