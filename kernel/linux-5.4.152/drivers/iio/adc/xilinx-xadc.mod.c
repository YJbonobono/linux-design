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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x29361773, "complete" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");

MODULE_ALIAS("of:N*T*Cxlnx,zynq-xadc-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-xadc-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-xadc-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-xadc-1.00.aC*");

MODULE_INFO(srcversion, "16B5002138741E47DFA5890");
