class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        stack<int> st;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt>=left && cnt<=right){
                st.push(temp->val);
            }
            temp=temp->next;
        }
        temp = head;
        cnt = 0;
        while(temp!=NULL){
            cnt++;
            if(cnt>=left && cnt<=right){
                temp->val = st.top();
                st.pop();
            }
            temp = temp->next;
        }
        return head;
    }
};