#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

typedef void(*pt2function)(string whatToSay);

void sayHello(string whatToSay) {cout << whatToSay << endl;}
void sayGoodBye(string whatToSay) {cout << whatToSay << endl;}
void ask(string whatToSay) {cout << whatToSay << endl;}

//void (*GetPtr1(const char talk)(string));
pt2function GetPtr2(const char talk);

void Return_A_Function_Pointer();
void communicate(void (*pt2function)(string), string whatToSay)
                      {(*pt2function)(whatToSay);}

int main(int argc, char *argv[])
{
    
    communicate(&sayHello, "hello world, have you missed me?");
    communicate(&ask, "how are you these days?");
    communicate((&sayGoodBye), "that's it for now i gotta go!");  
    
    cout << endl << "====================================================" << endl;
    
    Return_A_Function_Pointer();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
void (*GetPtr1(const char talk)(string)){
     switch(talk){
             default:{
                     return &sayHello;
                     break;
                     }
             case('g'):{
                     return &sayGoodBye;
                     break;
                     }
             case('a'):{
                     return &ask;
                     break;
                     }
     }
}
*/


pt2function GetPtr2(const char talk){
            
            switch(talk){
                    default:{
                             return &sayHello;
                             break;
                             }
                    case('g'):{
                             return &sayGoodBye;
                             break;
                             }
                    case('a'):{
                             return &ask;
                             break;
                             }
            }
}



void Return_A_Function_Pointer()
{
     cout << "Executing 'Return_A_Function_Pointer'" << endl;
     
     // the function pointer decleration:
     void (*pt2function_h)(string whatToSay) = NULL;
     void (*pt2function_a)(string whatToSay) = NULL;
     void (*pt2function_g)(string whatToSay) = NULL;
     
     
     pt2function_h = GetPtr2('h');
     pt2function_a = GetPtr2('a');
     pt2function_g = GetPtr2('g');
     
     (*pt2function_h)("hello world");
     (*pt2function_a)("how are you today?");
     (*pt2function_g)("i gotta go, so good fucking bye.");
     
}
            

              
                      
                         
                  
     
