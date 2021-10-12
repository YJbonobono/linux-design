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
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x55d56a61, "__serio_register_port" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7f52778, "hv_pkt_iter_close" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x49c89b60, "serio_interrupt" },
	{ 0xd877c7e3, "__hv_pkt_iter_next" },
	{ 0x29361773, "complete" },
	{ 0x4f84c1c9, "hv_pkt_iter_first" },
	{ 0x37a0cba, "kfree" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0xcdb4aa41, "serio_unregister_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:6dad12f9172bea48bd65f927a61c7684");

MODULE_INFO(srcversion, "8BF8F161BB9831DCE892510");
