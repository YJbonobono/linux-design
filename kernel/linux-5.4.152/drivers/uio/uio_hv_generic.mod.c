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
	{ 0xb1f27246, "vmbus_driver_unregister" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xb4fe5e64, "__uio_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c0fae1d, "vmbus_establish_gpadl" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa2c786a5, "vmbus_connection" },
	{ 0x8fce34a1, "vmbus_alloc_ring" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4cc12d9, "vmbus_free_ring" },
	{ 0xa8c9a5f7, "uio_unregister_device" },
	{ 0x999e8297, "vfree" },
	{ 0x59c98277, "vmbus_teardown_gpadl" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0x40cbbd80, "uio_event_notify" },
	{ 0xb08e6747, "vmbus_connect_ring" },
	{ 0xbad6c25c, "vmbus_set_sc_create_callback" },
	{ 0xfd052058, "vmbus_set_chn_rescind_callback" },
	{ 0xf8906588, "vmbus_disconnect_ring" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2b826dca, "vm_iomap_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,uio");


MODULE_INFO(srcversion, "0758EA5901CFA2BBF6E4F26");
