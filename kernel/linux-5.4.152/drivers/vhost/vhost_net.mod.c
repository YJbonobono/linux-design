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
	{ 0x8f18c0d5, "vhost_vq_avail_empty" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x67eeb798, "vhost_dev_check_owner" },
	{ 0xff37088e, "vq_meta_prefetch" },
	{ 0xabbc409d, "vhost_poll_start" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf963cd6, "vhost_chr_poll" },
	{ 0xa6841fb6, "tun_ptr_to_xdp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5da63c61, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc28bafa5, "vhost_log_access_ok" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x181f4f1a, "__page_frag_cache_drain" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xf00790fb, "copy_page_from_iter" },
	{ 0xcca42041, "vhost_enable_notify" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x726e59e2, "vhost_dev_has_owner" },
	{ 0xbfb68b04, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb7db7b7d, "vhost_disable_notify" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x6bcedaa8, "vhost_dev_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4b67a038, "vhost_log_write" },
	{ 0xe668cd3b, "vhost_chr_read_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48817f5, "vhost_get_vq_desc" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x21c59717, "vhost_chr_write_iter" },
	{ 0xbaa0fc86, "vhost_dev_set_owner" },
	{ 0xde0de820, "vhost_add_used_and_signal_n" },
	{ 0x4b54fc7f, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa164179, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x37e95f64, "vhost_add_used_and_signal" },
	{ 0xd5a18fe1, "vhost_discard_vq_desc" },
	{ 0x2ebcf5e8, "tun_get_socket" },
	{ 0xe6a87915, "vhost_poll_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2404e57f, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2cc6d529, "tun_get_tx_ring" },
	{ 0x3f91d6e8, "vhost_poll_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d2b9164, "vhost_vq_init_access" },
	{ 0xe0ee076c, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39c448cd, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c3cf4c2, "vhost_dev_reset_owner" },
	{ 0xd8602b6a, "tun_is_xdp_frame" },
	{ 0xa1fc9b76, "vhost_has_work" },
	{ 0xd6fa446, "vhost_dev_init" },
	{ 0x91896b1c, "fget" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0xa1aec928, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91ba5c52, "vhost_dev_stop" },
	{ 0xf37e1fef, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0xc19922a8, "tap_get_ptr_ring" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2bbdd369, "vhost_vring_ioctl" },
	{ 0x93082893, "misc_deregister" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x71dc307b, "__put_page" },
	{ 0x189dbb59, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "vhost,tap");


MODULE_INFO(srcversion, "D2B5BA4A1F872BB7B8E9E95");
