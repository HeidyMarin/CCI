#include <stdio.h>
#include <stdlib.h>

struct nodo{
	
	int val;
	struct nodo *next;
	
};

struct nodo *crearlista1(int a){
	
	struct nodo *head, *prev, *cur;
	int i;
	if(a != 0){
		head = malloc(sizeof(struct nodo));
		head -> val = 1;
		prev = head;
		
		for(i = 2; i <= a; i++){
			
			cur = malloc (sizeof(struct nodo));
			cur -> val = i;
			prev -> next = cur;
			prev = cur;
			
		}
		
		prev -> next = NULL;
		return head;
		
	}
	
	else
	   return 0;
	
}

struct nodo *crearlista2(int a){
	
	struct nodo *head, *prev, *cur;
	int i;
	if(a != 0){
		head = malloc(sizeof(struct nodo));
		head -> val = a;
		prev = head;
		
		for(i = a-1; i >= 1; i--){
			
			cur = malloc (sizeof(struct nodo));
			cur -> val = i;
			prev -> next = cur;
			prev = cur;
			
		}
		
		prev -> next = NULL;
		return head;
		
	}
	
	else
	   return 0;
}


void print(struct nodo *head){
	
	struct nodo *t;
	t = head;
	while (t != NULL){
		
		printf("%d\n", t -> val);
		t = t -> next;
		
	}
	
}

void borrarnodo(struct nodo *head, int key){
	
	struct nodo *prev, *cur;
	
	prev = head;
	cur = head -> next;
	while (cur != NULL){
		
		if(cur -> val == key){
			
			prev -> next = cur -> next;
			free(cur);
			break;
			
		}
		
		prev = cur;
		cur = cur -> next;
		
	}
	
}

int len(struct nodo *head){
	
	struct nodo *cur;
	int i = 0;
	
	cur = head;
	
	while (cur != NULL){
		++i;
		cur = cur -> next;
	}
	
	return i;
}

struct nodo *insertval(struct nodo *head, int value){
	
	struct nodo *newnodo = malloc(sizeof(struct nodo));
	newnodo -> val = value;
	newnodo -> next = head;
	return newnodo;
	
}

void insertmitad(struct nodo *head, int value){
	
	struct nodo *newnodo, *cur;
	int i;
	
	newnodo = malloc(sizeof(struct nodo));
	newnodo -> val = value;
	cur = head;
	
	for(i = 2; i <= (len(head)/2); i++)
		cur = cur -> next;
	
	newnodo -> next = cur -> next; 
	cur -> next = newnodo;
	
}

void ordenarlist(struct nodo *head){
	
	struct nodo *cur, *next;
	int size = len(head);
	int i, j, value;
	
	for(i = 0; i < len(head); i++, size-- ){
		cur = head ;
		next = head -> next ;
		
		for(j = 1; j < size; j++ ){ 
			
			if(cur -> val > next -> val){
				value = cur -> val ;
				cur -> val = next -> val;
				next -> val = value ;
			}
			
			cur = cur -> next;
			next = next -> next;    
			
		}
	}   
}

void concatenatelist(struct nodo *head1, struct nodo *head2){
	
	struct nodo *cur1, *cur2;
	int i;
	
	cur1 = head1;
	cur2 = head2;
	
	for(i = 2; i <= len(head1); i++)
		cur1 = cur1 -> next;
	
	cur1 -> next = cur2;
	
}

int main(){
	
	struct nodo *nodo1 = crearlista1(8);
	struct nodo *nodo2 = crearlista2(7);
	
	/*borrarnodo(nodo1, 3);*/
	/*nodo1 = insertval(nodo1, 3);*/
	/*insertmitad(nodo1, 3);*/
	/*ordenarlist(nodo2);*/
	/*concatenatelist(nodo1, nodo2);*/
	/*print(nodo1);*/
	print(nodo2);
	
	return 0;
}
