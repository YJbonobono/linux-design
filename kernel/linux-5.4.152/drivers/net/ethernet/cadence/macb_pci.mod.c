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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xebdb1357, "clk_register_fixed_rate" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017CDd0000E007sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B91342AEF7A9F1FD33FFE15");
