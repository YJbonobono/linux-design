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
	{ 0x798cbd51, "sbc_attrib_attrs" },
	{ 0x2d6deef9, "sbc_get_device_type" },
	{ 0x347960c5, "target_backend_unregister" },
	{ 0xdcff8b2b, "transport_backend_register" },
	{ 0x36678cd6, "sbc_get_write_same_sectors" },
	{ 0xfa333c65, "sbc_dif_verify" },
	{ 0xbb0b890a, "iov_iter_zero" },
	{ 0xb10761cc, "vfs_iter_read" },
	{ 0x2eba0f5e, "vfs_iter_write" },
	{ 0x1862c060, "iov_iter_bvec" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xafb84c13, "blkdev_issue_discard" },
	{ 0xdb3f23b6, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7c328eb1, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8056dbb2, "vfs_fsync_range" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x959a09cf, "target_complete_cmd" },
	{ 0x641ba3eb, "sbc_parse_cdb" },
	{ 0x7bd2c122, "filp_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x257d4615, "kernel_write" },
	{ 0xc35aa4ba, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "B27B0459F288EEBD3748221");
