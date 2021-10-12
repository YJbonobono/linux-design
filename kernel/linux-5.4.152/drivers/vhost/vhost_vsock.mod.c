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
	{ 0xbbaf7558, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf2d625d, "virtio_transport_set_buffer_size" },
	{ 0x583be977, "virtio_transport_destruct" },
	{ 0xa1fc2508, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x67eeb798, "vhost_dev_check_owner" },
	{ 0xe7d4345d, "virtio_transport_get_max_buffer_size" },
	{ 0xcb95ab7e, "virtio_transport_notify_send_pre_block" },
	{ 0x512afde8, "virtio_transport_stream_has_space" },
	{ 0xf50cef70, "_copy_from_iter" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3d38b994, "virtio_transport_notify_poll_in" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfa87dd53, "virtio_transport_do_socket_init" },
	{ 0x83397ecb, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdf83ef65, "__vsock_core_init" },
	{ 0x5da63c61, "vhost_dev_cleanup" },
	{ 0xc28bafa5, "vhost_log_access_ok" },
	{ 0x43843c83, "virtio_transport_deliver_tap_pkt" },
	{ 0xa582b055, "virtio_transport_set_min_buffer_size" },
	{ 0xcca42041, "vhost_enable_notify" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x9bd6404b, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x3ec45a5b, "virtio_transport_notify_poll_out" },
	{ 0xbfb68b04, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb7db7b7d, "vhost_disable_notify" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x7849b3be, "vhost_signal" },
	{ 0x6bcedaa8, "vhost_dev_ioctl" },
	{ 0x21f1145b, "virtio_transport_stream_dequeue" },
	{ 0x43851c23, "virtio_transport_stream_enqueue" },
	{ 0x3263c0f9, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48817f5, "vhost_get_vq_desc" },
	{ 0x6b6186db, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xf02dc0eb, "vhost_work_queue" },
	{ 0xdba543f3, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xffe478f2, "virtio_transport_get_buffer_size" },
	{ 0xe6a87915, "vhost_poll_queue" },
	{ 0x3ec9f602, "virtio_transport_dgram_dequeue" },
	{ 0x56563bbf, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2404e57f, "vhost_exceeds_weight" },
	{ 0xdc80961c, "virtio_transport_shutdown" },
	{ 0x998ee9f7, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d2b9164, "vhost_vq_init_access" },
	{ 0x335800fc, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x84b29694, "virtio_transport_free_pkt" },
	{ 0x6d2dd3f, "virtio_transport_dgram_bind" },
	{ 0x39c448cd, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbd16c8, "virtio_transport_stream_rcvhiwat" },
	{ 0x11793b0a, "virtio_transport_set_max_buffer_size" },
	{ 0xd6fa446, "vhost_dev_init" },
	{ 0x91ba5c52, "vhost_dev_stop" },
	{ 0xf37e1fef, "vhost_vq_access_ok" },
	{ 0x2fef3eeb, "virtio_transport_stream_has_data" },
	{ 0xd9ed5761, "virtio_transport_connect" },
	{ 0xde190610, "vsock_for_each_connected_socket" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2bbdd369, "vhost_vring_ioctl" },
	{ 0x93082893, "misc_deregister" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0xcab23cd9, "virtio_transport_release" },
	{ 0x25b85df4, "virtio_transport_get_min_buffer_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6e45ef0d, "virtio_transport_notify_recv_init" },
	{ 0x73a1f550, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "195134F3A37C9E869878627");
