cmd_drivers/net/wireless/marvell/libertas_tf/libertas_tf.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/marvell/libertas_tf/libertas_tf.ko drivers/net/wireless/marvell/libertas_tf/libertas_tf.o drivers/net/wireless/marvell/libertas_tf/libertas_tf.mod.o;  true
