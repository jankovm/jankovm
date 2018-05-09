int unosElementa(TCvor **phead, int el, int pos){
TCvor *temp;
int brojac = 1;
int i;

temp=*phead;
while(temp!=NULL){
         brojac++;
         temp = temp -> next;
}
if(pos<1 || pos>brojac+1)
    return 0;
else{
        TCvor *novi;
novi = (TCvor *)malloc(sizeof(TCvor));
if(novi == NULL)
    return 0;

novi -> info=el;
if(pos==1){
    novi->next=*phead;
    *phead=novi;
}
return 1;
}
int brisiElement(TCvor **phead, int pos)
{
    TCvor *temp;
    TCvor *del;
    int brojac=1;
    int i;

    if(*phead == NULL)
        return 0;

    temp=*phead;
    while(temp!=NULL){
        brojac++;
        temp=temp->next;
    }

    if(pos<1 || pos>brojac)
        return 0;
    else{
        if(pos==1){
            del=*phead;
            (*phead)=(*phead)->next;
            free(del);
        }
        else{
            temp*=phead;
            for(i=1;i<pos-1;i++)
                temp=temp->next;
                temp->next=del->next;
                free(del);
        }
        return 1;
    }
}

int ispisiListu(TCvor *head)
{
    TCvor *temp=head;
    if(head==NULL)
        return 0;
    while(temp!=NULL){
        printf("%d", temp->info);
        temp=temp->next;
    }
    return 1;
}


