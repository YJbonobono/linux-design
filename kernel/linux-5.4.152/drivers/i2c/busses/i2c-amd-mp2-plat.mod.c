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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0xa6bee8ce, "amd_mp2_rw" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0xfed12183, "i2c_acpi_find_bus_speed" },
	{ 0x9ff62009, "device_link_add" },
	{ 0x8ebc5238, "amd_mp2_register_cb" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9f25139, "amd_mp2_find_device" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x52ac1c39, "amd_mp2_unregister_cb" },
	{ 0xeb5b2d03, "amd_mp2_bus_enable_set" },
	{ 0x89a615a7, "amd_mp2_rw_timeout" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3b40f0d7, "amd_mp2_process_event" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-amd-mp2-pci");

MODULE_ALIAS("acpi*:AMDI0011:*");

MODULE_INFO(srcversion, "50A5CC89DC227602FE519FD");
