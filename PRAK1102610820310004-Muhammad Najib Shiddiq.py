alas = 5
tinggi = 12

sisi_a = tinggi
sisi_c = alas
sisi_b = (alas**2 + tinggi**2) ** 0.5

keliling = sisi_a + sisi_b + sisi_c
luas = (alas * tinggi) / 2

print("Diketahui :")
print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)

print("\nJawab :")
print("Sisi A = %.0f cm" % sisi_a)
print("Sisi B = %.0f cm" % sisi_b)
print("Sisi C = %.0f cm" % sisi_c)
print("Keliling = %.0f cm" % keliling)
print("Luas = %.0f cm" % luas)