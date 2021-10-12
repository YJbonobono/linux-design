#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x2c7a675f, "serial8250_register_8250_port" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb3b81cbf, "serial8250_do_set_termios" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xf189660, "hsu_dma_probe" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x52dae15c, "serial8250_rx_dma_flush" },
	{ 0x430afe9c, "hsu_dma_do_irq" },
	{ 0x75d188d2, "hsu_dma_get_status" },
	{ 0xef73507a, "serial8250_handle_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb52e3450, "hsu_dma_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hsu_dma");

MODULE_ALIAS("pci:v00008086d0000081Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000081Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000081Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019D8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "213AB51B4AC796B27D7F641");
