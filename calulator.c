#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void f()
{       clrscr();
	intgd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	setbkcolor(9);
	setcolor(6);
	settextstyle(2,0,8);
	outtextxy(5,10,"Welcome to Advance scientific calculator");
	getch();
	settextstyle(3,2,4);

	outtextxy(3,10,"By ASHRAF KHAN  ");
	settextstyle(4,1,6);
	getch();
		outtextxy(70,15,"And  ");
		getch();
		settextstyle(3,7,3);
			outtextxy(150,40," MOHD ABDUL RAHEEM   ");
			getch();
 }
void g()
{

	intgd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	setbkcolor(12);

	bar(-1000,110,10000,17);
	bar(20,20,300,500);
	textcolor(7);


}

double fact(int n)
{       double sum=1;
	for(inti=n;i>1;i--)
	{
	sum=sum*i;
	}
	return(sum);
}
void pow1()
{         doublex,y,s;    clrscr();
	cout<<"\n\tEnter x and y to calculate x power y";
	cin>>x>>y;
	cout<<"Result = "<<pow(x,y);
	getch();
}


voidnpr()
{    doubler,i,n,sum,q,t;
	clrscr();
	cout<<"\n\tEnter the value of n and r in nPr";
	cin>>n>>r;
	q=fact(n);
	t=fact(n-r);
	sum=q/t;;
	cout<<"\n\t"<<n<<"P"<<r<<"= "<<sum;
	getch();
}
voidncr()
{    doubler,i,n,sum,q,t;
	clrscr();
	cout<<"\n\tEnter the value of n and r in nCr";
	cin>>n>>r;
	q=fact(n);
	t=fact(n-r)*fact(r);
	sum=q/t;;
	cout<<"\n\t"<<n<<"C"<<r<<"= "<<sum;
	getch();

 }
voidmatadd()
{   	int x[100][100],y[100][100],z[100][100];
						int i2,j2,row,col;
						clrscr();
						cout<<"\n\tEnter the no of rows and columns\n";
						cin>>row>>col;
						cout<<"\n\tEnter "<<row*col<<"  elements of Matrix-1";
						for(i2=0;i2<row;i2++)
						{
						for(j2=0;j2<col;j2++)
						{
							cin>>x[i2][j2];
						}
							}
							cout<<"\n\tEnter "<<row*col<<"  elements of Matrix-2";
							for(i2=0;i2<row;i2++)
						      {
							for(j2=0;j2<col;j2++)
						{
								cin>>y[i2][j2];
						}
							}


						for(i2=0;i2<row;i2++)
						{
						for(j2=0;j2<col;j2++)
							{
						z[i2][j2]=x[i2][j2]+y[i2][j2];
						}
						}
						cout<<"\n\tElements of Matrix-1\n";
						for(i2=0;i2<row;i2++)
						{
							for(j2=0;j2<col;j2++)
						{
						cout<<x[i2][j2]<<"\t";
							}
							cout<<"\n";
							}
							cout<<"\n\tElements of Matrix-2\n";
							for(i2=0;i2<row;i2++)
							{
							for(j2=0;j2<col;j2++)
								{
							cout<<y[i2][j2]<<"\t";
								}
								cout<<"\n";
								}
							cout<<"\n\tAddition = \n";
							for(i2=0;i2<row;i2++)
							{
						for(j2=0;j2<col;j2++)
							{
							cout<<z[i2][j2]<<"\t";
								}
							cout<<"\n";
							}
}
void matdet3()
{
				double a[3][3],i,j;

				double determinant;



				cout<<"Enter the 9 elements of matrix: ";
				for(i=0;i<3;i++)
				for(j=0;j<3;j++)
				cin>>a[i][j];

				cout<<"\nThe matrix is\n";
				for(i=0;i<3;i++)
					  {
						cout<<"\n";
						for(j=0;j<3;j++)
					cout<<a[i][j]<<"\t";
						  }

						  determinant = a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);

							cout<<"\nDeterminant of 3X3 matrix: "<<determinant;
							getch();



 }
void matdet2()
 {double a1[2][2],i1,j1;
					double determinant1;

				cout<<"Enter the 4 elements of matrix: ";
					for(i1=0;i1<2;i1++)
				for(j1=0;j1<2;j1++)
					cin>>a1[i1][j1];

				cout<<"\nThe matrix is\n";
				for(i1=0;i1<2;i1++)
				  {
				cout<<"\n";
					for(j1=0;j1<2;j1++)
					cout<<a1[i1][j1]<<"\t";
					  }

				  determinant1 = a1[0][0]*a1[1][1] - a1[1][0]*a1[0][1];

			cout<<"\nDeterminant of 2X2 matrix : "<<determinant1;
			getch();
 }
voidmatmul()
 {
		double m, n, p, q, c, d, k, sum = 0;
int first[10][10], second[10][10], multiply[10][10];

printf("Enter the number of rows and columns of first matrix\n");
scanf("%d%d", &m, &n);
printf("Enter  %d elements of first matrix\n",m*n);

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf("%d", &first[c][d]);

printf("Enter the number of rows and columns of second matrix\n");
scanf("%d%d", &p, &q);

if (n != p)
printf("Matrices with entered orders can't be multiplied with each other.\n");
else
  {
printf("Enter %d elements of second matrix\n",p*q);

for (c = 0; c < p; c++)
for (d = 0; d < q; d++)
	scanf("%d", &second[c][d]);

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++) {
	for (k = 0; k < p; k++) {
	sum = sum + first[c][k]*second[k][d];
	}

	multiply[c][d] = sum;
	sum = 0;
      }
    }

printf("Product of entered matrices:-\n");

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++)
	printf("%d\t", multiply[c][d]);

printf("\n");
    }
  }            getch();
 }
voidmattra()
 {
		double array[10][10];
									clrscr();

									double i5, j5, m5, n5, sum5= 0, sum3 = 0, a5 = 0, normal;



										cout<<"Enter the order of the matrix\n";

										cin>>m5>>n5;


										cout<<"Enter the "<<m5*n5<<"   coefficients of the matrix \n";

											for (i5 = 0; i5 < m5; ++i5)

											    {

												for (j5 = 0; j5 < n5; ++j5)

											{

											cin>>array[i5][j5];

											   a5 = array[i5][j5] * array[i5][j5];

											    sum3 = sum3 + a5;

												}                                              }
												for(i5=0;i5<m5;i5++)
												     {
						for(j5=0;j5<n5;j5++)
							   {
							cout<<array[i5][j5]<<"\t";
								 }
								cout<<"\n";
								}

									normal = sqrt(sum3);

								cout<<"The normal of the given matrix is = "<<normal<<"\n\t";

							for (i5 = 0; i5 < m5; ++i5)

								 {

									sum5 = sum5 + array[i5][i5];

									   }

								cout<<"Trace of the matrix is = "<<sum5<<"\n";
	  }
voidar()
{     double a[100],n,i,sum=0;int r;
	clrscr();
	cout<<"\n\t1.Addition\n\t2.subtraction.\n\t3.multiplication\n\t";
	cout<<"\n\tEnter your choice";
	cin>>r;
	switch(r)
	{case 1:
		cout<<"\n\tEnter the numbers to be Added";
		cin>>n;
		cout<<"\n\tEnter "<<n<<" numbers";
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
		sum=sum+a[i];
		}
		cout<<"\n\tAddition = "<<sum;
		getch();
		break;
	case 2: cout<<"\n\tEnter the numbers to be subtracted :- ";
		cin>>n;
		cout<<"\n\tEnter "<<n<<" numbers:- ";
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
		sum=a[0];
		for(i=1;i<n;i++)
		{
		sum=sum-a[i];
		}
		cout<<"\n\tSubtraction = "<<sum;
		getch();
		break;
	case 3:
		cout<<"\n\tEnter the numbers to be multiplied :-";
		cin>>n;
		cout<<"\n\tEnter "<<n<<" numbers:- ";
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
		int x=1;
		for(i=0;i<n;i++)
		{
		  x=x*a[i];
		}
		cout<<"\n\tMultiplication = "<<x;
		getch();
		break;

	default:
	cout<<"\n\tInvalid choice";
	getch();
}
}


void  mat()
{       int x;
	clrscr();
	cout<<"\n\t1.Addition of two matrices\n\t2.Multiplication of two matrices\n\t3.finding det of 3x3 matrix\n\t4.finding det of 2x2 matrix\n\t5.finding normal and trace of a matrix";
	cout<<"\n\tEnter your choice:- ";
	cin>>x;
	switch(x)
	{
		case 1:clrscr();	matadd();
			break;
		case 2:clrscr(); matmul();
			break;
		case 3:clrscr();	matdet3();
			break;
		case 4:clrscr(); matdet2();
			break;
		case 5:clrscr(); mattra();
			break;
		default:clrscr(); cout<<"\n\tInvalid choice";
	}
  }
void trig()
  {	doublex,y,a,b,l,r;
	clrscr();
	x=3.14/180;
	cout<<"\n\tEnter the value of theta:-  ";
	cin>>a;
	b=x*a;
	l=sin(b);
	r=cos(b);
	cout<<"\n\tSin = "<<l<<"\n\tCos = "<<r;
	cout<<"\n\tTan = "<<l/r;
	getch();
  }

void total()
{ int s=1;   while(s==1)
  {	int k;
	clrscr();
	cout<<"\n\t1.Arithmetic operations\n\t2.Matrix operations\n\t3.Trignometric functions";
cout<<"\n\t4.Fact,pow\n\t5.nPr,nCr\n\t6.exit\n\t\n\n\nEnter your choice:- ";
	cin>>k;
	switch(k)
	{
		case 1:ar();
			break;
		case 2:mat();
			break;
		case 3: trig();
			break;
		case 4:int l; cout<<"\n\t1.fact\n\t2.pow:- ";
			cin>>l;

			switch(l)
			{	case 1:cout<<"\n\tEnter a number:- ";double l1,s;
					cin>>l1;
					s=fact(l1);
					cout<<"\n\tFactorial of "<<l1<<" is ="<<s;
					getch();
					break;
				case 2:pow1();
					getch();
					break;

				default:cout<<"\n\tInvalid choice";
					getch();
					break;
			}    break;
		case 5:cout<<"\n\t1.nPr\n\t2.nCr";int p;
			cout<<"\n\tEnterur choice:- ";
			cin>>p;
		switch(p)
		{
			case 1:npr();
				break;
			case 2:ncr();
				break;
			default:cout<<"\n\tInvalid choice";

		}break;
		case 6:exit(0);


		default:cout<<"\n\tInvalid choice";
		}
			getch();
		}}


		void final()


{         f();
textcolor(7);
	g();
	total();
}

