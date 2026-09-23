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

## Si të ekzekutohen shembujt

Me një kompajler C++ (p.sh. `g++`):

```bash
g++ pema.cpp -o pema
./pema
```

Repozitori përmban edhe konfigurimin për **Visual Studio Code** (dosja `.vscode`), kështu që programet mund të kompajlohen dhe ekzekutohen drejtpërdrejt nga aty.
