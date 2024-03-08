#include <iostream>
#include <fstream>
#include "include/filesystem.h"
using namespace std;

#define clear() printf("\033[H\033[J")

int main() {
    ifstream sceneCreatorDataRead;
    sceneCreatorDataRead.open("SceneData.psgd");

    if(!sceneCreatorDataRead.is_open()) {
        cout << "Could not open scene data!!!" << endl;
        cout << "Do you want to create the scene data?" << endl;
        int option;
        cin >> option;
        if(option == 1) {
            ofstream userCreatedSceneData;
            userCreatedSceneData.open("SceneData.psgd");
        } else if(option == 2) {
            clear();
            cerr << "Could not open scene data!!!" << endl;
        } else {
            cout << "That is not an option" << endl;
        }
    }

    int colorHex;
    int boardWidth;
    int boardHeight;
    string gameName;
    string description;
    cout << "Please enter a Game Name: "; cin >> gameName;
    cout << "Please enter a Game Description (type null for none): "; cin >> description;
    cout << "Please choose a border color as denoted in hexadecimal: "; cin >> colorHex;
    cout << "Please enter a border width: "; cin >> boardWidth;
    cout << "Please enter a border height: "; cin >> boardHeight;

}
