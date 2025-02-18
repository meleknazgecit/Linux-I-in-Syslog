# Syslog Mekanizması
Syslog, Unix benzeri işletim sistemlerinde mesajların kaydedilmesi için standart bir protokoldür. Sistem hataları, kimlik doğrulama hataları ve diğer önemli olaylar gibi mesajların bir günlük sunucusuna gönderilmesini sağlar.

# Bağlı Liste Veri Yapısı
Bağlı liste, her bir öğenin ayrı bir nesne olduğu ve her düğümün (node) bir sonraki düğüme referans (veya bağlantı) içerdiği doğrusal bir veri yapısıdır. Bağlı listeler dinamiktir ve elemanların eklenmesi ve silinmesi işlemlerini verimli bir şekilde gerçekleştirebilir. Bu projede, syslog girişlerini depolamak için bağlı listeler kullanılmıştır çünkü dinamik verilerin yönetiminde esneklik ve verimlilik sağlarlar.

# Uygulama Detayları
Uygulama C dilinde yazılmış olup, syslog girişlerini depolamak için bir bağlı liste kullanır. Kod, sistemden syslog mesajlarını okur, işler ve bunları bir bağlı listede depolar. Her syslog girişi, listede bir düğüm olarak yer alır ve liste gezilerek kaydedilmiş mesajlar görüntülenebilir.

# Kullanım
Uygulamayı kullanmak için kodu derleyin ve çalıştırılabilir dosyayı çalıştırın. Uygulama, syslog mesajlarını okuyacak ve bunları bir bağlı listede depolayacaktır. Günlük ve görüntüleme işlevlerini özelleştirmek için kodu değiştirebilirsiniz.
