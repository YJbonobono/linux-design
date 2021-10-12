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
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xb07634c6, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x875ff07a, "xt_register_target" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd623a788, "nf_ct_netns_get" },
	{ 0x87d372fa, "seq_release" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xf4c82ea9, "nf_ct_netns_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0xd5548c70, "nf_register_net_hook" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd80065df, "seq_open" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf88db369, "nf_unregister_net_hook" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9bd1bf27, "proc_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x1208a414, "seq_putc" },
	{ 0xb177d101, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0x3331bd4f, "dev_mc_add" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x90c5fce9, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "CE25B1F6189CD89DA7E9946");
