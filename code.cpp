// Write your name
// Write your perm number
// Do not include a main function in this file
// Only submit this file
// See code.h for the descriptions of each problem
#include "code.h"


/* Problem 1: 10 pts */
 
TeaPacket* bestPacket(TeaPacket* head){
   if(list = NULL){
      return 0;
   }
   Node *greatNode;
   maxNode = list -> head;
	for(Node *p = list -> head -> next; p  != NULL; p = p -> next){
		if((*greatNode).data < (p -> data)){
			greatNode = p;
		}
	}
	return greatNode;
}




/* Problem 2: 10 points*/

Node* insert(Node* head, int value){
   Node* curr;
   if(*head == NULL || *head -> data >= newNode -> data){
      newNode -> next = *head;
      *head = newNode;
   }
   else{
      current = *head;
      while(curr -> next != NULL && curr -> next -> data < newNode -> data){
         curr = curr -> next;
      }
      newNode -> next = curr -> next;
      curr -> next = newNode;
      }
   return head;
}

/* Problem 3: 10 points*/

bool isBalanced(std::string s){
   int aCount = 0;
   int bCount = 0;
   for(char& c : s){
      if(c == 'A'){
         aCount++;
    }
    else if(c == 'B'){
         bCount++;
    }
    if(aCount == bCount){
      return true;
  }
}

/* Problem 4: 10 points*/

Person* priorityLinkedList(Person* head){
   Person* highs;
   Person* lows;
   Person* headHigh;
   Person* headLow;

   while(head){
      if(head->priority.compare("high")){
         if(!highs){
            highs = head;
            headHigh = head;
      }
      else{
         highs->next = head;
         highs = highs->next;
      }
      else{
         if(!lows){
            lows = head;
            headLow = head;
      }
      else{
         lows->next = head;
         lows = lows->next;
      }
   }
   head = head->next;
   }
   highs->next = headLow;
   lows->next = NULL;
   return headHigh;
   }
}
