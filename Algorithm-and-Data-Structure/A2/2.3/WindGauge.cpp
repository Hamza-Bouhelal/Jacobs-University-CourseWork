#include <iostream>
#include <deque>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period){
this->Perd=period;
}
void WindGauge::currentWindSpeed(int speed){
    WindSpeedRecords.push_back(speed);
    if(WindSpeedRecords.size()<Perd)
        WindSpeedRecords.pop_back();
}
int WindGauge::highest(){
    deque<int>::iterator it=WindSpeedRecords.begin();
    int h=*it;
    it++;
    for(int i=0; i<WindSpeedRecords.size()-1;i++){
        if(h<*it)
            h=*it;
        it++;
    }
    return h;
}
int WindGauge::lowest(){
    deque<int>::iterator it=WindSpeedRecords.begin();
    int h=*it;
    it++;
    for(int i=0; i<WindSpeedRecords.size()-1;i++){
        if(h>*it)
            h=*it;
        it++;
    }
    return h;
}
int WindGauge::average(){
    deque<int>::iterator it=WindSpeedRecords.begin();
    int h=0;
    for(int i=0; i<WindSpeedRecords.size();i++){
        h=h+*it;
        it++;
    }
    return h/(WindSpeedRecords.size()-1);
}
void WindGauge::dump(){
    cout<<"Highest Wind speed: "<< this->highest()<<endl;
    cout<<"Lowest Wind speed: "<< this->lowest()<<endl;
    cout<<"Average Wind speed: "<< this->average()<<endl;
}
void WindGauge:: currentwindspeedrecords(){
    deque<int>::iterator it=WindSpeedRecords.begin();
    for(int i=0; i<WindSpeedRecords.size();i++){
        cout<<*it<<" ";
        it++;}
    cout<<endl;
}