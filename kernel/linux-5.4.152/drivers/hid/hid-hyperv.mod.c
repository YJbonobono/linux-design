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
	{ 0xb1f27246, "vmbus_driver_unregister" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x1749a360, "hid_add_device" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7f52778, "hv_pkt_iter_close" },
	{ 0xd877c7e3, "__hv_pkt_iter_next" },
	{ 0x4f84c1c9, "hv_pkt_iter_first" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,hid");

MODULE_ALIAS("vmbus:9eb6a8cf4a5bc04cb98b8ba1a1f3f95a");

MODULE_INFO(srcversion, "9C23D371031437D529ED693");
