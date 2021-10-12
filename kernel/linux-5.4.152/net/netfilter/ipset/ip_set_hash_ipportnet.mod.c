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
	{ 0x36b4fa11, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x296cf97f, "ip_set_type_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdff5bd82, "ip_set_match_extensions" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xba3b073f, "ip_set_elem_len" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x55ad01ff, "ip_set_put_extensions" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc92d05d0, "ip_set_extensions" },
	{ 0x5da06964, "ip_set_get_ip6_port" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x6779609c, "ip_set_get_ip4_port" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x22d966c6, "ip_set_range_to_cidr" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0x4fcff9ce, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "7909A5DFAAD0537AA862BA8");
