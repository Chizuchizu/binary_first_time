global main

main:
  push 0x00006948
  mov eax, 0x04
  mov ebx, 0x01
  mov ecx, esp
  mov edx, 0x04
  int 0x80
