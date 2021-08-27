int modularNode(Node* head, int k)
{
	// Code here
	int count=1;
	int data=-1;
	while(head!=NULL)
	{
	    if(count%k==0)
	    {
	        data=head->data;
	    }
	    head=head->next;
	    count++;
	}
	return data;
}
