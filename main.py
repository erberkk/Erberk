def sosyal_ag_matris_olustur(sosyal_ag, muzik_turleri):
    kisiler = list(sosyal_ag.keys()) #öğelere erismek icin keys fonksiyonu kullanılır

    # İlişki matrisini başlangıçta boş olarak tanımla
    matris = [[0 for _ in range(len(kisiler) + 1)] for _ in range(len(kisiler) + 1)]

    # Kişileri matrisin sol ve üst kısmına yerleştir
    for i in range(1, len(kisiler) + 1):
        matris[i][0] = matris[0][i] = kisiler[i - 1]

    # Her bir kişi çiftini kontrol et
    for i in range(1, len(kisiler) + 1):
        for j in range(1, len(kisiler) + 1):
            kisi1 = matris[i][0]
            kisi2 = matris[0][j]

            # İki kişi arasındaki ortak müzik türlerini kontrol et
            ortak_muzik_turleri = set(sosyal_ag[kisi1]) & set(sosyal_ag[kisi2])

            # Eğer ortak müzik türü varsa, matris değerini 1 yap, yoksa 0 yap
            matris[i][j] = 1 if ortak_muzik_turleri else 0

    return matris, kisiler

sosyal_ag = {
    'Ali': ['Rock', 'Pop', 'Jazz'],
    'Veli': ['Pop', 'Country'],
    'Ahmet': ['Rock'],
    'Ayşe': ['Jazz', 'Blues'],
    'Kaan': ['Rock', 'Pop', 'K-POP'],
    'Gizem' : ['Pop', 'Arabesk']
}

muzik_turleri = set(muzik for muzik_listesi in sosyal_ag.values() for muzik in muzik_listesi)

matris, kisiler = sosyal_ag_matris_olustur(sosyal_ag, muzik_turleri)

print(" " * 13, end="")
for kisi in kisiler:
    print(f"{kisi:<10}", end="")
print()
for i in range(len(matris)):
    print(f"{matris[i][0]:<13}", end="")
    for j in range(1, len(matris[i])):
        print(f"[{matris[i][j]:^7}]", end="")
    print()