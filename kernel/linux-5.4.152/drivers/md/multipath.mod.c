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
	{ 0x38e46431, "mempool_exit" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdfd19a2d, "bio_devname" },
	{ 0xb5126fb6, "md_check_recovery" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3f7fe076, "unregister_md_personality" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x91b42f02, "md_register_thread" },
	{ 0x486d7fab, "bio_init" },
	{ 0x51d5cd98, "md_flush_request" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xaa71e4c3, "disk_stack_limits" },
	{ 0x1208a414, "seq_putc" },
	{ 0x8cdc1369, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x88bc1a00, "md_integrity_add_rdev" },
	{ 0x284e5c6, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xe4b54517, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7302df31, "md_set_array_sectors" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xb3528552, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcea5ff79, "__bio_clone_fast" },
	{ 0x6222ef14, "md_error" },
	{ 0x6353f69c, "md_check_no_bitmap" },
	{ 0xa343f5ca, "md_integrity_register" },
	{ 0xbd74d856, "register_md_personality" },
	{ 0xd0832e10, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24082A9E4533F660D1EDE85");
