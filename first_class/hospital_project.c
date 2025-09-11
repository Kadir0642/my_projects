#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu(); // prototype;
void proses();

typedef struct
{
	char name[25];
	char surname[25];
	char phone[10];
}close;

typedef struct
{
	char allergy[25];
	char chronic[35];
	char ill[45];
	char doctor[30];
	char service[40];
	char used_medicinens[100];

}medical_data;

typedef struct
{
	char name[25];
	char surname[25];
	char TC[12];
	char birthday[10];
	char hometown[40];
	char gender[10];
	char married[5]; //married or single
	char adress[40];
	char phone[10];
	close close_relative;
	char insurance_type[20];
	int sick_num;
	char accept_day[10];
	medical_data medical;
	char discharge_date[10];
}personel_data;

int person_account = 0;
int main()
{
	FILE* fptr = fopen("C:\\Users\\Lenovo\\Desktop\\Practice_data.txt", "a"); 
	fclose(fptr);				
	fptr = NULL;
	proses();	
	return 0;
}
void menu()
{
	printf("%c", 201);
	for (int i = 0; i < 49; i++)
	{
		printf("%c",205);
	}
	printf("%c\n", 187);
	for (int k = 0; k < 10; k++)
	{
		for (int i = 0; i < 50; i++)
		{
			if (i == 0 || i == 49)
			{
				printf("%c", 186);
			}
			if (k == 2 && i == 11)
			{
				printf("Hasta Kayit Otomasyonu");
				i += 22;
			}
			if (k == 4 && i == 11)
			{
				printf("1)Hasta ekle");
				i += 12;
			}
			if (k == 5 && i == 11)
			{
				printf("2)Hasta listele");
				i += 15;
			}
			if (k == 6 && i == 11)
			{
				printf("3)Arama Yap");
				i += 11;
			}
			if (k == 7 && i == 11)
			{
				printf("4)Cıkıs");
				i += 6;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("%c", 200);
	for (int i = 0; i < 49; i++)
	{
		printf("%c", 205);
	}
	printf("%c\n", 188);
}
void proses()
{
	do {
		int num;
		personel_data sick;
		system("cls");
		menu();
		scanf_s("%d", &num);
		getchar();

		switch (num)
		{
		case 1:
			system("cls");
			FILE* fp = fopen("C:\\Users\\Lenovo\\Desktop\\Practice_data.txt", "a");

			printf("Enter a name: ");
			fgets(sick.name, sizeof(sick.name), stdin);
			sick.name[strcspn(sick.name, "\n")] = '\0';
			person_account++;

			printf("Enter a surname: ");
			fgets(sick.surname, sizeof(sick.surname), stdin);
			sick.surname[strcspn(sick.surname, "\n")] = '\0';
			getchar();

			printf("TC: ");
			fgets(sick.TC, sizeof(sick.TC), stdin);
			sick.TC[strcspn(sick.TC, "\n")] = '\0';
			getchar();

			printf("Birthday: ");
			fgets(sick.birthday, sizeof(sick.birthday), stdin);
			sick.birthday[strcspn(sick.birthday, "\n")] = '\0';
	

			printf("Hometown: ");
			fgets(sick.hometown, sizeof(sick.hometown), stdin);
			sick.hometown[strcspn(sick.hometown, "\n")] = '\0';
			getchar();

			printf("Gender: ");
			fgets(sick.gender, sizeof(sick.gender), stdin);
			sick.gender[strcspn(sick.gender, "\n")] = '\0';
			getchar();

			printf("Married: ");
			fgets(sick.married, sizeof(sick.married), stdin);
			sick.married[strcspn(sick.married, "\n")] = '\0';
			getchar();

			printf("Adress: ");
			fgets(sick.adress, sizeof(sick.adress), stdin);
			sick.adress[strcspn(sick.adress, "\n")] = '\0';
			getchar();

			printf("Phone: ");
			fgets(sick.phone, sizeof(sick.phone), stdin);
			sick.phone[strcspn(sick.phone, "\n")] = '\0';
			getchar();

			printf("Close name: ");
			fgets(sick.close_relative.name, sizeof(sick.close_relative.name), stdin);
			sick.close_relative.name[strcspn(sick.close_relative.name, "\n")] = '\0';
			getchar();

			printf("Close surname: ");
			fgets(sick.close_relative.surname, sizeof(sick.close_relative.surname), stdin);
			sick.close_relative.surname[strcspn(sick.close_relative.surname, "\n")] = '\0';
			getchar();

			printf("İnsurance: ");
			fgets(sick.insurance_type, sizeof(sick.insurance_type), stdin);
			sick.insurance_type[strcspn(sick.insurance_type, "\n")] = '\0';
			getchar();

			printf("Enter a sick number: ");
			scanf_s("%d", &sick.sick_num);
			getchar();

			printf("Enter a accept date ( day/month/year ) : ");
			fgets(sick.accept_day, sizeof(sick.accept_day), stdin);
			sick.accept_day[strcspn(sick.accept_day, "\n")] = '\0';
			getchar();

			printf("Allergy: ");
			fgets(sick.medical.allergy, sizeof(sick.medical.allergy), stdin);
			sick.medical.allergy[strcspn(sick.medical.allergy, "\n")] = '\0';
			getchar();

			printf("chronic: ");
			fgets(sick.medical.chronic, sizeof(sick.medical.chronic), stdin);
			sick.medical.chronic[strcspn(sick.medical.chronic, "\n")] = '\0';
			getchar();

			printf("ill: ");
			fgets(sick.medical.ill, sizeof(sick.medical.ill), stdin);
			sick.medical.ill[strcspn(sick.medical.ill, "\n")] = '\0';
			getchar();

			printf("doctor: ");
			fgets(sick.medical.doctor, sizeof(sick.medical.doctor), stdin);
			sick.medical.doctor[strcspn(sick.medical.doctor, "\n")] = '\0';
			getchar();

			printf("service: ");
			fgets(sick.medical.service, sizeof(sick.medical.service), stdin);
			sick.medical.service[strcspn(sick.medical.service, "\n")] = '\0';
			getchar();

			printf("Used medicinens: ");
			fgets(sick.medical.used_medicinens, sizeof(sick.medical.used_medicinens), stdin);
			sick.medical.used_medicinens[strcspn(sick.medical.used_medicinens, "\n")] = '\0';
			getchar();

			printf("Discharge date ( day/month/year ) : ");
			fgets(sick.discharge_date, sizeof(sick.discharge_date), stdin);
			sick.discharge_date[strcspn(sick.discharge_date, "\n")] = '\0';
			getchar();

			fwrite(&sick, sizeof(personel_data), 1, fp);
			fclose(fp);
			_getch();
			break;
		case 2:
			system("cls");
			personel_data temp;
			fp = fopen("C:\\Users\\Lenovo\\Desktop\\Practice_data.txt", "r");
			if (fp == NULL)
			{
				perror("");
				exit(1);
			}
			if (1)
			{
				fseek(fp, 0, SEEK_END);
				long size = ftell(fp);
				rewind(fp);
				person_account = size / sizeof(personel_data);
			}
			
			if (person_account == 0)
			{
				printf("Kayit dosyasinda kayit bulunamadi !! ");
			}
			for (int i = 0; i < person_account; i++)
			{
				fread(&temp, sizeof(personel_data), 1, fp);
				printf("%s\t%s\n", temp.name, temp.surname);
			}
			fclose(fp);
			_getch();
			break;
		case 3:
			system("cls");
			int account = 0;
			char enter_name[30];
			personel_data new;
			printf("Enter a name: ");
			fgets(enter_name, sizeof(temp), stdin);
			enter_name[strcspn(enter_name, "\n")] = '\0';
			fp = fopen("C:\\Users\\Lenovo\\Desktop\\Practice_data.txt", "r");
			if (fp == NULL)
			{
				perror("");
				exit(1);
			}
			for (int i = 0; i < person_account; i++)
			{
				fread(&new, sizeof(personel_data), 1, fp);
				if (!strcmp(enter_name, new.name))
					account++;
			}
			if (account == 0)
			{
				printf("Kayıtlarda boyle birisi yoktur!!");
				_getch();
				break;
			}
			fseek(fp, 0, SEEK_SET);
			printf("Toplamda %s isimli %d adet kayıt bulundu\n---------------------------------------------------------\n\n ", enter_name, account);
			for (int i = 0; i < person_account; i++)
			{
				fread(&new, sizeof(personel_data), 1, fp);
				if (!strcmp(enter_name, new.name))
				{
					printf("Name: %s\n", new.name);
					printf("Surname: %s\n", new.surname);
					printf("TC: %s\n", new.TC);
					printf("Birthday: %s\n", new.birthday);
					printf("Hometown: %s\n", new.hometown);
					printf("Gender: %s\n", new.gender);
					printf("Married: %s\n", new.married);
					printf("Adress: %s\n", new.adress);
					printf("Phone: %s\n", new.phone);

					printf("Close name: %s\n", new.close_relative.name);
					printf("Close surame: %s\n", new.close_relative.surname);
					printf("Close phone: %s\n", new.close_relative.phone);


					printf("İnsurance: %s\n", new.insurance_type);
					printf("Sick number: %d\n", new.sick_num);
					printf("Accept day: %s\n", new.accept_day);



					printf("Allergy: %s\n", new.medical.allergy);
					printf("Chronic: %s\n", new.medical.chronic);
					printf("İll name: %s\n", new.medical.ill);
					printf("Doctor: %s\n", new.medical.doctor);
					printf("Medical service: %s\n", new.medical.service);
					printf("Used medicinens: %s\n", new.medical.used_medicinens);
					printf("Discarge date: %s\n", new.discharge_date);
					printf("\n\n---------------------------------------------\n\n");
				}
			}
			_getch();
			break;
		case 4:
			printf("Cikis yapiliyor . . .");
			exit(0);
		default:
			printf("Tekrar seçim yapın ( 1 -4 arasi )\n\n");
			_getch();
			break;
		}
	} while (1);
}
