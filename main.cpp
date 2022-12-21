#include <iostream>
using namespace std;

void accept(){
	cout<<"accepted"<<endl;

}

void reject(){
	cout<<"rejected"<<endl;
	exit(1);
}

void S();
void A();
void B();
void D();

////////////////

char inp;

int main(){
  cin >> inp;
  S();
  if(inp == '#') accept();
  else reject();
}

void S(){
  if(inp == 'a'||
  inp == 'b' ||
  inp == 'd' ||
  inp == '#'){
    A();
    B();
    D();
  }else {
    reject();
  }
}


void A(){
  if(inp == 'a'){
    cin >> inp;
    A();
  }else if(inp == 'b' || inp == 'd' || inp == '#'){
    //empty
  }else{
    reject();
  }
}

void B(){
  if(inp == 'b'){
    cin >> inp;
    B();
  }else if(inp == 'd' || inp == '#'){
    //empty
  }else{
    reject();
  }
}

void D(){
  if(inp == 'd'){
    cin >> inp;
    D();
  }else if(inp == '#'){
    // empty
  }else{
    reject();
  }
}
