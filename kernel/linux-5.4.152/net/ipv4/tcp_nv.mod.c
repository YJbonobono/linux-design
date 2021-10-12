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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x27d6e505, "tcp_reno_undo_cwnd" },
	{ 0xcedd80fc, "tcp_unregister_congestion_control" },
	{ 0xf5ffff79, "tcp_register_congestion_control" },
	{ 0x35be373f, "__cgroup_bpf_run_filter_sock_ops" },
	{ 0xf4b2b86e, "cgroup_bpf_enabled_key" },
	{ 0x4d7fa806, "tcp_slow_start" },
	{ 0xd88f7458, "tcp_cong_avoid_ai" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C248A54DF9BF8CD23E45734");
