import math

putaran = 5
jarak = 14

print("Diketahui :")
print("Pak DengkleK mengelilingi taman = %d Putaran" % putaran)
print("Jarak tempuh Pak DengkleK = %d Kilometer" % jarak)

keliling = jarak / putaran
jari_jari = keliling / (2 * math.pi)

print("\nJawaban :")
print("Jari-jari taman yang dikelilingi Pak DengkleK adalah %.2f Kilometer" % jari_jari)