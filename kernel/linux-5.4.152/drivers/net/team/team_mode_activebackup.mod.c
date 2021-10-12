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
	{ 0xf5bcff7e, "team_mode_unregister" },
	{ 0xae28e132, "team_mode_register" },
	{ 0x64cd0b1e, "netpoll_send_skb_on_dev" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xcf4e7ac2, "team_option_inst_set_change" },
	{ 0x4d3ea097, "team_options_register" },
	{ 0xb3f2bd27, "team_options_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "team");


MODULE_INFO(srcversion, "AE8329CFED5E18B3CA5E4E6");
