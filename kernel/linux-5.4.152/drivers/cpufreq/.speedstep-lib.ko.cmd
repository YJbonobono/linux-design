cmd_drivers/cpufreq/speedstep-lib.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/cpufreq/speedstep-lib.ko drivers/cpufreq/speedstep-lib.o drivers/cpufreq/speedstep-lib.mod.o;  true
