// github proje.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    srand(static_cast<unsigned int>(time(nullptr)));

    int hedefSayi = rand() % 100 + 1;
    int tahmin = 0;
    int denemeSayisi = 0;

    cout << "=== SAYI TAHMIN OYUNU ===" << endl;
    cout << "1 ile 100 arasinda bir sayi tuttum. Bakalim bulabilecek misin?" << endl;

    while (true) {
        cout << "\nTahminin: ";
        if (!(cin >> tahmin)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Lutfen gecerli bir tam sayi gir!" << endl;
            continue;
        }

        denemeSayisi++;

        if (tahmin < hedefSayi) {
            cout << "Daha BUYUK bir sayi dene." << endl;
        }
        else if (tahmin > hedefSayi) {
            cout << "Daha KUCUK bir sayi dene." << endl;
        }
        else {
            cout << "\nTebrikler! " << denemeSayisi << ". denemede sayiyi buldun (" << hedefSayi << ")." << endl;
            break;
        }
    }

    return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
