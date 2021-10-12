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
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x10671117, "vmbus_hvsock_device_unregister" },
	{ 0xd877c7e3, "__hv_pkt_iter_next" },
	{ 0x285d0b91, "__vsock_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0xfd052058, "vmbus_set_chn_rescind_callback" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdf83ef65, "__vsock_core_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7f52778, "hv_pkt_iter_close" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf0eeee71, "vsock_stream_has_data" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0xb95d9c63, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f84c1c9, "hv_pkt_iter_first" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0xe1b5357b, "vsock_remove_sock" },
	{ 0x4b2210b8, "vmbus_send_tl_connect_request" },
	{ 0x71cb3879, "vsock_insert_connected" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb7b5e8e6, "vsock_enqueue_accept" },
	{ 0xb1f27246, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,vsock");


MODULE_INFO(srcversion, "B5C68A87EE68538D1B4D516");
