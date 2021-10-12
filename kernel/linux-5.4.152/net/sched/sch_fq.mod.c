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
	{ 0x608833c0, "unregister_qdisc" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x95d33dea, "qdisc_watchdog_init_clockid" },
	{ 0xc5850110, "printk" },
	{ 0xf411afa6, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdeb8a84f, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa7ce8d16, "qdisc_watchdog_schedule_ns" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xb7367557, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x1387ccaf, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4855dc76, "rtnl_kfree_skbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED6ADC696180845D6B40682");
