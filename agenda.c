#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar (char a)
{
	write (1, &a, 1);
}

void ft_putstr (char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strcmp (char str1[], char str2[])
{
	int i;

	i = 0;
	if ((str1[0] == EOF) && (str2[0] != EOF))
		return (0);
	if ((str1[0] == EOF) && (str2[0] == EOF))
                return (1);
	while (str1[i] != EOF)
	{
		if (str1[i] == str2[i])
			i++;
		else 
			return (0);
	}
	return (1);
}


void ft_sumalinea (char name[15], char age [2], char adjetivo[15])
{
	FILE *fp;
	fp = fopen ("nombres_y_edades", "a");
	fputs (name, fp);
	fputs (" ", fp);
	fputs (age, fp);
	fputs (" ", fp);
	fputs (adjetivo, fp);
	fputs ("\n", fp);
	fclose (fp);
}

void ft_leerdatos(void)
{
	FILE *fp;
	char control[15];

	fp = fopen("nombres_y_edades", "r");
	rewind (fp);
	while (fscanf(fp, "%s", control) != EOF)
	{		
		ft_putstr(control);
		ft_putstr(" ");
		fscanf(fp, "%s", control);
		ft_putstr(control);
		ft_putstr(" ");
		fscanf(fp, "%s", control);
		ft_putstr(control);
		ft_putstr("\n");
//		if (name == "Juani")
//		ft_putstr(adjetivo);
	}
	fclose (fp);
}

int ft_muestraconcreto (void)
{
	FILE *fp;
	char control[15];
	//char buscado[] = "Belen";

	fp = fopen("nombres_y_edades", "r");
	rewind (fp);
	while (fscanf(fp, "%s", control) != EOF)
	{
		if (strcmp(control, "Belen") == 0)
	//	if (ft_strcmp(buscado, control) == 1)
		{
			fscanf(fp, "%s", control);
			ft_putstr ("Belen tiene los siguientes años: ");
			ft_putstr(control);
			ft_putstr ("\n");
			return (1);
		}
	}
	return (0);
	fclose(fp);

}

// OJO; COMPARA TEXTO ENTRE COMILLAS PERO NO VARIABLES
int main (int argc, char *argv[])
{
	FILE *fp;
	int control;
	char name[5] = "Pepe";
        char name2[5] = "Pepe";
	//char age[2];
        //char adjetivo[5];


	fp = fopen ("nombres_y_edades", "r");
	if (fp == NULL)
		ft_putstr("Archivo incorrecto");
	else
	{
		fclose (fp);
		//ft_sumalinea ("peine", "22", "lista");
        	//ft_leerdatos ();
		//ft_muestraconcreto();
		control = ft_strcmp (name, name2);
		if (control == 1 )
		       ft_putstr ("Son iguales\n");
		else
			ft_putstr ("No son iguales\n");	
	}
	//fscanf(fp, "%s %s %s", name, age, adjetivo); 
	//ft_putstr (argv[1]);
	//fputs ("Juani 13 listo\n", fp);
	//rewind (fp);
	//fscanf(fp,"%s %s %s", name, age, adjetivo);
	//ft_putstr (name);
	//ft_putstr (" tiene ");
	//ft_putstr (age);
	//ft_putstr (" anyos y es ");	
	//ft_putstr (adjetivo);
	//ft_putchar ('\n');
	//while (fscanf(fp, "%s", name) != EOF)
	//{
	//	printf("%s\n", name);
	//}
	//fclose (fp);
	//ft_putstr ("Archivo cerrado \n");
	return (0);
}
