# Linux İçin Syslog Uygulaması

## Proje Hedefi
Bu proje, Linux işletim sisteminde sistem günlüklerini (syslog) anlamak ve bu verileri işlemek için bağlı liste (linked list) veri yapısını kullanarak bir uygulama tasarlamayı amaçlamaktadır. Uygulama, syslog mekanizmasını anlamayı ve bağlı listeler kullanarak sistem günlüklerini yönetmeyi göstermektedir.

## Syslog Mekanizması
Syslog, Unix benzeri işletim sistemlerinde mesajların kaydedilmesi için standart bir protokoldür. Sistem hataları, kimlik doğrulama hataları ve diğer önemli olaylar gibi mesajların bir günlük sunucusuna gönderilmesini sağlar.

## Bağlı Liste Veri Yapısı
Bağlı liste, her bir öğenin ayrı bir nesne olduğu ve her düğümün (node) bir sonraki düğüme referans (veya bağlantı) içerdiği doğrusal bir veri yapısıdır. Bağlı listeler dinamik veri yapılarıdır ve eleman ekleme ve çıkarma işlemleri sırasında esneklik sağlar.

## Uygulama Detayları
Uygulama C dilinde yazılmış olup, syslog girişlerini depolamak için bir bağlı liste kullanır. Kod, sistemden syslog mesajlarını okur, işler ve bunları bir bağlı listede depolar. Her syslog mesajı, bağlı listedeki bir düğüm olarak temsil edilir.

## Kullanım
Uygulamayı kullanmak için kodu derleyin ve çalıştırılabilir dosyayı çalıştırın. Uygulama, syslog mesajlarını okuyacak ve bunları bir bağlı listede depolayacaktır. Günlük ve görüntüleme işlevlerini özelleştirmek için kodu değiştirebilirsiniz.
