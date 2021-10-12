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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x88275480, "p54_free_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1f0d48d4, "p54_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x48a03431, "p54_register_common" },
	{ 0x54cc3658, "p54_parse_eeprom" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x33774b9d, "request_firmware_direct" },
	{ 0xc3bdfe01, "p54_parse_firmware" },
	{ 0x9601035f, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x2292b333, "spi_setup" },
	{ 0x80df34dd, "p54_init_common" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x11d771a, "ieee80211_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdc8d08a6, "p54_free_common" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x3fc71731, "p54_unregister_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common,mac80211");


MODULE_INFO(srcversion, "36C9064285986BA6C0FD4E3");
