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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2c7a675f, "serial8250_register_8250_port" },
	{ 0x8b1f4c97, "get_tree_single" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x807799e, "generic_delete_inode" },
	{ 0x23f7d6b9, "dput" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x70d701b9, "d_add" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xbdbe887, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb5f4ce31, "simple_dir_operations" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x53ca4226, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x57ad1ee9, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x2eff9aa7, "simple_statfs" },
	{ 0x1de7f0a, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42a8e072, "new_inode" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xb53e3ff, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "13A5BEB6B9F9877C771F21E");
