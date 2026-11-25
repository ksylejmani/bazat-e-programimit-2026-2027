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
| `shtesa_me_AI.cpp` | Zgjerim i shembullit të mëparshëm: në secilën degë të `if – else` shfaq edhe një mesazh, sa fëmijë fitojnë bonus ose që asnjë fëmijë nuk kualifikohet për bonus. Në fund, nëse ka së paku një fëmijë, shfaq edhe mesataren e shtesës për fëmijë. |
| `shtesa_me_AI_bllok_diagrami.png` | Bllok diagrami i programit `shtesa_me_AI.cpp`. |
| `bankomati.cpp` | Lexon ditën e javës, numrin e personave dhe të bankomatave dhe me `switch` llogarit kohën e pritjes: për ditët e punës (1–5) `5 + 3 · personat / bankomatat`, për fundjavë (6–7) `3 · personat / bankomatat`, ndërsa për ditë të pasaktë shfaq mesazh gabimi (`default`). |
| `bankomati_bllok_diagrami.png` | Bllok diagrami i programit `bankomati.cpp`. |
| `bankomati_me_AI.cpp` | Zgjerim i shembullit të mëparshëm: me ciklin `do – while` e lexon ditën përsëri derisa përdoruesi të shkruajë një vlerë nga 1 deri në 7. |
| `bankomati_me_AI_bllok_diagrami.png` | Bllok diagrami i programit `bankomati_me_AI.cpp`. |
| `bankomati_me_AI_2.cpp` | Zgjerim i shembullit të mëparshëm: dita lexohet si numër dhjetor dhe refuzohet edhe nëse ka pjesë dhjetore (p.sh. 2.5), duke e krahasuar `dita` me `(int)dita`. |
| `bankomati_me_AI_2_bllok_diagrami.png` | Bllok diagrami i programit `bankomati_me_AI_2.cpp`. |
| `card.cpp` | Lexon numrin dhe simbolin e një letre loje dhe me dy `switch` shfaq emrin e letrës: numrat 1, 11, 12 dhe 13 shfaqen si Ace, Jack, Queen dhe King, ndërsa simboli (C, D, H, S, me shkronjë të madhe ose të vogël) si Clubs, Diamonds, Hearts ose Spades. |
| `card_bllok_diagrami.png` | Bllok diagrami i programit `card.cpp`. |
| `card_me_AI.cpp` | Zgjerim i shembullit të mëparshëm: me dy cikle `do – while` e lexon numrin përsëri derisa të jetë nga 1 deri në 13 dhe simbolin derisa të jetë C, D, H ose S (me shkronjë të madhe ose të vogël). Kushti për simbolin ruhet në variablën `bool condition`. |
| `card_me_AI_bllok_diagrami.png` | Bllok diagrami i programit `card_me_AI.cpp`. |
| `shuma.cpp` | Lexon numrin e artikujve dhe me ciklin `for` lexon çmimin e secilit artikull dhe llogarit shumën e tyre. Brenda ciklit, me `do – while` çmimi lexohet përsëri derisa të jetë më i madh se 0. |
| `shuma_bllok_diagrami.png` | Bllok diagrami i programit `shuma.cpp`. |
| `cift_tek.cpp` | Lexon numrin `n` dhe me ciklin `for` lexon `n` numra. Për secilin numër kontrollon me `a % 2 == 0` nëse është çift ose tek dhe në fund shfaq sa numra çift (`nc`) dhe sa numra tek (`nt`) janë dhënë. |
| `cift_tek_bllok_diagrami.png` | Bllok diagrami i programit `cift_tek.cpp`. |
| `cift_tek_AI.cpp` | Zgjerim i shembullit të mëparshëm: përveç numrit të vlerave çift dhe tek, llogarit edhe shumën e vlerave çift (`sc`) dhe shumën e vlerave tek (`st`). |
| `cift_tek_AI_bllok_diagrami.png` | Bllok diagrami i programit `cift_tek_AI.cpp`. |
| `Mesatarja.cpp` | Lexon vlerën maksimale të lejuar `x` dhe me ciklin `for` lexon shpenzimet për 7 ditë në një varg. Me ciklin `while` llogarit shumën e shpenzimeve dhe del me `break` nëse ndonjë ditë i kalon vlerës `x`. Nëse të gjitha ditët janë brenda kufirit, shfaq mesataren ditore të shpenzimeve; përndryshe shfaq mesazh. |
| `Mesatarja_bllok_diagrami.png` | Bllok diagrami i programit `Mesatarja.cpp`. |
| `kollokviumi.cpp` | Me ciklin `for` lexon pikët e 12 studentëve në kollokvium. Brenda ciklit, me `do – while` pikët lexohen përsëri derisa të jenë nga 0 deri në 40. Pastaj me ciklin `while` numëron sa studentë kanë së paku 16 pikë (`kalueshmeria`) dhe shfaq sa e kanë kaluar dhe sa nuk e kanë kaluar kollokviumin. |
| `kollokviumi_bllok_diagrami.png` | Bllok diagrami i programit `kollokviumi.cpp`. |
| `kollokviumiAI.cpp` | Zgjerim i shembullit të mëparshëm: pragu i kalimit ruhet në konstanten `pragu`, ndërsa në ciklin `while` llogaritet edhe shuma e pikëve. Në fund shfaq numrin e studentëve, sa kanë kaluar dhe sa jo, mesataren e pikëve (me `setprecision(2)`) dhe kalueshmërinë në përqindje. |
| `kollokviumiAI_bllok_diagrami.png` | Bllok diagrami i programit `kollokviumiAI.cpp`. |
| `maksimumi.cpp` | Lexon numrin e anëtarëve `m` (me `do – while` derisa të jetë nga 1 deri në 100) dhe me ciklin `for` lexon anëtarët e vargut `d`. Vlera `max` merr anëtarin e parë, pastaj me ciklin `while` krahasohet secili anëtar tjetër me `max` dhe, nëse është më i madh, bëhet `max`. Në fund shfaqet vlera maksimale. |
| `maksimumi_bllok_diagrami.png` | Bllok diagrami (nga tabela) i programit `maksimumi.cpp`. |
| `maksimalja.cpp` | Gjen vlerën maksimale në një varg me 7 anëtarë të dhënë në kod. Vlera `max` merr anëtarin e parë, pastaj me ciklin `while` krahasohet me secilin anëtar tjetër. Mesazhet `Test1`–`Test3` tregojnë sa herë ekzekutohet secila pjesë e programit. |
| `maksimalja_bllok_diagrami.png` | Bllok diagrami i programit `maksimalja.cpp`. |
| `mesatarja_skajeve.cpp` | Lexon dimensionet `m` dhe `n` (me `do – while` derisa të jenë nga 2 deri në 10) dhe anëtarët e matricës `a`. Me dy cikle `do – while` të ndërfutura mbledh anëtarët në skajet e matricës (rreshti i parë dhe i fundit, kolona e parë dhe e fundit) dhe shfaq mesataren e tyre `s / (2m + 2n − 4)`. |
| `mesatarja_skajeve_bllok_diagrami.png` | Bllok diagrami (nga tabela) i programit `mesatarja_skajeve.cpp`. |
| `matrica_C.cpp` | Nga vargu `A` me `m = 7` anëtarë dhe matrica katrore `B` (m × m) formon matricën `C` me `m + 1` rreshta dhe `m + 1` kolona: `c_ij = b_ij` për `i ≤ m, j ≤ m`; në rreshtin e fundit vendosen anëtarët e vargut, `c_ij = a_(i−m+(j−1))` për `i > m, j ≤ m`; ndërsa kolona e fundit mbushet me `−5`. Matrica formohet me dy cikle `do – while` të ndërfutura dhe shtypet me `setw`. |
| `matrica_C_bllok_diagrami.png` | Bllok diagrami (nga tabela) i programit `matrica_C.cpp`. |
| `MesNotave.cpp` | Me dy cikle `do – while` të ndërfutura lexon notat e 5 studentëve në 6 lëndë në matricën `notat` (rreshtat janë studentët, kolonat lëndët). Pastaj, për secilën lëndë (kolonë), mbledh notat e të gjithë studentëve dhe shfaq mesataren `s / a`, duke përdorur konvertimin `(float)` që pjesëtimi të mos jetë i plotë. |
| `MesNotave_bllok_diagrami.png` | Bllok diagrami i programit `MesNotave.cpp`. |
| `VarguMeFunksione.cpp` | Shembull me funksione që punojnë mbi një varg me `m = 5` anëtarë: `Lexo` lexon anëtarët e vargut, `NumroCift` numëron anëtarët çift të ndryshëm nga zero, ndërsa `ProdhimiPozitiv` (me cikël `while`) llogarit prodhimin e anëtarëve pozitivë. Funksioni `main` i thërret me radhë dhe shtyp rezultatet. |
| `VarguMeFunksione_bllok_diagrami.png` | Bllok diagrami i programit `VarguMeFunksione.cpp`, në katër pjesë: një për secilin funksion (`Lexo`, `NumroCift`, `ProdhimiPozitiv`) dhe në fund për funksionin `main`. |
| `VeprimetMeFunksione.cpp` | Shembull me funksione që punojnë mbi një varg me `m = 6` anëtarë: `Lexo` lexon anëtarët e vargut, `Shtyp` i shtyp me `setw(5)`, `Rrotullo` e kthen vargun mbrapsht (duke ndërruar anëtarin `i` me anëtarin `m − i + 1` deri në mes të vargut), ndërsa `NumroShumeshifroret` dhe `NumroNjeshifroret` numërojnë anëtarët me vlerë absolute më të madhe se 9, përkatësisht jo më të madhe se 9. Funksioni `main` e shtyp vargun para dhe pas rrotullimit dhe shfaq të dy numrat. |
| `VeprimetMeFunksione_bllok_diagrami.png` | Bllok diagrami i programit `VeprimetMeFunksione.cpp`, në gjashtë pjesë: një për secilin funksion (`Lexo`, `Shtyp`, `Rrotullo`, `NumroShumeshifroret`, `NumroNjeshifroret`) dhe në fund për funksionin `main`. |
| `Numrimi_Shifrave.cpp` | Shembull me funksione që punojnë mbi shifrat e një numri të plotë (duke i ndarë me `i % 10` dhe `i / 10` në ciklin `while`): `NumroShifrat` numëron shifrat, `NumroZerot` numëron shifrat zero, `Prodhimi` llogarit prodhimin e shifrave që janë nga `a` deri në `b`, ndërsa `ShumaShifrave` llogarit shumën e shifrave. Funksioni `main` lexon `n`, `a` dhe `b`, i thërret funksionet me vlerat absolute dhe shtyp rezultatet. |
| `Numrimi_Shifrave_bllok_diagrami.png` | Bllok diagrami i programit `Numrimi_Shifrave.cpp`, në pesë pjesë: një për secilin funksion (`NumroShifrat`, `NumroZerot`, `Prodhimi`, `ShumaShifrave`) dhe në fund për funksionin `main`. |
| `IsPrimeProg.cpp` | Funksioni `IsPrime` kontrollon nëse numri `num` është i thjeshtë: me cikël `for` provon pjesëtuesit `i` nga 2 derisa `i < sqrt(num)` dhe, nëse gjen pjesëtues (`num % i == 0`), e vendos `result = false` dhe e ndërpret ciklin me `break`. Mesazhet `TEST_A` dhe `TEST_B` tregojnë sa herë ekzekutohet cikli dhe kur gjendet pjesëtuesi. Funksioni `main` lexon numrin dhe shtyp rezultatin (1 ose 0). |
| `IsPrimeProg_bllok_diagrami.png` | Bllok diagrami i programit `IsPrimeProg.cpp`, në dy pjesë: për funksionin `IsPrime` dhe për funksionin `main`. |
| `IsPrimeProg_AI.cpp` | Versioni i përmirësuar me AI: `IsPrime` i kthen menjëherë `false` numrat më të vegjël se 2 dhe provon pjesëtuesit derisa `i <= num / i`, `CountPrimes` numëron, ndërsa `SumPrimes` mbledh anëtarët e thjeshtë të vargut me `m = 7` anëtarë. Funksioni `main` lexon një numër, tregon nëse është i thjeshtë dhe shtyp numrin dhe shumën e vlerave të thjeshta në varg. |
| `IsPrimeProg_AI_bllok_diagrami.png` | Bllok diagrami i programit `IsPrimeProg_AI.cpp`, në katër pjesë: një për secilin funksion (`IsPrime`, `CountPrimes`, `SumPrimes`) dhe në fund për funksionin `main`. |
| `ProgramiOperatori.cpp` | Shembull me `enum operatori` (`VALA = 1`, `IPKO`, `KUJTESA`, `ART_MOTION`, `TELKOS`): funksioni `llogarit_taksat_ne_fitim` mbledh fitimet e vargut me `m = 6` anëtarë dhe, nëse shuma `s` është pozitive, e llogarit tatimin si `s` për `VALA`, përkatësisht `s · 0.1` për operatorët e tjerë. Funksioni `main` lexon operatorin si numër, e konverton me `static_cast<operatori>` dhe shtyp tatimin në fitim. |
| `ProgramiOperatori_bllok_diagrami.png` | Bllok diagrami i programit `ProgramiOperatori.cpp`, në dy pjesë: për funksionin `llogarit_taksat_ne_fitim` dhe për funksionin `main`. |
| `funksioni_me_fytyra.cpp` | Shembull i mbingarkimit të funksioneve (funksioni me disa fytyra): `shuma(vargu, m)` mbledh të gjithë anëtarët e vargut, `shuma(vargu, m, min, max)` mbledh anëtarët nga `min` deri në `max`, ndërsa `shuma(vargu, m, c)` mbledh anëtarët që janë të ndryshëm nga `c`. Funksioni `main` i përcakton `min` dhe `max` me operatorin `?:` dhe shtyp të tri shumat. |
| `funksioni_me_fytyra_bllok_diagrami.png` | Bllok diagrami i programit `funksioni_me_fytyra.cpp`, në katër pjesë: një për secilën fytyrë të funksionit `shuma` dhe në fund për funksionin `main`. |
| `mbingarkimi.cpp` | Shembull i mbingarkimit të funksioneve në vargun e fitimeve/humbjeve ditore me `m = 6` anëtarë: `fitimi(vargu, int m)` numëron ditët me fitim (`vargu[i] > 0`), `fitimi(vargu, float m)` – i thirrur me `(float)m` – numëron ditët me fitim shumëshifror (`vargu[i] > 9`), ndërsa `humbja(vargu, m)` numëron ditët me humbje (`vargu[i] < 0`). Funksioni `main` shtyp të tri rezultatet. |
| `mbingarkimi_bllok_diagrami.png` | Bllok diagrami i programit `mbingarkimi.cpp`, në katër pjesë: për dy fytyrat e funksionit `fitimi`, për funksionin `humbja` dhe në fund për funksionin `main`. |
| `veglat_ai.cpp` | Shembull me `enum ai` (`chatGPT = 1`, `claude`, `Grok`, `Copilot`, `Gemini`): funksioni `diferenca_njepasnjeshme` mbledh diferencat `vargu[i] - vargu[i-1]` të anëtarëve të njëpasnjëshëm dhe, nëse vegla është `chatGPT` ose `claude`, e shumëzon rezultatin me 0.8; funksioni `diferenca_cifteve` mbledh diferencat e çifteve `vargu[i] - vargu[i+1]` me hap `i += 2`. Mesazhet `TEST_A`, `TEST_B` dhe `TEST_C` tregojnë rrjedhën e ekzekutimit. |
| `veglat_ai_bllok_diagrami.png` | Bllok diagrami i programit `veglat_ai.cpp`, në tri pjesë: për funksionet `diferenca_njepasnjeshme` dhe `diferenca_cifteve` dhe në fund për funksionin `main`. |

## Si të ekzekutohen shembujt

Me një përpilues (kompajler) C++ (p.sh. `g++`):

```bash
g++ pema.cpp -o pema
./pema
```

Repozitori përmban edhe konfigurimin për **Visual Studio Code** (dosja `.vscode`), kështu që programet mund të përpilohen dhe ekzekutohen drejtpërdrejt nga aty.
