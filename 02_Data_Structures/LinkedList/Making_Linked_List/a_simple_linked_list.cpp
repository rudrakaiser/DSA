#include <iostream>
using namespace std;

#define MAX 10000

int main () {
    int totalNodes;
    cout << "Total Nodes : ";
    cin >> totalNodes;

    int Data [MAX], Link [MAX];
    cout << "Data : ";
    for (int i = 0; i < totalNodes; i++) {
        cin >> Data [i];
    }
    cout << "Link : ";
    for (int i = 0; i < totalNodes; i++) {
        cin >> Link [i];
    }

    int start;
    cout << "Start Link : ";
    cin >> start;

    int nodeCount = 1;
    while (start != -1) {
        cout << "Node " << nodeCount++ << "  :  Data [" << Data [start] << "]   Link [" << Link [start] << "]" << endl;
        start = Link [start];
    }
    
    return 0;
}