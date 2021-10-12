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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x700e6bbe, "gpiod_get_raw_value_cansleep" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "06D03C34BB58E9E3B4508E9");
