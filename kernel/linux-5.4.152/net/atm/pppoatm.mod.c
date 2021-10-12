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
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0xb832485a, "consume_skb" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x581cf443, "skb_push" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x614ffd7f, "vcc_process_recv_queue" },
	{ 0x6b347276, "__module_get" },
	{ 0xcf39e1e6, "ppp_register_channel" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x235d07de, "ppp_unit_number" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6a455cb3, "ppp_channel_index" },
	{ 0x5710ff65, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xde6547e8, "ppp_input_error" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x9b553753, "skb_pull" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa2eda5a, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x18255e23, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");
