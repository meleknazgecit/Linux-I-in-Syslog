#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Syslog kayd� yap�s�
typedef struct SyslogKaydi {
    char mesaj[256];
    struct SyslogKaydi *sonraki;
} SyslogKaydi;

// Ba�l� listeye yeni bir syslog kayd� ekleme fonksiyonu
void syslogKaydiEkle(SyslogKaydi **bas, const char *mesaj) {
    SyslogKaydi *yeniKayit = (SyslogKaydi *)malloc(sizeof(SyslogKaydi));
    if (yeniKayit == NULL) {
        printf("Bellek tahsisi basarisiz.\n");
        return;
    }
    strncpy(yeniKayit->mesaj, mesaj, 255);
    yeniKayit->mesaj[255] = '\0';
    yeniKayit->sonraki = *bas;
    *bas = yeniKayit;
}

// T�m syslog kay�tlar�n� yazd�rma fonksiyonu
void syslogKayitlariniYazdir(SyslogKaydi *bas) {
    SyslogKaydi *gecerli = bas;
    while (gecerli != NULL) {
        printf("%s\n", gecerli->mesaj);
        gecerli = gecerli->sonraki;
    }
}

// Ba�l� listeyi serbest b�rakma fonksiyonu
void syslogKayitlariniSerbestBirak(SyslogKaydi *bas) {
    SyslogKaydi *gecerli = bas;
    SyslogKaydi *sonraki;
    while (gecerli != NULL) {
        sonraki = gecerli->sonraki;
        free(gecerli);
        gecerli = sonraki;
    }
}

int main() {
    // Syslog ba�l� listesinin ba��n� tutacak pointer
    SyslogKaydi *syslogListesi = NULL;

    // �rnek syslog mesajlar� ekleme
    syslogKaydiEkle(&syslogListesi, "July 18 18:37:25 myhost kernel: [0.000000] Initializing cgroup subsys cpuset");
    syslogKaydiEkle(&syslogListesi, "July 18 18:37:25 myhost kernel: [0.000000] Initializing cgroup subsys cpu");
    syslogKaydiEkle(&syslogListesi, "July 18 18:37:25 myhost kernel: [0.000000] Linux version 5.4.0-66-generic (buildd@lcy01-amd64-007) (gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04)) #74-Ubuntu SMP Fri July 5 11:27:09 UTC 2025");

    // T�m syslog kay�tlar�n� yazd�rma
    syslogKayitlariniYazdir(syslogListesi);

    // Ba�l� listeyi serbest b�rakma
    syslogKayitlariniSerbestBirak(syslogListesi);

    return 0;
}
