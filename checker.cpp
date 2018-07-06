#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main(){
	
	ofstream fout;
	fout.open("checker.txt", ios::out);
	
   char line[52];
   
   cout<<"Enter the line you want to check about(max 50):  ";
   gets(line);
  
for(int i=0;line[i]!='\0';i++)
      fout.put(line[i]);
      
	fout.close();

     ifstream fin;
     fin.open("checker.txt", ios::in);
   

	  
 	   int ctr1=0;
	   int ctr2=0;
	   int ctr3=0;
    
       char ch[52];

	  for(int i=0;ch[i]!=0;i++){
	  	
	  	    fin.getline(ch,52);
	  	 
	  	if(isalpha(line[i])){
	  		ctr1++;
	  		 }
	  	if(isdigit(line[i])){
	  		ctr2++;
		  }	 
	  	if(isspace(line[i])){
	  		ctr3++;
		  }	 
		  
	  cout<<ctr1<<ctr2<<ctr3;
	  
	  fin.close();
	  
	   return 0; 
	
}

}
