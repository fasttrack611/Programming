#include<stdio.h> 

typedef (* pluginFunc)(void);

void PluginA(){ printf("in Module PluginA\n");}
void PluginB(){ printf("in Module PluginB\n");}

int main(){

	pluginFunc iplugin[]={ PluginA, PluginB};

	for(int i=0; i<2;i++){
	iplugin[i]();	
	}
	return 0;
}

