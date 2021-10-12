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
	{ 0x78381292, "init_net" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd5bca0cc, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6885f4de, "ipt_register_table" },
	{ 0x1634c0a9, "ipt_alloc_initial_table" },
	{ 0x3db0b8af, "ip_route_me_harder" },
	{ 0x6d5a7512, "ipt_do_table" },
	{ 0xb8f1bba7, "ipt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip_tables");


MODULE_INFO(srcversion, "B54814505349EE62506B486");
