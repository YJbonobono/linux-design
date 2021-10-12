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
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf749debc, "md5_zero_message_hash" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xfa378eeb, "crypto_dequeue_request" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x67da9f7c, "sha512_zero_message_hash" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x76eeeb0f, "sha384_zero_message_hash" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x3c8e7938, "crypto_unregister_skcipher" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x96317b23, "crypto_register_ahash" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdde68bad, "crypto_register_skcipher" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa4ec17e4, "crypto_enqueue_request" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x18d1fb87, "crypto_unregister_ahash" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x836f9b25, "crypto_unregister_aead" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x913a9509, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x3c6e6305, "firmware_request_nowarn" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x93bc49d5, "crypto_alloc_base" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x78925aca, "dmam_pool_create" },
	{ 0x82eef861, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "libdes,authenc");

MODULE_ALIAS("pci:v000010EEd00009038sv000016AEsd0000C522bc*sc*i*");

MODULE_INFO(srcversion, "DDBBB573BE96DA4860374A5");
