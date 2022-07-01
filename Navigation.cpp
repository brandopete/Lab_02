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

        priority_queue<Node, vector<Node>, Node> myPriorityQueue;
        //Create Node n, with n.cost = 0 and n.path = <A> (see programming hint 1)
        Node n;
        n.cost = 0;
        n.path.push(_startInd);

        //(3) Insert Node n into PQ
        myPriorityQueue.push(n);

        //(4) Loop through the path
        Node last;
        Node curr;
        while(n.path.front() != _endInd){
            curr = myPriorityQueue.top();
            myPriorityQueue.pop();
            last = n;
            for(int j = 0; Cost(last,j) > 0){
                Node nn;
                nn.cost = curr.cost + (Cost(last,j) > 0);
                myPriorityQueue.push(nn);

            }
            n.path.back();

        }


        cout << "Not computing shortest path" << endl;
        return thePath;
    }

    void Navigation::printPath(queue<int> _path){
        cout << "I'm not printing stuff yet" << endl;
    }
