cmd_sound/soc/sof/intel/snd-sof-intel-ipc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/soc/sof/intel/snd-sof-intel-ipc.ko sound/soc/sof/intel/snd-sof-intel-ipc.o sound/soc/sof/intel/snd-sof-intel-ipc.mod.o;  true
