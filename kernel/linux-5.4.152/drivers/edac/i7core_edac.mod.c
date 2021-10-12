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
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x9b9f3648, "pcibios_scan_specific_bus" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x8b26039f, "edac_pci_create_generic_ctl" },
	{ 0x335e4ce6, "device_add" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xc3055646, "edac_mc_add_mc_with_groups" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5da8c9f, "edac_mc_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x2f977c1d, "pci_find_next_bus" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xd65b3a91, "edac_mc_free" },
	{ 0x7da19f9, "edac_mc_del_mc" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x95317cc9, "edac_pci_release_generic_ctl" },
	{ 0xa68bc905, "edac_mc_handle_error" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000342Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A9550396CF6CF40CFF103D");
