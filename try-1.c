//
//#include<stdio.h>
//int main(void)
//{
//	printf("你还好吗???\n");
//	return 0;
//}
//




//#include<stdio.h>
//int main(void)
//{
//	int choice = 0;
//	printf("enter(1/2):\n");
//	scanf("%d",&choice);
//	if(choice == 1)
//{
//		printf("证明你是对的\n");
//	}
//	else
//	{
//		printf("你是错的\n");
//	}
//	
//	return 0;
//}






//#include<stdio.h>
//int main(void)
//{int line = 0;
//
//while(line<2000)
//{
//	printf("敲一行代码：%d\n",line);                          //while循环语句的使用
//    line++;
//}
//if(line>=2000)
//
//printf("好offer\n");                                     
//return 0;
//}

//
//
//#include<stdio.h>
//int main(void)
//{
//	char arr1[] = {'a','b','c',0};
//	printf("%s\n",arr1);
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	int X = 0;
//	scanf("%d",&X);
//	if(X<=3)
//	{   int Y = 3*X;
//		printf("%d\n",Y);
//	}                                                   //scanf库函数的使用
//	else
//	{   int Y = 4*X;
//		printf("%d\n",Y);
//	}
//	return 0;
//}



  
  
  
//#include<stdio.h>
//int main(void)
//{
//	int x ;
//	double y,c;
//	scanf("%d%lf",&x,&c);
//	if(x<100)
//	{
//	
//		y = 100*x*c;
//		printf("f(%d)=%f\n",x,y);
//	}                                         //if else语句的使用
//	else if(x == 100)
//	{
//		printf("gun\n");
//	}
//	else{
//		y = 0;
//		printf("%lf\n",y);
//	
//	}
//	
//	return 0;
//  }  
//  
  
  
  
  
  
//  
//#include<stdio.h>
//int Add(int x,int y)
//{
//	
//	int z = x + y;
//	return z;                           //Add函数的使用
//}
//int main(void)  
//  {
//  int sum;
//  int a,b;
//  scanf("%d%d",&a,&b);
//  sum = Add(a,b);
//  printf("sum=%d\n",sum);
//  return 0;
//  }
  	    
  	    
  	    
  	    
  	    
//#include<stdio.h>
//int main(void)
//{
//int x = 0;
//int n;
//scanf("%d",&x);
//x = x/10;
//n++;
//while(x>0)
//{   x = x/10;
//	n++;
//	
//}	
//printf("%d\n",n);
//return 0;
//}	    
  	    







//
//#include<stdio.h>
//int main(void)
//{
//	int  n, a, i;
//	
//	float c , x;
//	scanf("%d", &n);
//	x = 0;
//	a = 1;
//	c = 1;
//	i = 1;
//	while(i <= n)
//	{
//		x = x + c;
//		a = a + 3;
//		c = 1.0/a;
//		i++;
//		
//	}
//    printf("%f\n", x);
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int a , b;                         //条件操作符的使用
//	scanf("%d%d",&a,&b);
//	int max;
//	max = (a >= b? a:b);
//	printf("max = %d\n",max);
//	return 0;
//}
//  	










//
//#include<stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//}
//enum Sex
//{
//	a = 2,
//	b = 3,
//	c = 4,                                               //枚举enum与自定义函数Add的结合
//	d = 5
//};
//int main(void)
//{
//	int p = Add(c,d);
//	int i = Add(a,b);
//	printf ("i = %d,p = %d\n",i,p);
//	return 0;	
//}
//  	
  	
  	
  	

  
///*  
//#include<stdio.h>
//void se()
//{
//	int a = 2;
//	int b = 2;
//	int c = a + b;
//	printf("%d\n",c);
//}
//int main(void)
//{
//	int i =0,n;
//	scanf("%d",&n);
//	while(i <= n)
//	{
//		se();
//		i++;
//	}
//	return 0;
//}
//  */
  
  
  
  
  
//#include<stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)
//int main(void)
//{
//	int x,y;
//	scanf("%d%d",&x,&y);
//	int max = MAX(x,y);
//	printf("max = %d\n",max);
//	return 0;
//}
  
  
  
//#include<stdio.h>
//int Max(int a,int b)
//{
//	if(a>b)
//	{
//		return a;
//	}else{
//		return b;
//	}
//}
//int main(void)
//{
//	int a ,b;
//	scanf("%d%d",&a,&b);
//	int c ;
//	c = Max(a,b);
//	printf("%d\n",c);
//	return 0;
//  }  
  
  
  
  
  
//  
//#include<stdio.h>
//void test()
//{   static int a = 1;
//	a += 4;
//	printf("a = %d\n",a);
//}
//int main(void)                                           //static与void函数的使用
//{   typedef unsigned int u_int;
//	int i=0;
//    u_int m;
//    printf("entern:\n");
//    scanf("%d",&m);
//	while(i<m)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
  
  
  
  
  
  
//
//#include<stdio.h>
//struct book
//{
//	char name[20];
//	int price;
// } ;
//int main(void)                           //用构造体关键字
//{
//	struct book p={"c语言程序",55};
//	struct book* p1 = &p;
//	printf("书名：%s\n",p1->name );
//	printf("价格：%d元\n",p1->price ); 
//	return 0;
//}
//  
  
  
  















































