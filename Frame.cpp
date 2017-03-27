#include "layer.cpp"
#include "framebuffer.h"

class Frame{
  private :
    framebuffer FB;
    list<Layer> Layers;

  public :
    Frame() {

    }

    Frame(list<Layer> L) {
      Layers = L;
    }

    list<Layer> getLayers() {
      return Layers;
    }

    void DrawFrame() {
      list<Layer>::iterator it = Layers.begin();
      for(it; it != Layers.end(); ++it){
        (*it).drawLayer();
      }
    }

};

int main() {
  // nerima masukan point
  Point p1 (100, 200);
  Point p2 (100, 300);
  Point p3 (200, 300);
  Point p4 (200, 200);

  Point p5 (400, 400);
  Point p6 (400, 500);
  Point p7 (600, 500);

  Point p8 (350, 500);
  Point p9 (350, 550);
  Point p10 (300, 550);

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

  list<Point> ppp;
  ppp.push_back(p8);
  ppp.push_back(p9);
  ppp.push_back(p10);

  system("clear");

  //construct object dari point
  Object o ("object1", p);
  Object o2 ("object2", pp);
  Object o3 ("object3", ppp);

  //buat list of object
  list<Object> listObject;
  listObject.push_back(o);
  listObject.push_back(o2);

  list<Object> listObject2;
  listObject2.push_back(o3);

  //construct layer dari list of objects
  Layer l(listObject);
  Layer l2(listObject2);

  // contruct list of layer
  list<Layer> listLayer;
  listLayer.push_back(l);
  listLayer.push_back(l2);

  // construct Frame from list of layer
  Frame F(listLayer);
  F.DrawFrame();

  return 0;
}
