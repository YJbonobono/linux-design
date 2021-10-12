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
	{ 0x3e3728ff, "agp_generic_type_to_mask_type" },
	{ 0x1c5eef13, "agp_generic_destroy_pages" },
	{ 0x5be3e39, "agp_generic_destroy_page" },
	{ 0x2b860edb, "agp_generic_alloc_pages" },
	{ 0x6b8f4c9d, "agp_generic_alloc_page" },
	{ 0xef4a326c, "agp_generic_free_by_type" },
	{ 0x45d0d9ca, "agp_generic_alloc_by_type" },
	{ 0x6960b8d5, "agp_generic_remove_memory" },
	{ 0xfe5f6d85, "agp_generic_insert_memory" },
	{ 0xe0efc2dd, "agp_generic_free_gatt_table" },
	{ 0x493553bf, "agp_generic_create_gatt_table" },
	{ 0xa4d4f0e6, "global_cache_flush" },
	{ 0x7baf5acd, "agp_generic_mask_memory" },
	{ 0x9e7034b4, "agp_generic_enable" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x7538b132, "agp_off" },
	{ 0xbabb5c6c, "agp_add_bridge" },
	{ 0xd3968b11, "agp3_generic_tlbflush" },
	{ 0xc2424641, "agp3_generic_cleanup" },
	{ 0xde9b17ed, "agp3_generic_fetch_size" },
	{ 0x4b085dbf, "agp3_generic_configure" },
	{ 0x6d58f69e, "agp3_generic_sizes" },
	{ 0xa592a3cd, "get_agp_version" },
	{ 0x65d660c6, "agp_alloc_bridge" },
	{ 0xf9a482f9, "msleep" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0xfc97b764, "agp_collect_device_status" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6a404501, "agp_put_bridge" },
	{ 0x97181aed, "agp_remove_bridge" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xf43ccbff, "pcibios_resource_to_bus" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x7a7d3024, "agp_bridge" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "0CD5490997BD7B85310A45E");
