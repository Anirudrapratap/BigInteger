#include<stdio.h>
#include<stdlib.h>
#include"BigInteger.h"
struct BigInteger insert(struct BigInteger t,int val)
{
  struct node*temp=(struct node*)malloc(sizeof(struct node));
  temp->data=val;
  temp->next=NULL;
  if(t.head==NULL)
  {
    t.head=temp;
    return t;
  }
temp->next=t.head;
t.head=temp;
return t;
}

struct BigInteger insert2(struct BigInteger t,int val)
{
  struct node*temp=(struct node*)malloc(sizeof(struct node));
  temp->data=val;
  temp->next=NULL;
  if(t.head==NULL)
  {
    t.head=temp;
    return t;
  }
  struct node*itr=t.head;
  while(itr->next){
    itr=itr->next;
  }
itr->next=temp;
return t;
}


struct BigInteger initialize(char *s)
{
    struct BigInteger t;
    t.head=(struct node*)malloc(sizeof(struct node));
    t.head=NULL;
    t.l=0;
    int i=0,x;
    if(s[i]=='-')
    {
      t.sign=-1;
      i++;
    }
    else{
      t.sign=1;
    }
    while(s[i]!='\0')
    {
        x=s[i]- 48;
        t=insert(t,x);
        i++;
        t.l++;
    }
    return t;
}

struct BigInteger add2(struct BigInteger a,struct BigInteger b)
{
    struct BigInteger res;
    res.head=(struct node*)malloc(sizeof(struct node));
    res.head=NULL;
    struct node*p1=a.head;
    struct node*p2=b.head;
    int c=0,t=0,sum=0;
    if(p1==NULL && p2==NULL)
    {
      return res;   
    }
   while(p1&&p2)
   {// inserting the addition of both the linked list to another list
     sum= (p1->data + p2->data) + c;
     if( sum==10 || sum%10!=0  )
     {
        t=sum;
        sum=sum%10;
        c=t/10;
        res=insert2(res,sum);
     }
     else
     {
     res=insert2(res,sum);
     c=0;
     }
     p1=p1->next;
     p2=p2->next;
    }
    while(p1||p2)
    {
      if(p1)
      {
        sum=p1->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert2(res,sum);
         }
        else
         {
           res=insert2(res,sum);
           c=0;
         }
       p1=p1->next;
      }
      else
      {
        sum=p2->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert2(res,sum);
         }
        else
         {
           res=insert2(res,sum);
           c=0;
         }
        p2=p2->next;
      }
    } 
    if(c)
    {
        sum= p1?p1->data+c:p2->data+c;
        res=insert2(res,sum);
    }    
    return (res); 
}

struct BigInteger add3(struct BigInteger a,struct BigInteger b)
{
    struct BigInteger res;
    res.head=(struct node*)malloc(sizeof(struct node));
    res.head=NULL;
    struct node*p1=a.head;
    struct node*p2=b.head;
    int c=0,t=0,sum=0;
    if(p1==NULL && p2==NULL)
    {
      return res;   
    }
   while(p1&&p2)
   {// inserting the addition of both the linked list to another list
     sum= (p1->data + p2->data) + c;
     if( sum==10 || sum%10!=0  )
     {
        t=sum;
        sum=sum%10;
        c=t/10;
        res=insert2(res,sum);
     }
     else
     {
     res=insert2(res,sum);
     c=0;
     }
     p1=p1->next;
     p2=p2->next;
    }
    while(p1||p2)
    {
      if(p1)
      {
        sum=p1->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert2(res,sum);
         }
        else
         {
           res=insert2(res,sum);
           c=0;
         }
       p1=p1->next;
      }
      else
      {
        sum=p2->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert2(res,sum);
         }
        else
         {
           res=insert2(res,sum);
           c=0;
         }
        p2=p2->next;
      }
    } 
    if(c)
    {
        sum= p1?p1->data+c:p2->data+c;
        res=insert2(res,sum);
    }    
    return (res); 
}


struct BigInteger add(struct BigInteger a,struct BigInteger b)
{
    struct BigInteger res;
    res.head=(struct node*)malloc(sizeof(struct node));
    res.head=NULL;
    struct node*p1=a.head;
    struct node*p2=b.head;
    int c=0,t=0,sum=0;
    if(p1==NULL && p2==NULL)
    {
      return res;   
    }
  if(a.sign==b.sign){
    res.sign=a.sign;
   while(p1&&p2)
   {// inserting the addition of both the linked list to another list
     sum= (p1->data + p2->data) + c;
     if( sum==10 || sum%10!=0  )
     {
        t=sum;
        sum=sum%10;
        c=t/10;
        res=insert(res,sum);
     }
     else
     {
     res=insert(res,sum);
     c=0;
     }
     p1=p1->next;
     p2=p2->next;
    }
    while(p1||p2)
    {
      if(p1)
      {
        sum=p1->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert(res,sum);
         }
        else
         {
           res=insert(res,sum);
           c=0;
         }
       p1=p1->next;
      }
      else
      {
        sum=p2->data + c;
        if(sum/10!=0)
         {
           t=sum;
           sum=sum%10;
           c=t/10;
           res=insert(res,sum);
         }
        else
         {
           res=insert(res,sum);
           c=0;
         }
        p2=p2->next;
      }
    } 
    if(c)
    {
        sum= p1?p1->data+c:p2->data+c;
        res=insert(res,sum);
    }
    (res.head)->data=(res.head)->data * a.sign;     
  }
  else{
    res=sub(a,b);
  }
  res=truncate(res);
  return res;
}   


struct BigInteger sub(struct BigInteger a,struct BigInteger b)
{
struct BigInteger res;
res.head=(struct node*)malloc(sizeof(struct node));
res.head=NULL;
res.sign=1;
int bor=0,t=0,diff=0;
struct node*p1=a.head;
struct node*p2=b.head;
long long int p=check(p1);
long long int q=check(p2);
if(a.l<b.l || p<q)
   {
     struct node*temp=p1;
     p1=p2;
     p2=temp;
     res.sign=-1;
   }
   if(a.sign==b.sign){
    while (p1 || p2) {
        diff=bor;
        if (p1) {
            diff = p1->data-diff ;
        }

        if (p2) {
            diff =diff-p2->data;
        }

        if(diff<0)
        {
          p1->data+=10;
          diff=p1->data - p2->data - bor;
          bor=1;
        } 
        else{
          bor=0;
        }
        if(p1)
         p1=p1->next;
        if(p2)
         p2=p2->next;
        res=insert(res,diff);
    }
      (res.head)->data = (res.head)->data * res.sign;
      return res;
   }
      else{
        res=add3(a,b);
      }
      res=rev(res);
      (res.head)->data = (res.head)->data * a.sign;
    return res;
}

void display(struct BigInteger res)
{
   struct node*itr=res.head;
   res=truncate(res);
    if(itr==NULL)
      return;
    while(itr!=NULL)
    {
     printf("%d",itr->data);
     itr=itr->next;
    }
    return;
}

struct BigInteger div1(struct BigInteger a,struct BigInteger b)
{
  struct BigInteger res;
  res.head=(struct node*)malloc(sizeof(struct  node));
  res.head=NULL;
  long long int n1=0,n2=0,t1=0,t2=0;
  int r=0,s=0;
  struct node*temp1,*temp2=NULL,*temp3,*temp4=NULL;
  struct node*p1=a.head;
  struct node*p2=b.head;
  while(p1||p2)
  {
   if(p1)
   {
    temp1=p1->next;
    p1->next=temp2;
    temp2=p1;
    p1=temp1;
   }
   if(p2)
   {
    temp3=p2->next;
    p2->next=temp4;
    temp4=p2;
    p2=temp3;
   }
  }
  p1=temp2;
  p2=temp4;
  while(p1||p2)
  {
    if(p1){
    n1=(n1*10 +(p1->data));
    p1=p1->next;
    }
    if(p2){
    n2=(n2*10+(p2->data));
    p2=p2->next;
    }
  }
long long int y=n1/n2;
while(y)
{
  r=y%10;
  res=insert(res,r);
  y=y/10;
}
return res;
}

long long int check(struct node*p)
{
  long long int n1=0;
struct node*temp1,*temp2=NULL;
  while(p)
  {
    temp1=p->next;
    p->next=temp2;
    temp2=p;
    p=temp1;
   }
   p=temp2;
   struct node*itr=p;
   while(itr)
   {
    n1=(n1*10 +(itr->data));
    itr=itr->next;
    }
    temp2=NULL;
    while(p)
  {
    temp1=p->next;
    p->next=temp2;
    temp2=p;
    p=temp1;
   }
   p=temp2;
  return n1;
}
struct BigInteger mul(struct BigInteger a,struct BigInteger b)
{
  int n,count=0,cin,i=0;
  struct BigInteger res,res1,res2;
  res=initialize("0");
  res1=initialize("0");
  res2=initialize("0");
 struct node*temp,*p1,*p2;
 if(a.l > b.l)
 {
  p1=a.head;
  p2=b.head;
  temp=a.head;
 }
 else{
  p1=b.head;
  p2=a.head;
  temp=b.head;
 }
 while(p2)
 {
  res1= initialize("");
  res2= initialize("0");
  cin= 0;
  p1= temp;
  while(p1!=NULL)
  {
    n=p1->data*p2->data+cin;
    cin=n/10;
    if(cin)
     res1=insert(res1,n%10);
    else
     res1=insert(res1,n);
    p1=p1->next; 
  }
  for(i=0;i<count;i++){
    res1=insert2(res1,0);
  }
  if(cin>0){
    res1=insert(res1,cin);
  }
  res2=add(res1,res2);
  res=add2(res2,res);
  p2=p2->next;
  count++;
 }
 res=rev(res);
 return res;
}

struct BigInteger rev(struct BigInteger res)
{
  struct node*temp=NULL,*temp1;
  while(res.head)
  {
    temp1=(res.head)->next;
    (res.head)->next=temp;
    temp=res.head;
    res.head=temp1;
  }
  res.head=temp;
  return res;
}

struct BigInteger truncate(struct BigInteger res)
{
  struct node*temp;
  if(!(res.head))
   return res;
  while((res.head)->data==0 && (res.head)->next)
  {
    temp=res.head;
    res.head=(res.head)->next;
    temp=NULL;
    free(temp);
  }
  return res; 
}

int compare(struct BigInteger a,struct BigInteger b)
{
  int result;
  if(a.l>b.l)
    return 1;
  else if(a.l<b.l)
    return -1;
  else{
    int result=0;
    struct node*p=a.head,*t=b.head;
    while(p)
    {
      if(p->data>t->data)
        result=1;
      else if(p->data<t->data)
        result=-1;
      p=p->next;
      t=t->next;    
    }
  }
  return result;
}