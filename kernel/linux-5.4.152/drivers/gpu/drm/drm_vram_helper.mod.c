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
	{ 0x7a9f3b51, "ttm_pool_populate" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x267c62a8, "ttm_bo_eviction_valuable" },
	{ 0xa8bd7848, "ttm_tt_fini" },
	{ 0x72d81fef, "ttm_bo_put" },
	{ 0x4b1c600f, "ttm_bo_move_to_lru_tail" },
	{ 0xe8b6e396, "ttm_bo_validate" },
	{ 0xf0027b9c, "ttm_bo_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4110938b, "ttm_bo_add_to_lru" },
	{ 0x87ca1281, "drm_gem_handle_create" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0x142a57c3, "ttm_bo_kmap" },
	{ 0x4ae472f4, "ttm_tt_init" },
	{ 0xde039a55, "drm_gem_object_release" },
	{ 0x2419583d, "ttm_bo_dma_acc_size" },
	{ 0xfbe6c70c, "ttm_bo_init_mm" },
	{ 0x9b00b1f7, "ttm_bo_device_init" },
	{ 0xbb3effd8, "ttm_bo_del_sub_from_lru" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb84f6412, "ttm_bo_kunmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d570964, "drm_gem_object_init" },
	{ 0x684b4299, "ttm_bo_device_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2e6f7f4, "ww_mutex_unlock" },
	{ 0xb17352cf, "ttm_bo_manager_func" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x1dfbc74, "ttm_pool_unpopulate" },
	{ 0xd09bc71f, "ww_mutex_lock_interruptible" },
	{ 0x95525e5e, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "ttm,drm");


MODULE_INFO(srcversion, "86A60583560940A8EB4ED7C");
