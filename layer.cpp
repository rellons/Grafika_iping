#include "object.cpp"

class Layer{
  private :
    list<Object> Objects;


  public :
    Layer(){}
    Layer(list<Object> O){
      Objects = O;
    }

    void addObject(Object O){
      Objects.push_back(O);
    }

    void deleteObject(string ObjectName){
      list<Object>::iterator it;

      for (it=Objects.begin(); it != Objects.end(); ++it){
        if ((*it).getName() == ObjectName) {
            Objects.erase(it);
        }
      }
    }

    list<Object> getObjects(){
      return Objects;
    }

    void drawLayer() {
      list<Object>::iterator it = Objects.begin();
      for(it; it != Objects.end(); ++it){
        (*it).drawObject();
      }
    }
};

int DrivermainLayer() {

  // nerima masukan point
  Point p1 (100, 200);
  Point p2 (100, 300);
  Point p3 (200, 300);
  Point p4 (200, 200);

  Point p5 (400, 400);
  Point p6 (400, 500);
  Point p7 (600, 500);

  //masukin ke list of points
  list<Point> p;
  p.push_back(p1);
  p.push_back(p2);
  p.push_back(p3);
  p.push_back(p4);

  list<Point> pp;
  pp.push_back(p5);
  pp.push_back(p6);
  pp.push_back(p7);

  system("clear");

  //construct object dari point
  Object o ("object1", p);
  Object o2 ("object2", pp);

  //buat list of object
  list<Object> listObject;
  listObject.push_back(o);
  listObject.push_back(o2);

  //construct layer dari list of objects
  Layer l(listObject);

  // testing get list of object di layer terus mw digambar semua nya
  l.drawLayer();

  return 0;
}
