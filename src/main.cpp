#include <stdio.h>
#include <iostream>

using namespace std;

int main () {

int sn,x,y,ask,count;
    int array[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},
                      {22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
    for(x=0; x<5; x++){
    for(y=0; y<7; y++){
    cout<<array[x][y]<<"\t";    
    }
    cout<<endl;
    }

b:
    if(ask==1){
    for(x=0; x<5; x++){
    for(y=0; y<7; y++){
    if(sn==array[x][y]){
    array[x][y]=0;
    count++;    
    }
    cout<<array[x][y]<< "\t";        
    }    
    cout<<endl;
    }
    }
    cout<< "Enter a seat number to reserve: ";
    cin>>sn;
    count=0;
    system("cls");

    for(x=0; x<5; x++){
    for(y=0; y<7; y++){
    if(sn==array[x][y]){
    array[x][y]=0;
    count++;    
    }
    cout<<array[x][y]<< "\t";        
    }    
    cout<<endl;
    }

    if(count==0){
    if((sn>0) && (sn<36)){
    cout<< "\nSeat is Taken\n";    
    }
    else{cout<< "\You entered an invalid seat number\n";    
    }
    }
    else{cout<< "\nSeat successfully reserved!\n";
    ask=1;
    }

system("pause");
system("cls");
goto b;
return EXIT_SUCCESS;
}