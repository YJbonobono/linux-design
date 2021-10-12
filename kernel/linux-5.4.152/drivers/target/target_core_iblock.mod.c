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
	{ 0x44458f85, "sg_miter_start" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x8772d101, "bio_integrity_add_page" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0x520f7e7e, "bio_integrity_alloc" },
	{ 0x9604bb88, "bioset_integrity_create" },
	{ 0x7c328eb1, "target_configure_unmap_from_queue" },
	{ 0xbf36d05e, "blkdev_get_by_path" },
	{ 0x582aac6d, "bioset_init" },
	{ 0x3ef358d4, "bioset_exit" },
	{ 0xc424e29e, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe4b54517, "bdevname" },
	{ 0x31eb008f, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x36678cd6, "sbc_get_write_same_sectors" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x994dbb68, "submit_bio" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x4122186, "bio_put" },
	{ 0x959a09cf, "target_complete_cmd" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xafb84c13, "blkdev_issue_discard" },
	{ 0xdb3f23b6, "target_to_linux_sector" },
	{ 0x641ba3eb, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "9A90C28917BC953C4467E04");
