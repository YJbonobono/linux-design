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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf6b97136, "gasket_sysfs_get_device_data" },
	{ 0xd7df1765, "gasket_register_device" },
	{ 0xc225208c, "gasket_page_table_num_entries" },
	{ 0x8b1fe483, "gasket_pci_remove_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xa4cbc5f8, "gasket_sysfs_put_device_data" },
	{ 0x8c92da47, "gasket_page_table_num_simple_entries" },
	{ 0x80509d11, "gasket_sysfs_get_attr" },
	{ 0xe4b6ad2d, "gasket_enable_device" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdf388d98, "gasket_reset_nolock" },
	{ 0x64cca09d, "gasket_pci_add_device" },
	{ 0x63ee8887, "gasket_sysfs_create_entries" },
	{ 0xa9df2dc4, "gasket_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x38c3d415, "gasket_page_table_num_active_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf0e66895, "gasket_sysfs_put_attr" },
	{ 0xca927446, "gasket_disable_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x2b63ce16, "gasket_wait_with_reschedule" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "gasket");

MODULE_ALIAS("pci:v00001AC1d0000089Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0FAE5FC08566DD27355C966");
