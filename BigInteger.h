struct node
{
    int data;
    struct node*next;
};

struct BigInteger
{
    struct node*head;
    int l,sign;
};
struct BigInteger initialize(char *s);
struct BigInteger add(struct BigInteger a,struct BigInteger b);
struct BigInteger sub(struct BigInteger a,struct BigInteger b);
struct BigInteger insert(struct BigInteger t,int val);
void display(struct BigInteger res);
struct BigInteger div1(struct BigInteger a,struct BigInteger b);
long long int check(struct node*p);
struct BigInteger  insert2(struct BigInteger t,int val);
struct BigInteger add2(struct BigInteger a,struct BigInteger b);
struct BigInteger mul(struct BigInteger a,struct BigInteger b);
struct BigInteger rev(struct BigInteger res);
struct BigInteger truncate(struct BigInteger res);
int compare(struct BigInteger a,struct BigInteger b);
struct BigInteger add3(struct BigInteger a,struct BigInteger b);