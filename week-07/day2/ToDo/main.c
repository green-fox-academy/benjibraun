#include <stdio.h>
#include <stdlib.h>
/*
Command Line Todo application
=============================

Command line arguments:
 -l   Lists all the tasks
 -a   Adds a new task
 -r   Removes an task
 -c   Completes an task
 */
void usage(){
    system("cls");
    printf("Command Line Todo application\n");
    printf("=============================\n");
    printf("\n");
    printf(" -l\tLists all the tasks\n");
    printf(" -a\tAdds a new task\n");
    printf(" -r\tRemoves an task\n");
    printf(" -c\tCompletes an task\n");
}
void list_tasks()
{
    char* line[100];
    char* info[100];
    char done;
    int lines=0;
    int todo=0;
    FILE *fp=fopen("todo.txt","r");
    while(!feof(fp)){
        if (lines%2==0){
            fgets(info,100,fp);
            done=info[11];
        }
        else{
            fgets(line,100,fp);
            ++todo;
            printf("%d [%c] %s",todo,done,line);

        }
        ++lines;
    }
    printf("No todos for today! :)");
}
int generateid()
{
    int id  = 0;
    char info[50]="nincs";
    FILE *fp=fopen("todo.txt","r");
    if (fp==NULL){

        id=1;
        return id;
    }
    while(!feof(fp)){
        fgets(info,50,fp);
        if (info[0]=='I'&&info[1]=='D'){
            printf("id = %d \n",id);
            id=(int)info[3] - (int)'0';
            printf("id = %d \n",id);
        }
    }
    printf("%s az",id);
    return (int)id+1;
}
void add_tasks()
{
    //char todo[50]= {gets(todo)};
    char todo[50];


    gets(todo);
    int id=generateid();

    FILE *fp=fopen("todo.txt","a");
    fprintf(fp,"ID=%d done=0; \n",id);
    fprintf(fp,"\t%s\n",todo);
    fclose(fp);
    free(id);

}
void remove_tasks()
{
    printf("Removes an task");
}
void completes_tasks()
{
    printf("completes an task");
}
void select(){
    char command [3];
    gets(command);

    if (command[0]=='-'&&command[1]=='l'){
        list_tasks();
    }
    else if (command[0]=='-'&&command[1]=='a'){

        add_tasks();
    }
    else if (command[0]=='-'&&command[1]=='r'){
        remove_tasks();
    }
    else if (command[0]=='-'&&command[1]=='c'){
        completes_tasks();
    }
    else{
        printf("nop\n");
    }
    printf("pres any key");
    gets(command);
}

int main()
{
    while(1){
    usage();
    select();
    }
    return 0;
}
