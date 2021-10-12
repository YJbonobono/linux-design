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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1749a360, "hid_add_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xd4b8ce04, "acpi_bus_get_device" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc521b8f0, "acpi_device_fix_up_power" },
	{ 0x5495392, "hid_debug" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x33e615c1, "acpi_match_device_ids" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("acpi*:ACPI0C50:*");
MODULE_ALIAS("acpi*:PNP0C50:*");

MODULE_INFO(srcversion, "45075136BA944585E43034B");
