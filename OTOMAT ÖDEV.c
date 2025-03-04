#include <stdio.h>
#include <stdlib.h>



                                                                                       //KULLANICININ B�LMES� GEREKEN B�LG�
int main()                                                                            //oGRENCi  SiFRESi :1111
{
    int  su=6,enerji_icecegi=16,kola=10,soguk_kahve=8;
    printf("su=%dTL\n enerji_icecegi=%dTL\n kola=%dTL\n soguk_kahve=%dTL\n",su,enerji_icecegi,kola,soguk_kahve);   //fiyatlar� ekrana yazd�rd�k

    printf(" !!!ogrenciye yuzde elli indirim yapilacaktir!!!\n  ");         //indirimi ekrana yans�tt�k
    int susayisi=0, enerjisayisi=0, kolasayisi=0, sogukkahvesayisi=0;
    char  icecekcevap,sucevap,enerjicevap,kolacevap,sogukkahvecevap;

    printf("su almak istiyor musun?-->[E/H]\n");
    scanf("%s",&sucevap);
    if(sucevap=='E')
    {
        printf("kac tane su almak istiyorsun?\n");
        scanf("%d",&susayisi);
    }
    else
    {
        printf("---\n");
    }
    printf("enerji icecegi almak istiyor musun?-->[E/H]\n");
    scanf("%s",&enerjicevap);
    if(enerjicevap=='E')
    {
        printf("kac tane enerji icecegi almak istiyorsun?\n");
        scanf("%d",&enerjisayisi);
    }
    else
    {
        printf("---\n");
    }
    printf("kola almak istiyor musun?-->[E/H]\n");
    scanf("%s",&kolacevap);
    if(kolacevap=='E')
    {
        printf("kac tane kola almak istiyorsun?\n");
        scanf("%d",&kolasayisi);
    }
    else
    {
        printf("---\n");
    }
    printf("soguk kahve almak istiyor musun?-->[E/H]\n");
    scanf("%s",&sogukkahvecevap);
    if(sogukkahvecevap=='E')
    {
        printf("kac tane soguk kahve almak istiyorsun?\n");
        scanf("%d",&sogukkahvesayisi);
    }
    else
    {
        printf("---\n");
    }

    int toplam,indirimmiktari,indirimlifiyat;
    char ogrencicevap;
    toplam =6*susayisi+ 10*kolasayisi+8*sogukkahvesayisi+16*enerjisayisi;       //toplam fiyat ,indirim miktari,indirimli fiyati hesapl�yoruz.
    indirimmiktari=toplam/2;
    indirimlifiyat=toplam-indirimmiktari;

    printf("toplam indirimsiz ucret --> %dTL\n",toplam);
    printf("ogrenci misiniz?-->[E/H]");
    scanf("%s",&ogrencicevap);
    int ogrencisifre;
    int ogrencisifretanimlama;
    ogrencisifretanimlama = 1111;
    // OGRENC�LER�N S�FREY� B�LD��� VARSAYILIYOR.(1111)
    //BURADA OKULUN OGRENC�LERE TANIMLADI�I ��FRE TANIMLANIYOR.

    if(ogrencicevap=='E')
    {
    printf("indirim kazanmak icin ogrenci numaranizi giriniz");
    scanf("%d",&ogrencisifre);
         if(ogrencisifretanimlama==ogrencisifre)                       //S�STEMDE TANIMLI OLAN S�FRE OGRENC�N�N G�RD�G�YLE UYU�UYOR MU D�YE BAKILIYOR

         {
          printf("yapilan indirim miktari-->%d\n",indirimmiktari);
          printf("odenecek indirimli tutar-->%dTL",indirimlifiyat);
         }
         else
         {
          printf("yanlis ogrenci sifresi girdiniz.ISLEMINIZ GERCEKLESTIRILEMEDI");
         }



    }
    else
    {
    printf("odenecek tutar-->%dTL",toplam);            //indirimsiz fiyattan alanlar i�in .
    }


    return 0;
}

