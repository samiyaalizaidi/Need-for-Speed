#include "cloudmanager.hpp"

void cloudmanager::creatobj(){
    check++;
    if (check >30){
    cout << "created"<<endl;
    clouds *c1 = new clouds(30,100);
    cld.push_back(c1); 
    check=0;
}
}
void cloudmanager::drawobj(){
    int size=0;
    while(size<cld.size()){
        cld[size]->draw();
        cld[size]->move();
        size++;
    }
}

cloudmanager::~cloudmanager(){
    int size=0;
    while(size<cld.size()){
        delete cld[size];
        cld[size] = NULL;
        size++;
    }
    cout << "clouds deleted" << endl;
}