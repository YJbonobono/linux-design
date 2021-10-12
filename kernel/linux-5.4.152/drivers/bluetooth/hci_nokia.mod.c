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
	{ 0xcc3eff2e, "__serdev_device_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88084d02, "btbcm_set_bdaddr" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0x9601035f, "request_firmware" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc0171751, "hci_uart_tx_wakeup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x5ac7efb1, "serdev_device_get_tiocm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92af78dd, "serdev_device_set_baudrate" },
	{ 0x112070bf, "serdev_device_write_flush" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9ca264f1, "serdev_device_set_flow_control" },
	{ 0x6c0d2ed6, "serdev_device_set_tiocm" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1fa63a52, "hci_uart_register_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29361773, "complete" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x407b9ca8, "h4_recv_buf" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x581cf443, "skb_push" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x37e8a607, "serdev_device_wait_until_sent" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x4539ee40, "hci_uart_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btbcm,bluetooth,hci_uart");


MODULE_INFO(srcversion, "FE973C62BF499791BE2C2A4");
