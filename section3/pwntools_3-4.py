import pwn

p = pwn.process("./a.out")
# stdin
p.sendline("\x01\x02\x03\x04\x05")
# get stdout
print(p.recvline())
