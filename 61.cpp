class Solution {
public:
    ListNode* Find(ListNode* temp , int k){
        int cnt =1;
        while(temp!=NULL){
            if(cnt==k) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next = head;
        ListNode* newlastnode = Find(head,len-k);
        head= newlastnode->next;
        newlastnode->next =NULL;
        return head;
    }
};