cmd_net/9p/9pnet.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/9p/9pnet.o net/9p/mod.o net/9p/client.o net/9p/error.o net/9p/protocol.o net/9p/trans_fd.o net/9p/trans_common.o
