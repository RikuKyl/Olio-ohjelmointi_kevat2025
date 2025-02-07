#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori() {
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *s)
{
   if (seuraajat == nullptr) {
        seuraajat = s;
        cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
        return;
    }
    s->next = seuraajat;
    seuraajat = s;

    cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja *s)
{
      Seuraaja *ptr = seuraajat; //tehtiin loop-muuttuja ja alustettiin se listan alkuun

    if (ptr == nullptr)
      {
          cout<<"Ei poistettavaa listalla"<<endl;
        return;
    }

   /* if (ptr->next = nullptr) //Listalla on vain yksi alkio
       if(seuraajat == s)
        {
            seuraajat = nullptr;
          }
*/

    while (ptr->next != nullptr){
          if (ptr->next==s){
            ptr->next = ptr->next->next;
          }

        ptr = ptr->next;
          cout<<"Notifikaattori poistaa seuraajan "<<s->getNimi()<<endl;
    }

}

void Notifikaattori::tulosta()
{
    Seuraaja *ptr = seuraajat; //tehtiin loop-muuttuja ja alustettiin se listan alkuun

    while (ptr->next != nullptr){
        cout<<"Seuraaja "<<ptr->getNimi()<<endl;
        ptr = ptr->next;
    }
    cout<<"Seuraaja "<<ptr->getNimi()<<endl;
}

void Notifikaattori::postita(string v)
{
    cout<<"Notifikaattori postaa viestin: "<<v<<endl;

    Seuraaja *ptr = seuraajat; //tehtiin loop-muuttuja ja alustettiin se listan alkuun

    while (ptr->next != nullptr){
        ptr->paivitys(v);
        ptr = ptr->next;
    }
    ptr->paivitys(v);

}
