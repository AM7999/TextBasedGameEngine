#include <iostream>
#include <fstream>
#include "include/filesystem.h"
using namespace std;

#define clear() printf("\033[H\033[J")

// the kreen of engand

// a2luZGEgZmVlbCBiYWQgZm9yIGx1Y3k=

int main() {
    ifstream levelDat;
    levelDat.open("SceneData.psgd");

    // Very simple error handling if the scene data does not exist
    if(!levelDat.is_open()) {
        cout << "Could not open scene data!!!" << endl;
        cerr << "Please have the SceneCreator tool to generate a sample level" << endl;
        exit(1);
    }

    cout << "Scene Data Found! Starting Game.." << endl;

    cout << "Starting " <<  << endl;
}
