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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9951c67d, "_proc_mkdir" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xa39d69af, "proc_create_net_single" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x1208a414, "seq_putc" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xec60789c, "proto_register" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc82d7720, "sock_register" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B93EA8EC80E94FB3BC275F3");
