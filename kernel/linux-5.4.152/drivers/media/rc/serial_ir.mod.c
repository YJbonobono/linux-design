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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb2d4b247, "devm_rc_register_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77358855, "iomem_resource" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1c0c3a3e, "devm_rc_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");


MODULE_INFO(srcversion, "1895C1973DF2F06F6FD283B");
