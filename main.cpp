#include <iostream>
typedef struct{



	int running;
} State;
using namespace std;
int main(){
#ifdef DEBUG
	cout<<"creating state struct."<<endl;
#endif
State st = { .running=1 };

#ifdef DEBUG
	cout<<"exiting."<<endl;
#endif

return 0;

}
