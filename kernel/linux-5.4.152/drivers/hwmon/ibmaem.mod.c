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
	{ 0x98c53813, "platform_bus_type" },
	{ 0x5de4a613, "ipmi_smi_watcher_unregister" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x127df4be, "ipmi_smi_watcher_register" },
	{ 0xc5850110, "printk" },
	{ 0x34e0549f, "driver_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "ED8A36AB17313DA3DDD12AA");
