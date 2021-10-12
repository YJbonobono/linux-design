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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xa672e084, "ntb_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x598acec5, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97e0a8d, "ntb_default_port_number" },
	{ 0xf7f1c22d, "ntb_default_peer_port_count" },
	{ 0xe69efd7f, "ntb_default_peer_port_number" },
	{ 0x1aee8382, "debugfs_create_bool" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0x2c4cf0be, "ntb_set_ctx" },
	{ 0xbba219a7, "devm_ioremap_wc" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x8df0b0e5, "dmaengine_unmap_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xaf489f94, "dmaengine_get_unmap_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2b35d3f6, "ntb_clear_ctx" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "520A6B467368C6AE1096BB0");
