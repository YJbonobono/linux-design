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
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe78fd329, "cros_ec_check_result" },
	{ 0x79b31cee, "spi_bus_unlock" },
	{ 0xa2c86dca, "spi_bus_lock" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xb8ea7809, "cros_ec_prepare_tx" },
	{ 0x3ba631f3, "spi_sync_locked" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x5af205c4, "cros_ec_register" },
	{ 0x6303b412, "sched_setscheduler_nocheck" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x41ddd40e, "kthread_create_worker" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2292b333, "spi_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7eee721c, "kthread_destroy_worker" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ee22e2b, "kthread_flush_work" },
	{ 0xa7da0c9e, "kthread_queue_work" },
	{ 0xd0a73b3c, "cros_ec_unregister" },
	{ 0x76ccb75e, "cros_ec_suspend" },
	{ 0x2c23ec3, "cros_ec_resume" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("spi:cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spiC*");

MODULE_INFO(srcversion, "2AE7F6C1C84BF8AA6927618");
