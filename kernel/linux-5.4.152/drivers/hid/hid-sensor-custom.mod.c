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
	{ 0x13caabab, "noop_llseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8eb423bd, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x159cc9b6, "sensor_hub_register_callback" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf9575308, "stream_open" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e5ce8ed, "sensor_hub_get_feature" },
	{ 0x21b3305a, "sensor_hub_input_attr_get_raw_value" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x562b46b0, "sensor_hub_remove_callback" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x93082893, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3a40c53f, "sensor_hub_device_open" },
	{ 0xa620df52, "sensor_hub_device_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x767e5feb, "sensor_hub_set_feature" },
	{ 0xf04c8e7f, "hid_sensor_get_usage_index" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-hub");

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");

MODULE_INFO(srcversion, "E72EBFC4C4D338D9FAECBB0");
