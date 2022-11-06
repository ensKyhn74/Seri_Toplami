#include <stdio.h>
// +1-2+3-4+5-6....+97-98+99-100....x şeklindeki seriyi hesaplar 
// serinin tek elemanları toplanıyor,çift elemanları çıkarılıyor
// x serinin son sayısıdır.Kullanıcı x'i 3 girerse 1-2+3=2 sonucu ekrana yazdırılır

int main() 

{
 
 int x;    
 
 int i;   
 
 int sonuc = 0;
 
 printf("serinin son sayisini girin: ");
 scanf("%d",&x);
  
 for(i = 1 ; i <= x ; i++)
 {
    if(i % 2 == 0)
    {
     sonuc -= i;   
    } 
    
    else 
    {
     sonuc += i;
    } 
 }
  
 printf("seri hesabinin sonucu: %d",sonuc);
 
 return 0;

}
