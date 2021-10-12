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
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xa68bc905, "edac_mc_handle_error" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc3055646, "edac_mc_add_mc_with_groups" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x5da8c9f, "edac_mc_alloc" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xd65b3a91, "edac_mc_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x7da19f9, "edac_mc_del_mc" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001918sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005918sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003EC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003EC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003ECAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F7145E6F4849B7C5C3AA26C");
