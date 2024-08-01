# x86 Intel Architecture Emulator (Эмулятор архитектуры x86)
Сразу уточню, что ничего общего с настоящей памятью и другими модулями железа, этот "шедевр" __НЕ имеет__. 
Почему? Потому что я пишу сам для себя (глупого) учебник, не используя никаких фреймворков и рантайма. 

Запускать инструкции с использованием библиотек в этой среде не получится.
```asm
%include '...\win32ax.inc'

.text
  main:
    mov ax, 0xFFFF
    mov bx, 0x0F0F
    xor ax, bx
    invoke MessageBox, 0, ax, caption, MB_OK ; *типа он знает Windows API*
    invoke ExitProcess, 0

.data
  caption DB 'WINDOWS API CALL'

```
Максимум, что возможно сделать в среде это посмотреть состояние регистров после простого стресс-теста:
```assembly
mov ax, 0xFFFF
mov bx, 0x16
mov cx, ax
xor ax, bx
dec bx
sum cx
```
