# Stage 2A — Commande embarquée sur carte TI C2000

Génération de code embarqué depuis Simulink pour un microcontrôleur Texas Instruments **TMS320F2833x (C2000)** : PWM, ADC, synchronisation ADC/PWM.

| Dossier | Description |
|---|---|
| `modeles/` | Modèles Simulink (`PWM`/`BY.slx`, `FORSUMMURIZE.slx`, exemple ADC-PWM), R2022b |
| `code-genere/` | Code C généré par Embedded Coder (`.c` et `.h` uniquement) |
| `captures/` | Captures de configuration : installation, réglages des blocs ePWM et ADC, schémas |
| `notes/` | Notes de travail |

## Outils
- MATLAB / Simulink R2022b + *Embedded Coder Support Package for TI C2000*
- Code Composer Studio 11 / 12 et controlSUITE (Texas Instruments)
