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
	{ 0x846c44fa, "unregister_rpmsg_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x1167479d, "__register_rpmsg_driver" },
	{ 0x52977a3a, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x335e4ce6, "device_add" },
	{ 0x97d452, "cdev_add" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4bd513a5, "rpmsg_trysend" },
	{ 0x2479c601, "rpmsg_send" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5d26597, "rpmsg_poll" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4fe29ea2, "rpmsg_create_ept" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5d60d8b, "rpmsg_destroy_ept" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");


MODULE_INFO(srcversion, "4F21CE828E24BBD68E99BF2");
