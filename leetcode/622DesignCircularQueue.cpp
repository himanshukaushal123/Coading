class MyCircularQueue {
public:
    int *arr;
    int qfront;
    int qrear;
    int n;
    MyCircularQueue(int k) {
        n=k;
        arr=new int[k];
        qfront=-1;
        qrear=-1;
    }
    
    bool enQueue(int value) {
     if(qfront==0 && qrear==n-1 || (qrear==(qfront-1)%n)) return 0;
        //if 1st element
        if(qfront==-1){
            qfront=0;
            qrear=0;
        }
        //front is in between the array
        else if(qrear==n-1 && qfront!=0){
            qrear=0;
        }
        //normal condition
        else{
            qrear++;
        }
         arr[qrear]=value;
         return 1;
       
    }
    
    bool deQueue() {
        //to check is it empty
    if(qfront==-1) return 0;
        //if single element
        if(qfront ==qrear){
            qfront=-1;
            qrear=-1;
        }
        //if front is at end
        else if(qfront==n-1){
            qfront=0;
        }
        //normal condition
        else{
            qfront++;
        }
        return 1;
    }
    
    int Front() {
       if(qfront==-1) return -1;  
        return arr[qfront];
    }
    
    int Rear() {
      if(qfront==-1) return -1;
        return arr[qrear];
    }
    
    bool isEmpty() {
     if(qfront==-1) return 1;
        return 0;
    }
    
    bool isFull() {
     if(qfront==0 && qrear==n-1 || qrear==(qfront-1)%n)return 1;   
        return 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
