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
	{ 0x608833c0, "unregister_qdisc" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4ecee62a, "__neigh_event_send" },
	{ 0x90605836, "__neigh_create" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xee5296e0, "neigh_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb47c4c3, "noop_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x9afcd044, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1428F5793E742EBA1F76FB");
