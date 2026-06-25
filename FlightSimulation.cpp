#include <iostream>
#include <string>
#include <cstdlib> // rand() ve srand() için
#include <ctime>   // time() için
#include <windows.h>
#include <thread> // std::this_thread::sleep_for için
#include <chrono> // std::chrono::seconds için
using namespace std;
void ucusSimulasyonunuBaslat(string firmaAdi, string ucakModeli, string varisSuresi, double dusmeIhtimali);
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    srand(time(0));
    int secim,firmaSecim;

    cout<<("\n");
    cout<<("  +================================================+\n");
    cout<<("  |      KAHRAMANMARAŞ İSTİKLAL ÜNİVERSİTESİ       |\n");
    cout<<("  +================================================+\n");
    cout<<("  | DERS:YZM102 ALGORİTMA VE PROGRAMLAMAYA GİRİŞ II|\n");
    cout<<("  | DERSİN HOCASI: Dr.Öğr.Üy.İBRAHİM ARUK          |\n");
    cout<<("  | PROJE: UÇUŞ SİMULASYONU                        |\n");
    cout<<("  | HAZIRLAYAN: Muhammed Çağrı Güneş               |\n");
    cout<<("  | ÖĞRENCİ NO: 25020091012                        |\n");
    cout<<("  +================================================+\n");

   cout << R"(
   __  __  ______  __  __  _____
  / / / / / ____/ / / / / / ___/
 / / / / / /     / / / /  \__ \
/ /_/ / / /___  / /_/ /  ___/ /
\____/  \____/  \____/  /____/
   _____  ____ __  ___ _  __ _       ___  ______  _  ____  _   __
  / ___/ /  _//  |/  // / / // /    /   |/_  __/ / // __ \/ | / /
  \__ \  / / / /|_/ // / / // /    / /| | / /   / // / / /|  |/ /
 ___/ /_/ / / /  / // /_/ // /___ / ___ |/ /   / // /_/ / /|    /
/____//___//_/  /_/ \____//_____//_/  |_/_/   /_/ \____/ /_/|_/
)" <<endl;

 cout<<(" +==============================================================================================+\n");
 cout << " | 1.Sefer: İstanbul (IST) -> Londra (LHR) | Kalkış Saati: 08:30 | Durum: Zamanında             |\n";
 cout << " | 2.Sefer: İstanbul (IST) -> Berlin (BER) | Kalkış Saati: 10:15 | Durum: Zamanında             |\n";
 cout << " | 3.Sefer: İstanbul (IST) -> Roma (FCO) | Kalkış Saati: 11:45 | Durum: Kapı Kapanıyor          |\n";
 cout << " | 4.Sefer: İstanbul (IST) -> Paris (CDG) | Kalkış Saati: 13:00 | Durum: Zamanında              |\n";
 cout << " | 5.Sefer: İstanbul (IST) -> New York (JFK) | Kalkış Saati: 14:45 | Durum: Gecikmeli (20 Dk)   |\n";
 cout << " | 6.Sefer: İstanbul (IST) -> Tokyo (HND) | Kalkış Saati: 16:20 | Durum: Zamanında              |\n";
 cout << " | 7.Sefer: İstanbul (IST) -> Seul (ICN) | Kalkış Saati: 18:00 | Durum: Zamanında               |\n";
 cout << " | 8.Sefer: İstanbul (IST) -> Dubai (DXB) | Kalkış Saati: 20:30 | Durum: Zamanında              |\n";
 cout << " | 9.Sefer: İstanbul (IST) -> Kahire (CAI) | Kalkış Saati: 22:15 | Durum: Zamanında             |\n";
 cout << " | 10.Sefer:İstanbul (IST) -> Sidney (SYD) | Kalkış Saati: 23:45 | Durum: Zamanında             |\n";
 cout<<(" +==============================================================================================+\n");
 cout<<"  UÇMAK İSTEDİĞİNİZ SEFERİN NUMARASINI GİRİNİZ:";
 cin >> secim;


 switch (secim) {
  case 1:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
   case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: CG 46 PRO_MAX\n";
     cout<<"Tahmini Varış Süresi: 3 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %15 (Pilotaj eğitimleri devam ediyor!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "CG 46 PRO_MAX", "3 Saat 15 Dakika", 15.0);
     break;
   case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: MKC 3536 MİDDLE_NİGHT\n";
     cout<<"Tahmini Varış Süresi: 10 Saat\n";
     cout<<"Düşme İhtimali: %22,5 (YENİ PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "MKC 3536 MIDDLE_NIGHT", "10 Saat", 22.5);
     break;
   case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: GUN 7900 ULTRA_PRO_MAX\n";
     cout<<"Tahmini Varış Süresi: 7 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %2,5 (10 YILDIR PİLOT !)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "GUN 7900 ULTRA_PRO_MAX", "7 Saat 15 Dakika", 2.5);
     break;
  }
   break;
  case 2:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: CGR 4600 MAX\n";
     cout<<"Tahmini Varış Süresi: 20 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %11,5 (Pilotaj eğitimleri devam ediyor!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "CGR 4600 MAX", "20 Saat 15 Dakika", 11.5);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: MK 3535 NİGHT\n";
     cout<<"Tahmini Varış Süresi: 12 Saat\n";
     cout<<"Düşme İhtimali: %42,5 (UÇAK MOTORU YENİ TAMİR EDİLDİ!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "MK 3535 NIGHT", "12 Saat", 42.5);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: GG 7979 ULTRA_PRO\n";
     cout<<"Tahmini Varış Süresi: 4 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %0,5 (HERHANGİ BİR OLMUSUZLUK YOK!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "GG 7979 ULTRA_PRO", "4 Saat 15 Dakika", 0.5);
     break;
   }
   break;
  case 3:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: SSG 4646 PRO_MAX\n";
     cout<<"Tahmini Varış Süresi: 11 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %21 (Pilotaj eğitimleri devam ediyor!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "SSG 4646 PRO_MAX", "11 Saat 15 Dakika", 21.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: MUSTİ 3500 MİDDLE\n";
     cout<<"Tahmini Varış Süresi: 11 Saat\n";
     cout<<"Düşme İhtimali: %24,5 (YENİ PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "MUSTI 3500 MIDDLE", "11 Saat", 24.5);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: GUN 7900 ULTRA_PRO_MAX\n";
     cout<<"Tahmini Varış Süresi: 7 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %2,5 (10 YILDIR PİLOT !)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "GUN 7900 ULTRA_PRO_MAX", "7 Saat 15 Dakika", 2.5);
     break;
   }
   break;
  case 4:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: ABD 4647 PRO\n";
     cout<<"Tahmini Varış Süresi: 3 Saat 45 Dakika\n";
     cout<<"Düşme İhtimali: %10 ( 5 YILLIK PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "ABD 4647 PRO", "3 Saat 45 Dakika", 10.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: SG555 3546 SMG\n";
     cout<<"Tahmini Varış Süresi: 7 Saat 30 Dakika\n";
     cout<<"Düşme İhtimali: %8 (9 YILLIK PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "SG555 3546 SMG", "7 Saat 30 Dakika", 8.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: EZ666 7900 HAYATİ\n";
     cout<<"Tahmini Varış Süresi: 6 Saat 25 Dakika\n";
     cout<<"Düşme İhtimali: %1,5 (15 YILDIR PİLOT !)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "EZ666 7900 HAYATI", "6 Saat 25 Dakika", 1.5);
     break;
   }
   break;
  case 5:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: AAA777 7900 DFDF\n";
     cout<<"Tahmini Varış Süresi: 4Saat 45 Dakika\n";
     cout<<"Düşme İhtimali: %17 ( 3 YILLIK PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "AAA777 7900 DFDF", "4 Saat 45 Dakika", 17.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: FF 3546 SMG\n";
     cout<<"Tahmini Varış Süresi: 6 Saat 30 Dakika\n";
     cout<<"Düşme İhtimali: %14 (4 YILLIK PİLOT!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "FF 3546 SMG", "6 Saat 30 Dakika", 14.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: ZZ 7900 HAYATİ\n";
     cout<<"Tahmini Varış Süresi: 6 Saat 25 Dakika\n";
     cout<<"Düşme İhtimali: %0,05 (20 YILDIR PİLOT !)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "ZZ 7900 HAYATI", "6 Saat 25 Dakika", 0.05);
     break;
   }
   break;
  case 6:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: JET-X 9900 TURBO\n";
     cout<<"Tahmini Varış Süresi:: 2 Saat 15 Dakika\n";
     cout<<"Düşme İhtimali: %15 (Uçak hızlı ama pilot dün işe başladı!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "JET-X 9900 TURBO", "2 Saat 15 Dakika", 15.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: SKY-LINER 404 FOUND\n";
     cout<<"Tahmini Varış Süresi: 5 Saat 10 Dakika\n";
     cout<<"Düşme İhtimali: %5 (12 yıllık tecrübeli askeri pilot!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "SKY-LINER 404 FOUND", "5 Saat 10 Dakika", 5.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: ECO-BUS A320 TASARRUF\n";
     cout<<"Tahmini Varış Süresi: 8 Saat 45 Dakika\n";
     cout<<"Düşme İhtimali:%0.5 (20 yıllık emekliliği gelmiş usta pilot!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "ECO-BUS A320 TASARRUF", "8 Saat 45 Dakika", 0.5);
     break;
   }
   break;
  case 7:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: ROBO-PILOT AI 2026\n";
     cout<<"Tahmini Varış Süresi: 4 Saat 20 Dakika\n";
     cout<<"Düşme İhtimali: %2 (Yapay zeka uçuruyor, otonom sistem!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "ROBO-PILOT AI 2026", "4 Saat 20 Dakika", 2.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli: THUNDER-BOLT Z100\n";
     cout<<"Tahmini Varış Süresi: 1 Saat 50 Dakika \n";
     cout<<"Düşme İhtimali: %45 (Çok riskli, pilotun uykusu var!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "THUNDER-BOLT Z100", "1 Saat 50 Dakika", 45.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: GÖKBÖRÜ V12\n";
     cout<<"Tahmini Varış Süresi: 3 Saat 10 Dakika\n";
     cout<<"Düşme İhtimali: %1 (Eski jet pilotu, havada takla atabilir!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "GOKBORU V12", "3 Saat 10 Dakika", 1.0);
     break;
   }
   break;
  case 8:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: PERVANE-X 1990\n";
     cout<<"Tahmini Varış Süresi:12 Saat 40 Dakika \n";
     cout<<"Düşme İhtimali: %12 (Uçak biraz eski ama pilotun duaları tam!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "PERVANE-X 1990", "12 Saat 40 Dakika", 12.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli:MATRIX RELOADED 7\n";
     cout<<"Tahmini Varış Süresi: 4 Saat 05 Dakika \n";
     cout<<"Düşme İhtimali: %30 (Pilot simülasyondan yeni çıkmış, gerçek uçakta ilk günü!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "MATRIX RELOADED 7", "4 Saat 05 Dakika", 30.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: SOLAR-FLARE E4\n";
     cout<<"Tahmini Varış Süresi: 5 Saat 50 Dakika\n";
     cout<<"Düşme İhtimali: %0.1 (Güneş enerjisiyle çalışıyor, yakıt bitme derdi yok!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "SOLAR-FLARE E4", "5 Saat 50 Dakika", 0.1);
     break;
   }
   break;
  case 9:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: RED-BULL AIR-RACE\n";
     cout<<"Tahmini Varış Süresi: 2 Saat 30 Dakika\n";
     cout<<"Düşme İhtimali: %18 (Pilot çok çılgın uçuyor, kemerleri sıkı bağlayın!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "RED-BULL AIR-RACE", "2 Saat 30 Dakika", 18.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli:COMFORT-LINER Z3\n";
     cout<<"Tahmini Varış Süresi: 6 Saat 15 Dakika \n";
     cout<<"Düşme İhtimali: %2 (7 yıldızlı lüks uçak, pilot çok sakin!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "COMFORT-LINER Z3", "6 Saat 15 Dakika", 2.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: NIGHT-HAWK N1\n";
     cout<<"Tahmini Varış Süresi: 4 Saat 55 Dakika\n";
     cout<<"Düşme İhtimali:%27,5 ( gizli pilot!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "NIGHT-HAWK N1", "4 Saat 55 Dakika", 27.5);
     break;
   }
   break;
  case 10:
   cout<<"LÜTFEN BİR  HAVAYOLU ŞİRKETİ SEÇİNİZ:\n";
   cout<<"1-) Cagri_Express\n";
   cout<<"2-) Kaan_Havayolları\n";
   cout<<"3-) Gunes_Express\n";
   cin >> firmaSecim;
   switch (firmaSecim) {
    case 1:
     cout<<"Seçilen Firma: Cagri_Express\n";
     cout<<"Uçak Modeli: HYPER-LOOP FLY 2\n";
     cout<<"Tahmini Varış Süresi: 1 Saat 10 Dakika \n";
     cout<<"Düşme İhtimali: %38 (Aşırı hızlı, motorların patlama riski var!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Cagri_Express", "HYPER-LOOP FLY 2", "1 Saat 10 Dakika", 38.0);
     break;
    case 2:
     cout<<"Seçilen Firma: Kaan_Havayolları\n";
     cout<<"Uçak Modeli:SAFARI-JET 500\n";
     cout<<"Tahmini Varış Süresi: 9 Saat 20 Dakika \n";
     cout<<"Düşme İhtimali: %6 (11 yıllık tecrübe, zorlu hava şartlarına dayanıklı!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Kaan_Havayollari", "SAFARI-JET 500", "9 Saat 20 Dakika", 6.0);
     break;
    case 3:
     cout<<"Seçilen Firma: Gunes_Express\n";
     cout<<"Uçak Modeli: ZEPHYR CLOUD 9\n";
     cout<<"Tahmini Varış Süresi: 5 Saat 25 Dakika\n";
     cout<<"Düşme İhtimali: %1.2 (Bulutların üzerinden giden sarsıntısız uçak!)\n";
     cout<<"Bu uçakla uçmayı onaylıyor musunuz? (E/H)";
     ucusSimulasyonunuBaslat("Gunes_Express", "ZEPHYR CLOUD 9", "5 Saat 25 Dakika", 1.2);
     break;
   }
   break;
 }
}


void ucusSimulasyonunuBaslat(string firmaAdi, string ucakModeli, string varisSuresi, double dusmeIhtimali) {
 char onay;
 cin >> onay;

 if (onay == 'E' || onay == 'e') {
  cout << "\n--------------------------------------------------\n";
  cout << "[SİMÜLASYON] " << firmaAdi << " ile ucus hazırlıkları baslıyor...\n";
  cout << "Ucak Modeli: " << ucakModeli << " | Sefer Suresi: " << varisSuresi << "\n";
  cout << "--------------------------------------------------\n";

  cout << ">> Kaptan pilotunuz konusuyor: Ucusa hos geldiniz.\n";
  this_thread::sleep_for(std::chrono::seconds(2));
  cout << ">> Kapılar kapatıldı, motorlar calıstırıldı... [VUUUUUUU]\n";
  this_thread::sleep_for(std::chrono::seconds(2));
  cout << ">> Ucak pistte hızlandı ve HAVALANDIK! 🛫\n\n";
  this_thread::sleep_for(std::chrono::seconds(2));
  cout << ">> Yolculugunuz devam ediyor...\n\n";
  this_thread::sleep_for(std::chrono::seconds(5));



  // Ondalıklı (küsüratlı) ihtimalleri %22.5 gibi hassas hesaplamak için
  // 0 ile 1000 arasında rastgele sayı üretip 10'a bölüyoruz (Örn: 225 / 10 = 22.5)
  double rastgeleSayi = (rand() % 1000) / 10.0;

  // Kader anı kontrolü
  if (rastgeleSayi < dusmeIhtimali) {
   cout << "🚨 [ACİL DURUM] BİİİP BİİİP! MOTOR ARIZASI! İRTİFA KAYBEDİYORUZ! 🚨\n";
  this_thread::sleep_for(std::chrono::seconds(2));
   cout << "💥 Ucak yere cakıldı... ÖLDÜNÜZ! 💀\n";
  this_thread::sleep_for(std::chrono::seconds(2));
  } else {
   cout << "🛬 Ucagımız alçalmaya basladı... Tekerler piste degdi!\n";
  this_thread::sleep_for(std::chrono::seconds(2));
   cout << "🎉 Tebrikler! " << varisSuresi << " sonunda basarıyla inis yaptınız. Keyifli günler dileriz!\n";
  this_thread::sleep_for(std::chrono::seconds(2));
  }
  cout << "--------------------------------------------------\n";
 } else {
  cout << "\nUcus iptal edildi. Ana menüye dönülüyor...\n";
 }
}