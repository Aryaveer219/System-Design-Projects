# include<bits/stdc++.h>
using namespace std;
class LeakyBucket{
    private:
    queue<int>bucket;
    int capacity;
    int leakRate;
    public:
    LeakyBucket(int cap , int rate){
        capacity=cap;
        leakRate=rate;

    }
    void addRequest(int request){
        if(bucket.size()<capacity){
            bucket.push(request);
            cout<<"Request"<<request<<"accepted"<<endl;
        }
        else{
            cout<<"Request"<<request<<"rejected(bucket Full)"<<endl;
        }
    }
    void processRequests(){
        cout<<"\n Processing requests:\n";
        int count=leakRate;
        while(!bucket.empty() && count>0){
            cout<<"Request"<<bucket.front()<<"processed"<<endl;
            bucket.pop();
            count--;
        }
    }
    void display(){
        queue<int>temp=bucket;
        cout<<"\nRemaining requests:";
         while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << "\n";

    }
};
int main() {

    LeakyBucket lb(5, 2);

    lb.addRequest(1);
    lb.addRequest(2);
    lb.addRequest(3);
    lb.addRequest(4);
    lb.addRequest(5);

    lb.addRequest(6);

    lb.display();

    lb.processRequests();

    lb.display();

    lb.addRequest(7);
    lb.addRequest(8);

    lb.display();

    return 0;
}