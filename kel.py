total_murid = int(input("Ada berapa murid di kelas? "))
jumlah_kelompok = int(input("Mau bikin berapa kelompok? "))

anggota_dasar = total_murid // jumlah_kelompok
sisa_murid = total_murid % jumlah_kelompok

print("\nHASIL PEMBAGIAN KELOMPOK")
for i in range(1, jumlah_kelompok + 1):
    jumlah_anggota = anggota_dasar + (1 if i <= sisa_murid else 0)
    print(f"Kelompok {i} : berisi {jumlah_anggota} anggota")