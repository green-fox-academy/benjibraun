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
    int lines=0;
    FILE *fp=fopen("todo.txt","r");
    while(!feof(fp)){
        if (lines%2==0){
            fgets(info,100,fp);
        }
        else{
            fgets(line,100,fp);
            printf("");
        }
        ++lines;
    }
    printf("No todos for today! :)");
}
void add_tasks()
{
    //char todo[50]= {gets(todo)};
    char todo[50];
    gets(todo);


    FILE *fp=fopen("todo.txt","a");

    fprintf(fp,"%s\n",todo);
    fprintf(fp,"%s\n",todo);
    fclose(fp);

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
