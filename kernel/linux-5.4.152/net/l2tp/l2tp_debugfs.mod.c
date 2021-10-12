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
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x958f25db, "l2tp_session_free" },
	{ 0xde398eea, "l2tp_session_get_nth" },
	{ 0x3c916c7c, "l2tp_tunnel_free" },
	{ 0xf1d29a30, "l2tp_tunnel_get_nth" },
	{ 0x87d372fa, "seq_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb177d101, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x596c50d1, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd80065df, "seq_open" },
	{ 0x587f784a, "get_net_ns_by_pid" },
	{ 0x6006847, "current_task" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0D249994897D4CD1857E1B3");
