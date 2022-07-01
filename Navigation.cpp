#include <string>
#include <queue>
#include "Navigation.h"

using namespace std;


    Navigation::Navigation() {
        cout << "In constructor" << endl;
    }
    Navigation::~Navigation() {
        cout << "In destructor" << endl;
    }

    bool Navigation::readNetwork(string _mapName){
        cout << "reading the road network" << endl;

        return false;
    }


    queue<int> Navigation::computeShortestPath(int _startInd, int _endInd){
        queue<int> thePath;
        cout << "Not computing shortest path" << endl;
        return thePath;
    }

    void Navigation::printPath(queue<int> _path){
        cout << "I'm not printing stuff yet" << endl;
    }
