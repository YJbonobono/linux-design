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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6971447a, "rtc_month_days" },
	{ 0x77358855, "iomem_resource" },
	{ 0x98438999, "rtc_add_group" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x1bee3826, "rtc_nvmem_register" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81990A761BB6D2CC03C23BD");
