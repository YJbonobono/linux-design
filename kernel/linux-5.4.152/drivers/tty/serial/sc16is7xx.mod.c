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
	{ 0xd3d70e1c, "uart_unregister_driver" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x25ca454d, "uart_register_driver" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x75c2d19f, "device_get_match_data" },
	{ 0x2292b333, "spi_setup" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x25fce484, "uart_add_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0x5d17f4dd, "uart_remove_one_port" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xfb7543f9, "sched_setscheduler" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x9d60d57f, "__kthread_init_worker" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x405ffe8c, "do_SAK" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc92dce1a, "uart_insert_char" },
	{ 0x6fb0aca0, "regmap_raw_read" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x95316016, "uart_update_timeout" },
	{ 0x2350ef4b, "uart_get_baud_rate" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3be8949a, "uart_write_wakeup" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0x66c0bbb9, "regcache_cache_bypass" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa7da0c9e, "kthread_queue_work" },
	{ 0xbdf63894, "kthread_flush_worker" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "17C090287E4439D8C84DEBE");
