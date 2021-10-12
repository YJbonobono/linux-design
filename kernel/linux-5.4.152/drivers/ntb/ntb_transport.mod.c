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
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x4d44973b, "ntb_msi_peer_trigger" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x8df0b0e5, "dmaengine_unmap_put" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe5a01321, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaf489f94, "dmaengine_get_unmap_data" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x82e89538, "dma_sync_wait" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a921311, "strncmp" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xa672e084, "ntb_unregister_client" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x712416e0, "dma_direct_map_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf12e26b0, "ntb_msi_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x654e0571, "ntbm_msi_request_threaded_irq" },
	{ 0x1ee3c748, "ntb_msi_setup_mws" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf7f1c22d, "ntb_default_peer_port_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x598acec5, "__ntb_register_client" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b35d3f6, "ntb_clear_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x51ce92, "device_unregister" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2c4cf0be, "ntb_set_ctx" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "0B266B7C7CE6B6E7F86D619");
