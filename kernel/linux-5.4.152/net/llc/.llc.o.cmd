cmd_net/llc/llc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/llc/llc.o net/llc/llc_core.o net/llc/llc_input.o net/llc/llc_output.o
