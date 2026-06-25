# ✈️ Uçuş Simülasyonu (Flight Simulation)

Kahramanmaraş İstiklal Üniversitesi, Yazılım Mühendisliği Bölümü **YZM102 Algoritma ve Programlamaya Giriş II** dersi için hazırlanmış, C++ tabanlı eğlenceli ve interaktif bir konsol simülasyon projesidir.

---

## 📝 Proje Hakkında

Bu proje, kullanıcının farklı rotalar, havayolu şirketleri ve uçak modelleri arasında seçim yaparak bir uçuş deneyimi yaşamasını simüle eder. Projenin en dikkat çekici yanı, her uçağın ve pilotun durumuna göre belirlenmiş **gerçekçi/mizahi düşme ihtimallerinin** bulunması ve uçuşun kaderinin tamamen matematiksel olasılıklara göre arka planda hesaplanmasıdır!

### 🎓 Akademik Bilgiler
* **Üniversite:** Kahramanmaraş İstiklal Üniversitesi
* **Ders:** YZM102 Algoritma ve Programlamaya Giriş II
* **Dersin Hocası:** Dr. Öğr. Üyesi İbrahim ARUK
* **Geliştirici:** Muhammed Çağrı Güneş
* **Öğrenci No:** 25020091012

---

## 🚀 Özellikler

* **Geniş Sefer Yelpazesi:** İstanbul'dan Londra, Berlin, New York, Tokyo ve Sidney dahil olmak üzere 10 farklı dünya şehrine uçuş seçeneği.
* **Farklı Havayolu Şirketleri:** Benzersiz uçak modellerine, varış sürelerine ve pilot tecrübelerine sahip 3 farklı havayolu (Cagri_Express, Kaan_Havayolları, Gunes_Express).
* **Hassas Olasılık Motoru:** `rand()` fonksiyonu kullanılarak `0.0` ile `100.0` arasında hassas (ondalıklı) şans hesaplamaları.
* **Gerçek Zamanlı Zamanlayıcı:** `std::this_thread::sleep_for` kullanılarak uçuş hazırlığı, kalkış ve havada kalma süreçlerinin gecikmeli (efektli) simülasyonu.
* **Türkçe Karakter Desteği:** Windows konsollarında Türkçe karakterlerin bozulmasını önleyen UTF-8 (`SetConsoleOutputCP(65001)`) entegrasyonu.

---

## 🛠️ Kullanılan Teknolojiler ve Kütüphaneler

* **Dil:** C++
* **Giriş/Çıkış Akışları:** `<iostream>`
* **Rastgele Sayı Üretimi:** `<cstdlib>`, `<ctime>` (Zamansal tohumlama `srand(time(0))` ile)
* **Zaman Yönetimi:** `<thread>`, `<chrono>`
* **Konsol Yapılandırması:** `<windows.h>`

---
---- EKRAN GÖRÜNTÜLERİ----
<img width="954" height="759" alt="image" src="https://github.com/user-attachments/assets/f886e27d-002e-4dd6-b7c7-8dcc6d78fc24" />
<img width="673" height="307" alt="image" src="https://github.com/user-attachments/assets/50383d95-141b-42ec-8f2d-bc5c45fcfbf8" />
<img width="659" height="323" alt="image" src="https://github.com/user-attachments/assets/3dd523d5-f1d0-47e5-860e-c04d6332a15e" />



