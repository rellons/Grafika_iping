#include "object.cpp"

class Layer(){
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

      for (it=mylist.begin(); it != mylist.end(); ++it){
        if ((*it).getName == ObjectName) {
            Objects.erase(it);
        }
      }
    }


}
