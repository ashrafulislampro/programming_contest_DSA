#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct data{
    char name[100];
    int height, weight;
    long long income;
};

bool compare(data a, data b){
    if(a.income == b.income){
        if(a.height == b.height){
            if(a.weight == b.weight){
                return strlen(a.name) < strlen(b.name);
            }else{
                return a.weight < b.weight;
            }
        }else{
            return a.height < b.height;
        }
    }else{
        return a.income > b.income;
    }
}

///// second example

struct Data{
    char name[100];
    int height, weight;
    long long income;



    bool operator<(const Data&b) const {
        if(income == b.income){
            if(height == b.height){
                if(weight == b.weight){
                    return strlen(name) < strlen(b.name);
                }else{
                    return weight < b.weight;
                }
            }else{
                return height > b.height;
            }
        }else{
            return income > b.income;
        }
    }
};