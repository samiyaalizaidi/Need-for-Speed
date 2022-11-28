
#include "cloudmanager.hpp"
#include <iostream>
using namespace std;
void cloudmanager::creatobj(){
    check++;
    if (check >50){
    // cout << "cloud created"<<endl;
    clouds *c1 = new clouds(30,100);
    cld.push_back(c1); 
    check=0;
}
}
void cloudmanager::creatobj1(){
    check1++;
    if (check1 >45){
    // cout << "cloud created1"<<endl;
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
        //if (cld1[size]->count1 == 3) {
        //		cld.erase(cld.begin()+size);
        //}
        size++;
        }
   
    }

//diamond
void cloudmanager::creatobj2(){
    check2++;
    if (check2 >50){
    int x = rand() % 4;
    diamond *d1;
    switch (x)
    {
        case 0:
                // cout << "diamond created1"<<endl;
                d1 = new diamond(1200,300);

                break;
        case 1:
                // cout << "diamond created2"<<endl;
                d1 = new diamond(1200,150);
                break;
        case 2:
                // cout << "diamond created3"<<endl;
                d1 = new diamond(1200,590);
                break;
        case 3: 
                // cout << "diamond created4"<<endl;
                d1 = new diamond(1200,20);
                break;


        default:
            break;
    }
    dim.push_back(d1);
    check2=0;
    }
}
void cloudmanager::drawobj2(){
    int size=0;
    while(size<dim.size()){
        if(dim[size] != NULL){
        dim[size]->draw();
        dim[size]->move();
        size++;
        }
    }
}

cloudmanager::~cloudmanager(){
    int size=0;
    while(size<cld.size()){
        delete cld[size];
        cld[size] = NULL;
        size++;
    }
    cout << "clouds deleted" << endl; // memory ka issue hai
}

bool cloudmanager::DetectCollision(SDL_Rect coord){
    int h = coord.h; 
    int w = coord.w;
    int x = coord.x;
    int y = coord.y;
    int i = 0;

    for(auto diamond : dim){
        if((x + w) == diamond->getX()){
            if(diamond->getY() >= y && diamond->getY() <= (y + h)){
                delete diamond;
                diamond = NULL;
                dim.erase(dim.begin() + i);
                cout << "diamond deleted" << endl;
                return true;
            }
        }
        else if(x == diamond->getX()){
            if(diamond->getY() >= y && diamond->getY() <= (y + h)){
                delete diamond;
                diamond = NULL;
                dim.erase(dim.begin() + i);
                cout << "diamond deleted" << endl;
                return true;
            }
        }
        else if((x + w) == diamond->getX()){
            if(diamond->getY() <= y && y <= (diamond->getY() + 50)){
                delete diamond;
                diamond = NULL;
                dim.erase(dim.begin() + i);
                cout << "diamond deleted" << endl;
                return true;
            }
        }
        else if(diamond->getY() == y){
            if((x + w) >= diamond->getX() && (x + w) <= diamond->getY()){
                delete diamond;
                diamond = NULL;
                dim.erase(dim.begin() + i);
                cout << "diamond deleted" << endl;
                return true;
            }
        }
        i++;
    }
    return false;
}