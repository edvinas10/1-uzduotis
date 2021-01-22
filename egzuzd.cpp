#include<iostream>
#include<string>
using namespace std;

class automobilis {
  protected: 
  string keb_tipas;
  public:
  automobilis(string kt = "") : keb_tipas{kt} {}
  string getTipas() const {return keb_tipas;}
  virtual string getTipas() = 0;
  void setTipas(string kt) {
    keb_tipas = kt;
  }
};

class BMW : public automobilis {
  protected:
  string deg_tipas;
  public:
  BMW(string dt = "", string kt = "") : automobilis(kt) {}
  string getTipas() {
    return (deg_tipas);
  }
  friend ostream &operator << (ostream &out, const BMW &b);
  friend istream &operator >> (istream &in, BMW &b);


  BMW() : deg_tipas(0) { }
  ~BMW(){cout<<"de";};
  BMW(std::istream& is);
  
  BMW(const BMW &BMW_kopijuoti) {deg_tipas = BMW_kopijuoti.deg_tipas; }
    BMW& operator=(const BMW& rhs)
   {
      deg_tipas = rhs.deg_tipas;
      return *this;
   }
};

ostream & operator << (ostream &out, const BMW &b){
out << "BMW: " << "degalu tipas: " << b.dt << b.kt;
return out;

istream & operator << (istream &in, BMW &b){
  cout << "iveskite kebulo tipa";
  in >> b.kt;
  cout << "iveskite degalu tipa";
  in >> b.dt;
  return in;
}
}

int main(){
  BMW b1;
  cin >> b1;
  cout << "tipas yra ";
  cout << b1;
  return 0;

  BMW b2;
  cin >> b2;
  cout << "tipas yra ";
  cout << b2;
  return 0;

  BMW b3;
  cin >> b3;
  cout << "tipas yra ";
  cout << b3;
  return 0;

  BMW b4;
  cin >> b4;
  cout << "tipas yra ";
  cout << b4;
  return 0;

  BMW b5;
  cin >> b5;
  cout << "tipas yra ";
  cout << b5;
  return 0;
}