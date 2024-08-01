# x86 Intel Architecture Emulator (Эмулятор архитектуры x86)
Сразу уточню, что ничего общего с настоящей памятью и другими модулями железа, этот "шедевр" __НЕ имеет__. 
Почему? Потому что я пишу сам для себя (глупого) учебник, не используя никаких фреймворков и рантайма. 

Запускать инструкции с использованием библиотек в этой среде не получится.
```assembly
%include '...\win32ax.inc'

.text
  main:
    invoke MessageBox, 0, content, caption
ends
.data
  content db 'Message's Content'
  caption db 'WINDOWS API CALL'
ends
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
