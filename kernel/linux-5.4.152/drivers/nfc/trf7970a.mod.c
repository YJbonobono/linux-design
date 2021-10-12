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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x756a2b9e, "nfc_alloc_recv_skb" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdd75e18, "nfc_digital_register_device" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xf3900a5a, "nfc_digital_allocate_device" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x688b1b9e, "devm_gpiod_get_index_optional" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0x2292b333, "spi_setup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6769c971, "nfc_digital_free_device" },
	{ 0x8dd21092, "nfc_digital_unregister_device" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b553753, "skb_pull" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");

MODULE_INFO(srcversion, "1D42F87F197EEB48234EE3E");
