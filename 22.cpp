#include<stdio.h>
struct Sertivor{
    char id[20];
    char name[20];
    unsigned int  wage;
    unsigned int  hour;
    unsigned int  pay;
};
int salc(struct Sertivor *);  
void show(struct Sertivor *);  
int main(void){
    int num;
    int i;
    struct Sertivor sertivor[4];
    printf("���X�ӤuŪ��?:");
    scanf("%d", &num);
    for(i=0;i<num;++i){
        printf("�o�O��%d�����\n\n", i+1);
        printf("�п�J id:");
        scanf("%s", sertivor[i].id);
        printf("�п�J name:");
        scanf("%s", sertivor[i].name);
        printf("�п�J wage: ");
        scanf("%d", &sertivor[i].wage);
        printf("�п�J hour:");
        scanf("%d", &sertivor[i].hour);
        salc(&sertivor[i]);
    }
    for(i=0;i<num;++i){
    	show(&sertivor[i]);
	}
	return 0;
}
int salc(struct Sertivor *ser){ 
    (ser->pay)=(ser->wage)*(ser->hour);
    return ser->pay;
}
void show(struct Sertivor *show){ 
    printf("\n\n%s�����---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("�m�W:%s\n",show->name);
    printf("���~:%d\n",show->wage);
    printf("�ɼ�:%d\n",show->hour);
    printf("�~��:%d\n",show->pay);
    printf("-------------\n");
}
