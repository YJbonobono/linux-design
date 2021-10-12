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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x87a67f49, "single_open" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xa3b53740, "single_release" },
	{ 0xb177d101, "seq_printf" },
	{ 0x60e31fbb, "sdw_find_col_index" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcae1123a, "sdw_handle_slave_status" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x1deee061, "sdw_find_row_index" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x29361773, "complete" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "soundwire-bus");


MODULE_INFO(srcversion, "104F26E829BE5F0E69E76E7");
