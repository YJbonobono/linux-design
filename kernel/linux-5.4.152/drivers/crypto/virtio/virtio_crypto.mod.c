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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x38ba8a6c, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5de76c, "crypto_engine_alloc_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb66105b8, "virtio_break_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x20167470, "crypto_engine_start" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x4ea82c40, "crypto_finalize_ablkcipher_request" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdbdee7ce, "crypto_transfer_ablkcipher_request_to_engine" },
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x34f50ef4, "crypto_engine_exit" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef11476a, "virtqueue_is_broken" },
	{ 0xd2f1a79, "virtqueue_detach_unused_buf" },
	{ 0x829589e5, "crypto_unregister_alg" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x3b78d396, "register_virtio_driver" },
};

MODULE_INFO(depends, "crypto_engine");

MODULE_ALIAS("virtio:d00000014v*");

MODULE_INFO(srcversion, "AA8199DEC57616E25370B76");
