Node *rotate(Node *head, int k) {

    if(head == NULL or head->next == NULL or k==0) return head;

 

       Node* temp=head;

       int length_of_List = 1;

        while(temp->next != NULL){

           temp = temp->next;

           length_of_List++;

       }

 

        if(k%length_of_List == 0) return head;

 

        k = length_of_List-(k%length_of_List);

 

        temp->next = head;

       while(k--){ 

        temp = temp->next;

        }

        head = temp->next;

        temp->next = NULL;

        return head;

}
