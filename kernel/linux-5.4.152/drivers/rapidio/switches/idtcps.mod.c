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
	{ 0x4da5b8c8, "rio_unregister_driver" },
	{ 0xce09337, "rio_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf4c91d80, "rio_mport_write_config_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0a96921, "rio_mport_read_config_32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F95471F3B59464F9D11391");
