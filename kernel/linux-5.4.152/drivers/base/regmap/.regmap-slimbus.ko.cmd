cmd_drivers/base/regmap/regmap-slimbus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/base/regmap/regmap-slimbus.ko drivers/base/regmap/regmap-slimbus.o drivers/base/regmap/regmap-slimbus.mod.o;  true
