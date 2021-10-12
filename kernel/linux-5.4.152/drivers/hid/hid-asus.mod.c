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
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0xf8c679e2, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xd6f06d40, "power_supply_powers" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x57c46ceb, "asus_wmi_evaluate_method" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,asus-wmi");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v00000B05p0000183D");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");

MODULE_INFO(srcversion, "8C918BC3330A3F1EE932840");
