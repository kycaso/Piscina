void	print_number(char *str, char *diccionario)
{
	int tamaño;
	int rec_inv;

	tamaño = 0;
	while (str[i])
		tamaño++;
	rec_inv = tamaño - 1;
	while (rec_inv >= 0)
	{
		if (rec_inv % 3 == 0)
		{
			if (str[tamaño - rec_inv - 1] != '0')
				//poner numero y apellido
		}

		else if (rec_inv % 3 == 1)
		{
			if (str[tamaño - rec_inv - 1] == '1')
			{	//mira siguiente numero y pone teen mas magnitud
				rec_inv--;
			}
			else if (str[tamaño - rec_inv - 1] %  > '1')
			{
				//printa acabado en cero
				if (str[tamaño - rec_inv]  == '0')
				{
					//printa  magnitud
				}
			}
		}
		else
		{
			if (str[tamaño - rec_inv - 1] != '0')
			{
				//printa numero
				if ((str[tamaño - rec_inv]  == '0') && (str[tamaño - rec_inv + 1] == '0'))
				{
					//printa magnitud
				}
			}
		}
		rec_inv--;
	}
}
