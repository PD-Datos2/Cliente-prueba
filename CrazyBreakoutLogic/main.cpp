/* 
 * File:   main.cpp
 * Author: ellioth
 *
 * Created on February 10, 2016, 1:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Bola.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //string dato = "0001";
    //string dato2= dato.substr(0,2);
    //string dato = "-1";
    //int dato2=stoi(dato);
    //cout<<dato2<<endl;
    //cout<<dato.length()<<endl;
    
    //forma 1
    Bola * pelota[3];
    pelota[0]= new Bola(1, 2);
    pelota[1]= new Bola(1, 2);
    pelota[2]= new Bola(1, 2);
    Bola * temp= pelota[0];
    pelota[0]=NULL;
    temp->~Bola();
    cout<<pelota[0]->getPx()<<endl;
    temp->move(1,1);
    cout<<temp->getPx()<<endl;
    
    //forma 2 
    
    Bola * pelota[3];
    pelota[0]= new Bola(1, 2);
    pelota[1]= new Bola(1, 2);
    pelota[2]= new Bola(1, 2);
    delete pelota[0];
    pelota[1]->~Bola();
    pelota[2]->~Bola();
    //pelota[0]=new Bola(3,4);
    cout<<pelota[0]->getPx()<<endl;
    pelota[0]->move(1,1);
    cout<<pelota[0]->getPx()<<endl;
    
    return 0;
}
