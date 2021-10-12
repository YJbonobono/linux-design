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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0x3ba631f3, "spi_sync_locked" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa2c86dca, "spi_bus_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xa8bfc259, "iio_validate_scan_mask_onehot" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0x79b31cee, "spi_bus_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "EE2D9713A1097E083035497");
