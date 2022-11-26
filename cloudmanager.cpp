
#include "cloudmanager.hpp"
#include <iostream>
using namespace std;
void cloudmanager::creatobj(){
    check++;
    if (check >30){
    cout << "cloud created"<<endl;
    clouds *c1 = new clouds(30,100);
    cld.push_back(c1); 
    check=0;
}
}
void cloudmanager::creatobj1(){
    check1++;
    if (check1 >25){
    cout << "cloud created1"<<endl;
    clouds1 *c2 = new clouds1(0,300);
    cld1.push_back(c2); 
    check1=0;
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
void cloudmanager::drawobj1(){
    int size=0;
    while(size<cld1.size()){
        cld1[size]->draw();
        cld1[size]->move();
        size++;
    }
}
//diamond
void cloudmanager::creatobj2(){
    check1++;
    if (check1 >25){
    int x = rand() % 3;
    diamond *d1;
    switch (x)
    {
        case 0:
                cout << "diamond created"<<endl;
                d1 = new diamond(1200,300);

                break;
        case 1:
                cout << "diamond created"<<endl;
                d1 = new diamond(700,450);
                break;
        case 2:
                cout << "diamond created"<<endl;
                d1 = new diamond(1000,590);
                break;

        default:
            break;
    }
    dim.push_back(d1);
    check1=0;
    }
}
void cloudmanager::drawobj2(){
    int size=0;
    while(size<dim.size()){
        dim[size]->draw();
        dim[size]->move();
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