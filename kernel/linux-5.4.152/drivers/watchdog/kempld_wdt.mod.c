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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc60c4638, "kempld_read32" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x99db877b, "kempld_write32" },
	{ 0xd5f6f7b4, "kempld_release_mutex" },
	{ 0x35b152c9, "kempld_write8" },
	{ 0x1cd03d48, "kempld_read8" },
	{ 0x2b980403, "kempld_get_mutex" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kempld-core");


MODULE_INFO(srcversion, "F6E6AB43DED91041F55E5DA");
