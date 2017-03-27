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

    void DrawFrame() {

    }




};
