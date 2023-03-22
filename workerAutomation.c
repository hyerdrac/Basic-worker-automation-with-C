#include<stdio.h>

void workerInput(FILE* fptr){

    // Create varaiables for content
    char name[100];
    char surname[100];
    char statu[100];
    char salary[100];
    

    // Get user input
    printf("Name: \n");
    scanf("%s",name);

    printf("Surname: \n");
    scanf("%s",surname);

    printf("Statu: \n");
    scanf("%s",statu);

    printf("Salary: \n");
    scanf("%s",salary);

    // Open file in append mode.      YOU SHOULD HAVE TEXT FILE NAMED "workerList.txt" 
    fptr=fopen("workerList.txt","a");

    // Write datas to file
    fprintf(fptr,"--------------------------------------------------\n");
    fprintf(fptr,name);
    fprintf(fptr,"\n");
    fprintf(fptr,surname);
    fprintf(fptr,"\n");
    fprintf(fptr,statu);
    fprintf(fptr,"\n");
    fprintf(fptr,salary);
    fprintf(fptr,"\n--------------------------------------------------\n");

    // Close file
    fclose(fptr);
}

void workerList(FILE* fptr){
	
	// Create a varaiable for content
    char workerData[300];
	
    // Open file in reading mode
    fptr=fopen("workerList.txt","r");

    // Read the content and print it
    while(fgets(workerData,300,fptr)){
    	printf("%s",workerData);
	}

    // Close file
    fclose(fptr);
}

int main(){

    FILE* fptr;

    while(1){
        
        int choose;
        
        printf("--- Welcome to the ABC Working Automation ---\n");
        printf("1) Add new worker.\n");
        printf("2) Show worker list.\n");
        printf("3) Exit.\n");

        scanf("%d", &choose);

        if(choose==1){
            workerInput(fptr);
            break;
        }else if(choose==2){
            workerList(fptr);
            break;
        }else if(choose==3){
            break;
        }else{
            printf("Wrong Choice.");
            break;
        }

    }

    return 0;
}
