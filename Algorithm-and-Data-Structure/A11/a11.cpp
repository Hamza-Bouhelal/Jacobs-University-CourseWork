#include <iostream>
using namespace std;

class node{
public:
    int key;
    int value;
    node(int key, int value){
    this->key = key;
    this->value = value;
    }
};

class Hashtable{
private:
    node **arr;
    int maxsize;
    int currentsize;
public:
    Hashtable(){
        maxsize = 701;
        currentsize = 0;
        arr = new node * [maxsize];
        for(int i =0;i<701;i++){
            arr[i] = NULL;
        }
    }
    int hashcode(int key){
        return key % maxsize;
    }

    void insertnode(int key, int value){
        int j;
        int i = 0;
        while(true){
            j = hashcode(key+i);
            if (arr[j] == NULL){
                arr[j] = new node(key, value);
                this->currentsize++;
                return ;
            }
            else
                i++;
            if (i == maxsize)
                break;
        }
        cout<<"overflow"<<endl;
    }
    int get(int key){
        int j;
        int i = 0;
        while(true){
            j = hashcode(key + i);
            if(arr[j]->key == key)
                return arr[j]->value;
            else
                i++;
            if(i == maxsize || arr[j] == NULL)
                break;
        }
        return -1;
    }

    bool isempty(){
        if(this->currentsize == 0)
           return true;
        return false;
    }
};
struct Activitiy
{
    int start, finish;
};

bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.start < s2.start);
}

void lateststarttime(Activitiy arr[], int n)
{
    sort(arr, arr + n, activityCompare);
    cout << "\nFollowing activities are selected\n";
    int i = n - 1;
    cout << "[" << arr[i].start << ", " << arr[i].finish << "], ";

    for (int j = n - 2; j >= 0; j--)
    {
        if (arr[j].finish <= arr[i].start)
        {
            cout << "[" << arr[j].start << ", " << arr[j].finish << "], ";
            i = j;
        }
    }
}
void main1()
{
    Hashtable hash;

    for (int i = 2; i < 20; i++)
    {
        hash.insertnode(i*i/2, i);
    }

    for (int i = 2; i < 20; i++)
    {
         cout << hash.get(i*i/2) << " ";
    }
    cout<<endl;
}/*
void main2()
{
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    lateststarttime(arr, n);
}*/
int main(){
    main1();
    return 0;
}
