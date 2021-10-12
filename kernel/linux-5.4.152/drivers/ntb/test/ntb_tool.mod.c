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
	{ 0xb4facf8b, "simple_open" },
	{ 0xa672e084, "ntb_unregister_client" },
	{ 0x598acec5, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xf7f1c22d, "ntb_default_peer_port_count" },
	{ 0x2c4cf0be, "ntb_set_ctx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2b35d3f6, "ntb_clear_ctx" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xedc03953, "iounmap" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x97e0a8d, "ntb_default_port_number" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xe69efd7f, "ntb_default_peer_port_number" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "671D8D03A34A898D53F5618");
