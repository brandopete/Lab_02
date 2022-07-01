#include <string>
#include <sstream>
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
        istringstream ifs;
        theCosts.empty();
        int num;
        ifs >> _mapName;
        num = stoi(ifs.str());
        for(int i = 0; i < num; ++i){
            for(int j = 0; j < num; ++j){
                ifs >> _mapName;
                theCosts[i][stoi(ifs.str())];
            }
        }
        if(!theCosts.empty()){
            return true;
        }
        else{
            return false;
        }

    }


    queue<int> Navigation::computeShortestPath(int _startInd, int _endInd){
        queue<int> thePath;

        priority_queue<Node, vector<Node>, Node> myPriorityQueue;
        //Create Node n, with n.cost = 0 and n.path = <A> (see programming hint 1)
        Node n;
        n.cost = 0;
        n.path.push(_startInd);

        //(3) Insert Node n into PQ
        myPriorityQueue.push(n);

        //(4) Loop through the path
        int last;
        Node curr;
        while(myPriorityQueue.top().path.back() != _endInd){
            curr = myPriorityQueue.top();
            myPriorityQueue.pop();
            last = curr.path.back();
            for(int j = 0; j < myPriorityQueue.size(); ++j){
                if(theCosts[last][j] > 0) {
                    Node nn;
                    nn.cost = curr.cost + (theCosts[last][j]);
                    curr.path.push(j);
                    nn.path = curr.path;
                    myPriorityQueue.push(nn);
                }
            }
        }
        thePath = myPriorityQueue.top().path;
        //cout << "Not computing shortest path" << endl;
        return thePath;
    }

    void Navigation::printPath(queue<int> _path){
        //cout << "I'm not printing stuff yet" << endl;
        for(int i = 0; i < _path.size(); ++i){
            cout << _path.front();
            _path.pop();
        }
    }
