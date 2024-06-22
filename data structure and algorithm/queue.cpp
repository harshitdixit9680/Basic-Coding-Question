#include<iostream>
using namespace std;
class queue{
	public:
		int size;
		int f;
		int r;
		int * arr;

};
int isempty(queue*q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}

int isfull(queue*q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int dequeue(queue*q){
		int a = -1;
		if(isempty(q)){
			cout<<"the queue is underflow";
		}
		else{
			q->f++;
			a=q->arr[q->f];
				
		}
	return a;
	}


	void enqueue(queue*q,int val){
		if(isfull(q)){
			cout<<"the queue is full";
		}
		else{
			q->r++;
			q->arr[q->r]=val;
			
		}
	}



int main(){
	queue q;
	q.size =8;
	q.r=q.f=-1; 
	q.arr = (int*) new int(q.size*sizeof(int));
     enqueue(&q,12);
     enqueue(&q,22);
     enqueue(&q,32);
     enqueue(&q,52);
     enqueue(&q,42);
     enqueue(&q,62);
     enqueue(&q,72);
     enqueue(&q,82);
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     cout<<"dequeueing element"<<dequeue(&q)<<endl;
     if(isempty(&q)){
		cout<<"queue is empty"<<endl;
	}
	if(isfull(&q)){
		cout<<"queue is full"<<endl;
	}
		return 0;
}
