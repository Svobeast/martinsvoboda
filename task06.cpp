#include <iostream>
using namespace std;



class RekniVek{
public:
       virtual string Rekni()=0;
};



class Pepa : public RekniVek{
public:
    string Rekni(){
        return "Pepovi je 24 let";
    }
};




class Kuba : public RekniVek{
public:
    string Rekni(){
       return "Kubovi je 15 let";
    }
};


class Clovek{
public:
    RekniVek* tell;

    Clovek(RekniVek* vek){
        this->tell = vek;
    }
    string Rekni(){
        return this->tell->Rekni();
    };
};



int main(){

    Clovek* pepa = new Clovek(new Pepa);
    Clovek* kuba = new Clovek(new Kuba);

    cout << pepa->Rekni() << "\n";
    cout << kuba->Rekni() << "\n";
}