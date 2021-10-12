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
	{ 0x35da62ed, "dw8250_setup_port" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x1526e183, "dw_dma_probe" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x573a3736, "dw_dma_remove" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3b81cbf, "serial8250_do_set_termios" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6109f84, "serial8250_do_get_mctrl" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B96sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B97sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B99sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD9B9F46E67D6A98910FD17");
