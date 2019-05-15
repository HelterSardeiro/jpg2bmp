#include <stdio.h>
#include <string.h>
 main() {
    // caminhos no formato do sistema operacional Windows
    const char* caminho = "C:\\Users\\nome-user\\Desktop\\img\\";
    const char* caminho_novo = "C:\\Users\\nome-user\\Desktop\\img\\bmp\\";

    int i = 1;
    while(true){
	
	char caminhonovo_str[50];
	
	char convv[50]; 
    sprintf(convv, "%i", i);
	
	strcpy(caminhonovo_str, caminho_novo);
	strcat(convv, ".bmp");
	strcat(caminhonovo_str, convv);
	
	FILE *fp;
	fp=fopen(caminhonovo_str,"r");
	if(fp){
	    fclose(fp);
	    i++;
	}else{
	    break;
	}
	
   
	}
	while(true){

	char caminho_str[50];
	
	char conv[50]; 
    sprintf(conv, "%i", i);
    
	strcpy(caminho_str, caminho);
	strcat(conv, ".jpg");
	strcat(caminho_str, conv);
	
	
	char caminhonovo_str[50];
	
	char convv[50]; 
    sprintf(convv, "%i", i);
	
	strcpy(caminhonovo_str, caminho_novo);
	strcat(convv, ".bmp");
	strcat(caminhonovo_str, convv);
    if(rename(caminho_str, caminhonovo_str) == 0) {
        printf("Arquivo %s convertido para %s com sucesso!\n", caminho_str, caminhonovo_str);
        i++;
    }
    
}

    return 0;
}
