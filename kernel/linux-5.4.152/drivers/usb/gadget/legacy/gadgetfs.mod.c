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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x8b1f4c97, "get_tree_single" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xfd205417, "no_llseek" },
	{ 0x807799e, "generic_delete_inode" },
	{ 0x23f7d6b9, "dput" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdc2305bf, "dup_iter" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x70d701b9, "d_add" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x6cf7c8ee, "usb_gadget_unregister_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xef1657c0, "usb_gadget_set_state" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf10a603, "d_delete" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbdbe887, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xfef28022, "use_mm" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x6ac54cb4, "usb_gadget_vbus_draw" },
	{ 0xb5f4ce31, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17f26d7e, "kiocb_set_cancel_fn" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8e3b95d6, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x28cb7cef, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x57ad1ee9, "current_time" },
	{ 0x137f3a1d, "d_make_root" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x2eff9aa7, "simple_statfs" },
	{ 0x1de7f0a, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x42a8e072, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15f4a35b, "unuse_mm" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0xb53e3ff, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "BE77A7F057BD2A8241D3BBF");
