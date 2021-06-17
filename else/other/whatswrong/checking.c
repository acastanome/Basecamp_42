int a;
int b;
int c;
int *p1;
int *p2;

a = 3;
b = 4;
c = 5;
p1 = &a; //		p1 returns address of a.		*p1 returns 3.
p2 = p1; //		p2 returns address of a?		*p2 returns value of a?
//				p2 returns address of p1.??		*p2 returns address of a??
//				?? p2 is pointer to  int, so can this be done?
p2 = *p1; //	ps returns address of a.		*p2 returns 

int ** p3;

p3 = p2; //		p3 returns address of p2
