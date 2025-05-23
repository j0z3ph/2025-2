
int busca_al_mas_grande(int *arr)
{
    static int el_mas_grande = -1;
    static int i = 0;
    if ( i < 10)
    {
        if (el_mas_grande < arr[i])
        {
            el_mas_grande = arr[i];
        }
        i++;
        busca_al_mas_grande(arr);
    }
    return el_mas_grande;
}

