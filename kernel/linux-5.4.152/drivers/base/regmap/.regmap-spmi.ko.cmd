cmd_drivers/base/regmap/regmap-spmi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/base/regmap/regmap-spmi.ko drivers/base/regmap/regmap-spmi.o drivers/base/regmap/regmap-spmi.mod.o;  true
