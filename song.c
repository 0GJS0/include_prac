#include <stdio.h>
#include <windows.h>
#include <string.h>

struct music {
    char name[10];
    double Hz;
};

int main() {
    FILE* pFile = fopen("song.txt", "w");    
    fclose(pFile);
    struct music notes[] = {
        {"C", 1046.502},
        {"D", 1108.731},
        {"E", 1318.510},
        {"F", 1396.913},
        {"G", 1567.982},
        {"A", 1760.000},
        {"B", 1975.533}
    };

    char input;
    float input2;
    double output[100000];
    int a = 0, i = 0;

while (1) {
	printf("연주하고 싶은 음을 입력해주세요! (C,D,E,F,G,A,B)\n");
	scanf("%c", input);
	printf("박자를 입력해주세요!(4분음표가 1\n");
	scanf("%c", input);
	
	if(strcmp(input,"play")==0){
		break;
	}
	fprintf(pFile, "%c %f",&input,%input2);  
}
		
 /*printf("노래를 재생하겠습니다\n");
        Sleep(100); // millisecond delay
        for (i = 0; i < a; i++) {
            Beep((DWORD)output[i], 500); // Beep function with frequency and duration
            
        }
    
    return 0;*/
}

