class MyCircularDeque {
public:
    int *arr;
    int front;
    int rear;
    int n;
    MyCircularDeque(int k) {
        n=k;
        arr=new int[k];
        front=rear=-1;
    }
    
    bool insertFront(int value) {
        if(isFull()) return 0;
        if(isEmpty()){
            front=0;
            rear=0;
        }else{
            front=(front-1+n)%n;;
        }
        arr[front]=value;
        return 1;
    }
    
    bool insertLast(int value) {
         if(isFull()) return 0;
         if(isEmpty()){
             rear=0;
             front=0;
         }else{
         rear=(rear+1)%n;
         }
        arr[rear]=value;
        return 1;
    }
    
    bool deleteFront() {
        if(isEmpty())return 0;
       if(front==rear){
            front=rear=-1;
        } else{
            front=(front+1)%n;
        }
        return 1;
    }
    
    bool deleteLast() {
         if(isEmpty())return 0;
        if(front==rear){
            front=rear=-1;
        }else {
            rear=(rear-1+n)%n;
        }
        return 1;
    }
    
    int getFront() {
       if(isEmpty()) return -1;
        return arr[front];
        
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return arr[rear]; 
    }
    
    bool isEmpty() {
        if(front==-1 && rear==-1) return 1;
        return 0;
    }
    
    bool isFull() {
        if((rear+1)%n==front) return 1;
        return 0;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
