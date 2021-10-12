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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x22a77893, "dma_async_tx_descriptor_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5fc3eb3a, "dma_async_device_register" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x8df0b0e5, "dmaengine_unmap_put" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8eb423bd, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x524187b2, "device_get_dma_attr" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x39c7a099, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3bee70e, "pci_select_bars" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x323ddd2a, "dma_async_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3c6e6305, "firmware_request_nowarn" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x93082893, "misc_deregister" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "839C085632B0DEE709903F9");
