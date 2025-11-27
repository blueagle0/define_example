typedef struct{



	int running;
} State;
int main(){
State st = { .running=1 };

#ifdef DEBUG
return 0;
#endif

return 127;

}
