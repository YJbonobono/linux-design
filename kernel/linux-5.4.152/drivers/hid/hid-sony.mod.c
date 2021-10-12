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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x93c25f35, "hid_validate_values" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0xd6f06d40, "power_supply_powers" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe0851549, "__hid_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0xf8c679e2, "input_event" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "9626F1EFE0246629B626B17");
