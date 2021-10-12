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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x6214d8da, "proc_set_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x629a53c5, "make_kgid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x9166fada, "strncpy" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78381292, "init_net" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xa916b694, "strnlen" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf25ecfca, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0BAEF209167A3BD01B1ECFB");
