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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbbaf7558, "virtio_transport_recv_pkt" },
	{ 0xaf2d625d, "virtio_transport_set_buffer_size" },
	{ 0x583be977, "virtio_transport_destruct" },
	{ 0xe7d4345d, "virtio_transport_get_max_buffer_size" },
	{ 0xcb95ab7e, "virtio_transport_notify_send_pre_block" },
	{ 0x512afde8, "virtio_transport_stream_has_space" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3d38b994, "virtio_transport_notify_poll_in" },
	{ 0xfa87dd53, "virtio_transport_do_socket_init" },
	{ 0xfbfc3ba, "virtqueue_add_inbuf" },
	{ 0x83397ecb, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0xdf83ef65, "__vsock_core_init" },
	{ 0x43843c83, "virtio_transport_deliver_tap_pkt" },
	{ 0xa582b055, "virtio_transport_set_min_buffer_size" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x9bd6404b, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x3ec45a5b, "virtio_transport_notify_poll_out" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x21f1145b, "virtio_transport_stream_dequeue" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x43851c23, "virtio_transport_stream_enqueue" },
	{ 0x3263c0f9, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b6186db, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xdba543f3, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xab2ad981, "virtqueue_get_vring_size" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xffe478f2, "virtio_transport_get_buffer_size" },
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0x3ec9f602, "virtio_transport_dgram_dequeue" },
	{ 0x56563bbf, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc80961c, "virtio_transport_shutdown" },
	{ 0x998ee9f7, "virtio_transport_dgram_enqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x335800fc, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x84b29694, "virtio_transport_free_pkt" },
	{ 0x6d2dd3f, "virtio_transport_dgram_bind" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbd16c8, "virtio_transport_stream_rcvhiwat" },
	{ 0x11793b0a, "virtio_transport_set_max_buffer_size" },
	{ 0x2fef3eeb, "virtio_transport_stream_has_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd9ed5761, "virtio_transport_connect" },
	{ 0xd2f1a79, "virtqueue_detach_unused_buf" },
	{ 0xde190610, "vsock_for_each_connected_socket" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcab23cd9, "virtio_transport_release" },
	{ 0x25b85df4, "virtio_transport_get_min_buffer_size" },
	{ 0x6e45ef0d, "virtio_transport_notify_recv_init" },
	{ 0x3b78d396, "register_virtio_driver" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "73A1C1F9F2A0DB532E1F782");
