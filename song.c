#include <stdio.h>
#include <windows.h>
#include <string.h>

struct music {
    char name[10];
    double Hz;
    
};

int main() {
	
	
    struct music notes[] = {
        {"C", 1046.502},
        {"D", 1174.659},
        {"E", 1318.510},
        {"F", 1396.913},
        {"G", 1567.982},
        {"A", 1760.000},
        {"B", 1975.533}
    };

    char input[1000];
    double output[100];
    int a = 0, i = 0;
    int seconds; 
    double output_seconds[100];
    int q;
    printf("[1]새 곡 만들기\n[2]곡 추가하기\n");
    scanf("%d",&q);
        if(q==1){
               FILE* pFile=fopen("include.txt","w"); 
        }
        if(q==2){
                FILE* pFile=fopen("include.txt","a");
        }
while (1) {
	printf("연주하고 싶은 음과 길이를  입력해주세요!(시간은 1000~4000) (C,D,E,F,G,A,B)\n 다 입력하셨다면 play를 입력해주세요!\n");
	scanf("%s", input);
	
	if(strcmp(input, "play")==0){
			
		break;
	}
	fprintf(pFile, "%s\n", input);
	
	scanf(" %d",&seconds); 
	fprintf(pFile, "%d\n", seconds);


	
	for(i=0;i<7;i++){
		if(strcmp(input,notes[i].name)==0){
			output[a] = notes[i].Hz;
			output_seconds[a] = seconds;
			a++;
		}
	}
}
		
 printf("노래를 재생하겠습니다\n");
        Sleep(100); // millisecond delay
        for (i = 0; i < a; i++) {
            Beep((DWORD)output[i], (DWORD)output_seconds[i]); // Beep function with frequency and duration
            
        }
    
    return 0;
}
