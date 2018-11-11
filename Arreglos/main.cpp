#include <iostream>

using namespace std;

void arreglo(int a[])
{
	for(int i=0;i<10;i++){
    	cout<<a[i]<<" ";}
}
int suma(int a[])
{
    int suma=0;
    for(int i=0;i<10;suma+=a[i++]);
    return suma;
}
int mayor(int a[])
{
    int mayor=0;
    for(int i=0;i<10;i++){
        if(a[i]>mayor)
            mayor=a[i];}
    return mayor;
}
int contarprimos(int a[])
{
    int c=0;
    for(int i=1;i<10;i++){
    	if(a[i]==2)
    		c+=1;
    	for(int j=2;j<a[i];j++){
    		if(a[i]%j==0)
    			break;
    		else if(j+1==a[i]){
    			c+=1;
    			break;}}}
    return c;

}
void invertir(int a[])
{
    int c=0,n;
	for(int i=9;i>=5;i--){
		n=a[i];
		a[i]=a[c];
		a[c]=n;
		c++;}
    arreglo(a);
}
void ordenarA(int a[])
{
	int n;
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[j]<a[i]){
				n=a[j];
				a[j]=a[i];
				a[i]=n;}}}
	arreglo(a);
}
void ordenarD(int a[])
{
	int n;
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[j]>a[i]){
				n=a[j];
				a[j]=a[i];
				a[i]=n;}}}
	arreglo(a);
}
int contar(char a[])
{
    int c=0;
    for (int i=0;a[i]!='\0';i++){
        c++;
    }
    return c;
}
void arregloc(char a[])
{
	for(int i=0;i<contar(a);i++){
    	cout<<a[i]<<" ";}
}
char palindrome(char a[])
{
    int n=0;
    for(int i=0;i<contar(a)/2;i++){
        if(a[contar(a)-i-1]==a[i])
            n++;
        else
            break;
        }
    if(n==contar(a)/2)
        return 'si';
    return 'no';
}
char encontrar(char a[])
{
	char n='s';
	for(int i=0;i<contar(a);i++){
		if(a[i]==n)
			return 'si';}
	return 'no';
}
int sumaRecursiva(int a[],int n)
{
    if(n==0)
    	return a[0];
    else
    	return a[n]+sumaRecursiva(a,--n);
}
void invertirRecursiva(int a[],int n, int c)
{
	int f=0;
	if(n>=(c/2)){
		arreglo(a);
		return;}
	else{
		f=a[n];
		a[n]=a[c-n-1];
		a[c-n-1]=f;
		invertirRecursiva(a,n+1,c);}
}
int main()
{
    int l[]={1,2,3,4,5,6,7,8,9,10};
    int la[]={4,3,6,7,2,5,1,9,8,10};
    char c[]="osso";
    cout<<"FORMA NORMAL(NOOB): ";
    cout<<"\nEl vector es: "; arreglo(l);
    cout<<"\n- La suma de sus elementos es: "<<suma(l);
    cout<<"\n- El mayor de sus elementos es: "<<mayor(l);
    cout<<"\n- Tiene en total "<<contarprimos(l)<<" primos";
	cout<<"\n- Su inversa es: "; invertir(l);
	cout<<"\nEl vector para ordenar es: "; arreglo(la);
	cout<<"\n- El vector ordenado de mayor a menor es: "; ordenarA(la);
	cout<<"\n- El vector ordenado de menor a mayor es: "; ordenarD(la);
	cout<<"\nEl arreglo de caracteres es: "; arregloc(c);
    cout<<"\n- Tiene "<<contar(c)<<" caracteres";
    cout<<"\n- El arreglo "<<palindrome(c)<<" es palindrome ";
    cout<<"\n- La letra "<<encontrar(c)<<" esta en el arreglo";
    cout<<"\nFORMA RECURSIVA: ";
    cout<<"\n- La suma de sus elementos es: "<<sumaRecursiva(l,9);
	cout<<"\n- La inversa del vector es: ";invertirRecursiva(l,9,10);
	return 0;
}
