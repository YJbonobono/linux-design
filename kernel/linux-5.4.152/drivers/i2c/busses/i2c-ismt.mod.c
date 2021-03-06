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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F15sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "433297248DDDCC08D9F1203");
