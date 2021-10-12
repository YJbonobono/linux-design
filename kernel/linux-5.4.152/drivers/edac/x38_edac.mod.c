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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x5a470173, "pci_dev_put" },
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
	{ 0x5da8c9f, "edac_mc_alloc" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xd65b3a91, "edac_mc_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x7da19f9, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000029E0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A3DDA5E53D0322D963C0C8C");
