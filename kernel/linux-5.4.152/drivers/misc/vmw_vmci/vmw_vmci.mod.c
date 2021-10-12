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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x6618707, "set_page_dirty_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xeb818c9d, "vmap" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x93082893, "misc_deregister" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd00000740sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F60D7DF44DDB58FE09F7BE7");
