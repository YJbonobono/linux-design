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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x63877bb5, "gnttab_map_refs" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xc7dedd80, "vm_map_pages_zero" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x5c100658, "gnttab_alloc_pages" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdd9b682e, "dma_buf_detach" },
	{ 0x4b931968, "xen_features" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0xef380228, "mmu_notifier_register" },
	{ 0x6618707, "set_page_dirty_lock" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0xdc1d8412, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xec1964e8, "mmput" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xfd94814e, "complete_all" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9312d80e, "evtchn_put" },
	{ 0x8eb423bd, "misc_register" },
	{ 0xb91bca0b, "gnttab_free_pages" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe03d4223, "get_task_mm" },
	{ 0x5916aa17, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x551d6165, "dma_buf_fd" },
	{ 0x9ba41f06, "apply_to_page_range" },
	{ 0xa95befbe, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c519ada, "dma_buf_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x9688b217, "gnttab_batch_copy" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x4f075465, "dma_buf_unmap_attachment" },
	{ 0xa164179, "fput" },
	{ 0x8e2a21a5, "gnttab_dma_alloc_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c16c081, "find_vma" },
	{ 0x4f4ffc8, "dma_buf_map_attachment" },
	{ 0x6e9cda46, "dma_buf_export" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3ff122ff, "dma_buf_attach" },
	{ 0xf24a328b, "gnttab_dma_free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf5785b42, "evtchn_get" },
	{ 0xa14e96ba, "sg_alloc_table_from_pages" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x3165daa3, "arbitrary_virt_to_machine" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x93082893, "misc_deregister" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "975EE8B4F330F9927D5427A");
