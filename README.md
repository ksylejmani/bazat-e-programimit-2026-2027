# Bazat e Programimit – Ligjëratat 2026-2027

Ky repozitor përmban shembujt me kod që përdoren në ligjëratat e lëndës **Bazat e Programimit** (FIEK, studimet Bachelor), viti akademik 2026-2027. Shembujt janë shkruar në gjuhën **C++** dhe janë menduar për studentët që sapo po fillojnë të mësojnë programimin.

Për secilin program ka edhe një **bllok diagram** (skedar `.png`) që tregon hap pas hapi si punon algoritmi.

## Përmbajtja

| Skedari | Përshkrimi |
|---|---|
| `pema.cpp` | Lexon numrin e mollave në 4 degë të një peme dhe llogarit numrin total dhe mesataren për degë. |
| `pema_bllok_diagrami.png` | Bllok diagrami i programit `pema.cpp`. |
| `pema_me_mbetje.cpp` | Zgjerim i shembullit të mëparshëm: llogarit edhe sa arka të plota (me nga 6 molla) mbushen dhe sa molla mbeten jashtë, duke përdorur pjesëtimin e plotë (`/`) dhe mbetjen (`%`). |
| `pema_me_mbetje_bllok_diagrami.png` | Bllok diagrami i programit `pema_me_mbetje.cpp`. |
| `TrekendeshiBarakrahesh.cpp` | Lexon bazën dhe krahun e një trekëndëshi barakrahës dhe llogarit perimetrin, lartësinë (me teoremën e Pitagorës) dhe syprinën. |
| `TrekendeshiBarakrahesh_bllok_diagrami.png` | Bllok diagrami i programit `TrekendeshiBarakrahesh.cpp`. |
| `TBmeAI.cpp` | Zgjerim i shembullit të mëparshëm: llogarit edhe këndin te baza (në gradë) me funksionin `acos` dhe shfaq edhe lartësinë. |
| `TBmeAI_bllok_diagrami.png` | Bllok diagrami i programit `TBmeAI.cpp`. |
| `softueri.cpp` | Lexon numrin e defekteve, të rreshtave të kodit dhe të moduleve dhe llogarit densitetin e defekteve, mesataren e rreshtave për modul dhe probabilitetin e defekteve (në %), duke i formatuar rezultatet me `setw` dhe `setprecision`. |
| `softueri_bllok_diagrami.png` | Bllok diagrami i programit `softueri.cpp`. |
| `softueri_me_kusht.cpp` | Zgjerim i shembullit të mëparshëm: me `if` kontrollon që numri i rreshtave dhe i moduleve të jetë më i madh se 0 (për të shmangur pjesëtimin me zero) dhe llogarit edhe defektet për modul. |
| `softueri_me_kusht_bllok_diagrami.png` | Bllok diagrami i programit `softueri_me_kusht.cpp`. |
| `bursa.cpp` | Lexon mesataren e studentes dhe me operatorin e kushtëzuar (`? :`) cakton bursën: 800 nëse mesatarja është së paku 9, përndryshe 0. |
| `bursa_bllok_diagrami.png` | Bllok diagrami i programit `bursa.cpp`. |
| `bursa_me_AI.cpp` | Zgjerim i shembullit të mëparshëm: lexon edhe emrin e studentes dhe me `if – else if – else` cakton bursën në tri nivele (800 për mesatare ≥ 9, 400 për mesatare ≥ 7.5, përndryshe 0). |
| `bursa_me_AI_bllok_diagrami.png` | Bllok diagrami i programit `bursa_me_AI.cpp`. |
| `shtesa.cpp` | Lexon numrin e fëmijëve dhe me `if – else` llogarit shumën e shtesave: 30 për secilin fëmijë, ndërsa nga fëmija i tretë e tutje secili fiton edhe një bonus prej 10. |
| `shtesa_bllok_diagrami.png` | Bllok diagrami i programit `shtesa.cpp`. |
| `shtesa_me_AI.cpp` | Zgjerim i shembullit të mëparshëm: në secilën degë të `if – else` shfaq edhe një mesazh, sa fëmijë fitojnë bonus ose që asnjë fëmijë nuk kualifikohet për bonus. |
| `shtesa_me_AI_bllok_diagrami.png` | Bllok diagrami i programit `shtesa_me_AI.cpp`. |

## Si të ekzekutohen shembujt

Me një përpilues (kompajler) C++ (p.sh. `g++`):

```bash
g++ pema.cpp -o pema
./pema
```

Repozitori përmban edhe konfigurimin për **Visual Studio Code** (dosja `.vscode`), kështu që programet mund të përpilohen dhe ekzekutohen drejtpërdrejt nga aty.
