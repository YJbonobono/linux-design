cmd_arch/x86/kernel/cpu/mce/mce-inject.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o arch/x86/kernel/cpu/mce/mce-inject.o arch/x86/kernel/cpu/mce/inject.o
