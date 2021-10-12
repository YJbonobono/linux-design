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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd5bca0cc, "xt_hook_ops_alloc" },
	{ 0x78381292, "init_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x6195b021, "ip6t_register_table" },
	{ 0x84dfcece, "ip6t_alloc_initial_table" },
	{ 0xa5efe103, "ip6t_do_table" },
	{ 0x2ad7eb5, "ip6t_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");


MODULE_INFO(srcversion, "6DCF9503F226D11EA6B6CF3");
