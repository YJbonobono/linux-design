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
	{ 0x7da19f9, "edac_mc_del_mc" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xd65b3a91, "edac_mc_free" },
	{ 0xc3055646, "edac_mc_add_mc_with_groups" },
	{ 0x5da8c9f, "edac_mc_alloc" },
	{ 0x15e30e24, "pci_find_bus" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0xa68bc905, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa82ac0d5, "pci_bus_write_config_byte" },
	{ 0x528251a, "pci_bus_read_config_dword" },
	{ 0x7f58023f, "pci_bus_write_config_word" },
	{ 0x87c8e040, "pci_bus_write_config_dword" },
	{ 0x59210f73, "pci_bus_read_config_word" },
	{ 0xf2d8f10f, "pci_bus_read_config_byte" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");

MODULE_INFO(srcversion, "9BED4343D282B4FC7426B3F");
