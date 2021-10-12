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
	{ 0x3c350e98, "dsa_tag_drivers_unregister" },
	{ 0x46edaba5, "dsa_tag_drivers_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb0e602eb, "memmove" },
	{ 0x581cf443, "skb_push" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "4EAD569B67025339CF98393");
