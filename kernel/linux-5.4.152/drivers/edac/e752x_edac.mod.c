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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8b26039f, "edac_pci_create_generic_ctl" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xc3055646, "edac_mc_add_mc_with_groups" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x7e29d54c, "pci_scan_single_device" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x5da8c9f, "edac_mc_alloc" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xa68bc905, "edac_mc_handle_error" },
	{ 0x5d8c7507, "edac_mc_find_csrow_by_page" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xc5850110, "printk" },
	{ 0xd65b3a91, "edac_mc_free" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x7da19f9, "edac_mc_del_mc" },
	{ 0x95317cc9, "edac_pci_release_generic_ctl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003590sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000359Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000035B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F92414C434A5AC60A2C1AE7");
