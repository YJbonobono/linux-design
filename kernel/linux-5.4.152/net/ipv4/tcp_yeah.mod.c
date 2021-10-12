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
	{ 0xc460ab43, "tcp_vegas_get_info" },
	{ 0x27d6e505, "tcp_reno_undo_cwnd" },
	{ 0xbb10aafc, "tcp_vegas_cwnd_event" },
	{ 0xea94bc5, "tcp_vegas_state" },
	{ 0xcedd80fc, "tcp_unregister_congestion_control" },
	{ 0xf5ffff79, "tcp_register_congestion_control" },
	{ 0x8f5dd481, "tcp_vegas_init" },
	{ 0xd88f7458, "tcp_cong_avoid_ai" },
	{ 0x4d7fa806, "tcp_slow_start" },
	{ 0xb7c490a4, "tcp_vegas_pkts_acked" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcp_vegas");


MODULE_INFO(srcversion, "F927DC3BDBC486D372C13F8");
