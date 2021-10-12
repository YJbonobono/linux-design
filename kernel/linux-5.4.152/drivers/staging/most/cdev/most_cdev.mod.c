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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xd62fc4d6, "cdev_del" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x42acac50, "most_stop_channel" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x558b71d1, "most_deregister_configfs_subsys" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x6f9481d9, "most_register_component" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xda5cd86b, "most_put_mbo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xab2c37f3, "channel_has_mbo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2d8f96bf, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x72180714, "most_submit_mbo" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x97d452, "cdev_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc78a4cef, "most_get_mbo" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xe03f0cbd, "most_start_channel" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52977a3a, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4b66a255, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core");


MODULE_INFO(srcversion, "120C6F675E823CBBD012A12");
