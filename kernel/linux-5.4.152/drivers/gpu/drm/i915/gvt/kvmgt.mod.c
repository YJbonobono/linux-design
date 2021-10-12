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
	{ 0x6fbc5503, "intel_gvt_unregister_hypervisor" },
	{ 0x57cb9c8a, "intel_gvt_register_hypervisor" },
	{ 0xa83c6a93, "kvm_slot_page_track_add_page" },
	{ 0x7d92d822, "gfn_to_memslot" },
	{ 0xec1964e8, "mmput" },
	{ 0x15f4a35b, "unuse_mm" },
	{ 0xfef28022, "use_mm" },
	{ 0x6b9bd7d6, "kvm_write_guest" },
	{ 0xd532aaf3, "kvm_read_guest" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xd571ebc0, "kvm_slot_page_track_remove_page" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x465c9e8b, "kvm_is_visible_gfn" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb53a16d5, "vfio_pin_pages" },
	{ 0x999e8297, "vfree" },
	{ 0xece784c2, "rb_first" },
	{ 0x3a55f3fd, "kvm_put_kvm" },
	{ 0x89b4c8ea, "kvm_page_track_unregister_notifier" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xceda3a08, "mdev_from_dev" },
	{ 0x1b19717c, "debugfs_create_ulong" },
	{ 0xaedb9c69, "kvm_page_track_register_notifier" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xacd5dba4, "kvm_get_kvm" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6006847, "current_task" },
	{ 0xcfe37a74, "vfio_unregister_notifier" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x3fd157fa, "vfio_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x6d49c539, "gfn_to_pfn" },
	{ 0x544df65, "vfio_unpin_pages" },
	{ 0x8b1c41b1, "vfio_device_get_from_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x500a992c, "mdev_dev" },
	{ 0x37c5519a, "mdev_set_drvdata" },
	{ 0x63fe75bf, "mdev_parent_dev" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0xb37cc637, "mdev_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a48d60c, "mdev_register_device" },
	{ 0x58ae0cca, "mdev_unregister_device" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc5850110, "printk" },
	{ 0xd13f9985, "drm_edid_block_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0x969c73d9, "vfio_device_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i915,kvm,mdev,drm");


MODULE_INFO(srcversion, "7FA62594EDA852B0E1BEEC8");
