 typedef struct ListNode* NODE;
 NODE concatenate(NODE first1, NODE first2)
{
	NODE temp;
	temp=first1;
	if(first1==NULL && first2==NULL)
	{
		return NULL;
	}
	if(first1==NULL)
	{
		return first2;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=first2;
	return first1;
}
int countfun(NODE first)
{
    NODE temp=first;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
NODE sort(NODE first)
{
    NODE curr=first;
    int count=countfun(first);
    int temp,i,j;
    if (first==NULL)
    return NULL;
    if(first->next==NULL)
        return first;
    for(i=0;i<count-1;i++)
    {
        curr=first;
        for(j=0;j<count-i-1;j++)
        {
            if(curr->val>curr->next->val)
            {
                temp=curr->val;
                curr->val=curr->next->val;
                curr->next->val=temp;
            }
            curr=curr->next;
        }
    }
    return first;
    
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    list1=concatenate(list1,list2);
    list1=sort(list1);
    return list1;

}
