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
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xe6696e18, "ebt_register_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xffee9c5, "ebt_do_table" },
	{ 0x96581d37, "ebt_unregister_table_pre_exit" },
	{ 0x741efecc, "ebt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "AC980E1C484F3368433FD26");
