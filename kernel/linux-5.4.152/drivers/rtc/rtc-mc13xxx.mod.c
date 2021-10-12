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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0x47daab41, "mc13xxx_irq_request" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x52c5ccc5, "mc13xxx_irq_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd53fcec0, "mc13xxx_reg_read" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x8aa59303, "mc13xxx_reg_write" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xccd39e24, "mc13xxx_irq_free" },
	{ 0xb8298a67, "mc13xxx_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a8f5df9, "mc13xxx_irq_unmask" },
	{ 0xe37f53b5, "mc13xxx_irq_mask" },
	{ 0x53a1b95c, "mc13xxx_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");

MODULE_INFO(srcversion, "90B6B9FFBEC270CA9972F13");
