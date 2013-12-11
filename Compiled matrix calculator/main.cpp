#include “stdafx.h”
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class mat
{
public:
double mata[20][3];
int lgth;
void dimmat()
{
cout << “enter length of matrix” << endl;
cin >> lgth;
//    cout << “” << endl;

for(int n=0;n<3;n++)
{
cout << “enter values for row” << n << ” , each followed by ‘enter’:” << endl;
for(int m=0;m<lgth;m++)
{
cin >> mata[n][m];
}
}
}

void display()
{
int rcount = 0;
int ccount = 0;

while(rcount < 3)
{
while(ccount < lgth)
{
//cout << “matrix:”<<endl;
cout << mata[rcount][ccount] << ” , “;

ccount++;
}
cout << ‘\n’;
ccount=0;
rcount++;
}
}

/*void rotate()
{
mat mat2;
mat2.dimmat();
mat mat3;
mat3 = mult(this, mat2);
}*/
};

mat mult(mat A, mat B)
{
cout << “multiply started” << endl;

//char pause;

mat ans;
ans.lgth=B.lgth;

int rcount = 0;
int ccount = 0;
int c2 = 0;

while(rcount < 3)
{
//cout << “row: ” << rcount << ” started” << endl;
while(ccount < A.lgth)
{
//cout << “collum: ” << ccount << “started” << endl;

ans.mata[rcount][ccount] = 0;
while(c2 < 3)
{
ans.mata[rcount][ccount] = ans.mata[rcount][ccount] + (A.mata[rcount][c2] * B.mata[c2][ccount]);
c2++;
}
//cout << “value is: ” << ans.mata[rcount][ccount] << endl;
//cin >> pause;
c2=0;
ccount++;
}
ccount=0;
rcount++;
}

int smelly;
ans.display();
return ans;
}

mat rotate(mat A, int angle)
{
mat T;
T.lgth = 3;

mat matans;

//creat transformation matrix
double pi = 3.14159265;
double theta = (angle*pi)/180;
T.mata[0][0] = cos(theta);
T.mata[0][1] = 0 – sin(theta);
T.mata[0][2] = 0;

T.mata[1][0] = sin(theta);
T.mata[1][1] = cos(theta);
T.mata[1][2] = 0;

T.mata[2][0] = 0;
T.mata[2][1] = 0;
T.mata[2][2] = 1;

matans = mult(T, A);
return matans;
}

mat reflect(mat A, int angle)
{
mat matans;
mat T;
T.lgth = 3;
//creat transformation matrix
double pi = 3.14159265;
double theta = (angle*pi)/180;
T.mata[0][0] = cos(2 * theta);
T.mata[0][1] = sin(2 * theta);
T.mata[0][2] = 0;

T.mata[1][0] = sin(2*theta);
T.mata[1][1] = 0 – cos(2*theta);
T.mata[1][2] = 0;

T.mata[2][0] = 0;
T.mata[2][1] = 0;
T.mata[2][2] = 1;

matans = mult(T, A);
return matans;
}

void input()
{
string dim = “dim”;

string com;
int end = 0;

mat matans;
int matcount = 0;
mat mats[11];
while(end == 0)
{
cout << “enter command>”;
getline(cin, com);

if(dim == com)
{
cout << “matrix” << matcount <<endl;
mats[matcount].dimmat();
matcount++;
}
if(com == “rot”)
{
cout << “which matirx?” <<endl;
int matnum;
cin >> matnum;
cout << “what angle (degrees)” << endl;
int rotang;
cin >> rotang;
matans = rotate(mats[matnum], rotang);
mats[10] = matans;
}
if(com == “rlt”)
{
cout << “which matirx?” <<endl;
int matnum;
cin >> matnum;
cout << “what angle (degrees)” << endl;
int rotang;
cin >> rotang;
matans = reflect(mats[matnum], rotang);
mats[10] = matans;
}
if(com == “ans”)
{
matans.display();
}
if(com == “mlt”)
{
cout << “first matrix” << endl;
int mat1;
cin >> mat1;
cout << “second matirx” << endl;
int mat2;
cin >> mat2;

matans = mult(mats[mat1], mats[mat2]);
mats[10] = matans;
}
if(com == “dsp”)
{
cout << “which matirx?” << endl;
int matdsp;
cin >> matdsp;
mats[matdsp].display();
}
if(com == “let”)
{
cout << “which matirx?” << endl;
int mat1;
cin >> mat1;
int mat2;
cout <<”eaqual to (10 is answer matrix)” << endl;
cin >> mat2;
mats[mat1] = mats[mat2];
}
if(com == “help”)
{
cout <<”Davids Woodfords matrix calculator” << endl;
cout << “takes the following commands” << endl;
cout <<” ‘dim’    ::  allows you to dfine a matrix”<< endl;
cout <<” ‘rot’    :: roates a matrix through an agnle” << endl;
cout <<” ‘rlt’    :: reflects a matrix through the line y=tan(a) where a is given” << endl;
cout <<” ‘ans’    :: displays the answer to the last calculation” << endl;
cout <<” ‘mlt’    :: lets u multiply 2 matricies together” << endl;
cout <<” ‘dsp’    :: displays a matrix specified”<<endl;
cout <<” ‘let’    :: allows u to assign one matrix the value of another, eg answer”<<endl;
cout<<”===================================================================”<<endl;
cout <<”matricies are sotred in an array of 10, with numerical values starting at 0?<<endl;
cout<<”matrix 10 is the answer matrix”<<endl;
cout<<”any parameters will be asked for wen needed”<<endl;

}
}

}

int main()
{
cout << “Welcome to David Woodfords Matrix calculator” << endl << endl;
cout<<”type ‘help’ for a list of commands” <<endl;
//    mat mata;
//    mata.dimmat();

/*    mat matb;
matb.dimmat();

mat matans;
matans = mult(mata, matb);
//    mata.display();
*/
//rotate(mata, 30);
input();
return 0;
}
