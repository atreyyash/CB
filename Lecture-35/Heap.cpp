#include<iostream>
#include<vector>
using namespace std;

class MinHeap
{
    vector<int> v;
    void heapify(int indx){
        int left = 2 * indx;
        int right = 2 * indx + 1;
        int temp = indx;
        
        if(left < v.size() && v[temp] > v[left]){
            temp = left;
        }

        if(right < v.size() && v[temp] > v[right]){
            temp = right;
        }
        if(temp != indx){
            swap(v[temp], v[indx]);
            heapify(temp);
        }
    }
public:
    MinHeap(){
        v.push_back(-1); // To block the zeroth index, since we aren't using it
    }

    void push(int d){
        v.push_back(d);
        int c = v.size() - 1;
        int p = c / 2;
        while(c > 1 && v[p] > v[c]){
            swap(v[p], v[c]);
            c = p;
            p = p / 2;
        }
    }

    void pop(){
        // if(v.size() == 1) return;
        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1);
    }

    int top(){
        return v[1];
    }

    bool empty(){
        return v.size() == 1;
    }
};


int main() {
    MinHeap mh;

    // Pushing order in heap doesn't matter. Elements will always come out depending upon the Heap we implemented i.e Min or Max
    mh.push(1);
    mh.push(6);
    mh.push(2);
    mh.push(5);
    mh.push(0);
    mh.push(3);
    mh.push(4);

    while(!mh.empty()){
        cout << mh.top() << " ";
        mh.pop();
    }

    return 0;
}