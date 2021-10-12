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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xeea84570, "rio_mport_class" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x34199ef9, "class_interface_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x52977a3a, "__class_create" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfa43520e, "rio_map_outb_region" },
	{ 0xb4b8e3c0, "rio_mport_get_feature" },
	{ 0x728dad04, "rio_mport_get_physefb" },
	{ 0x1cbd88f3, "rio_add_net" },
	{ 0x87643d4e, "rio_alloc_net" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xf35c6cbb, "rio_map_inb_region" },
	{ 0x9131e46b, "rio_free_net" },
	{ 0x38ea91d0, "rio_del_device" },
	{ 0x64cd6f34, "rio_dev_put" },
	{ 0x2bb25b6d, "rio_get_comptag" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x7d30fb33, "rio_request_mport_dma" },
	{ 0x40937c07, "rio_dma_prep_xfer" },
	{ 0xa14e96ba, "sg_alloc_table_from_pages" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x336da92d, "rio_request_inb_dbell" },
	{ 0x1b58d784, "rio_dev_get" },
	{ 0x3601f0b5, "rio_add_device" },
	{ 0xb70c0eae, "rio_attach_device" },
	{ 0x74d36c3b, "bus_find_device" },
	{ 0x19b208a6, "rio_bus_type" },
	{ 0xcf01e53d, "device_match_name" },
	{ 0x4e7eb2e8, "rio_local_set_device_id" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc4f24254, "rio_pw_enable" },
	{ 0xdded7453, "rio_add_mport_pw_handler" },
	{ 0x6006847, "current_task" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x29361773, "complete" },
	{ 0x71dc307b, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xf6a55bda, "dma_mmap_attrs" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x2b826dca, "vm_iomap_memory" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x73378269, "rio_release_inb_dbell" },
	{ 0x92eac3e4, "kill_fasync" },
	{ 0x6cc5ecb4, "cdev_device_del" },
	{ 0x81b5c630, "rio_del_mport_pw_handler" },
	{ 0x6e56d32a, "rio_release_dma" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd6496718, "rio_query_mport" },
	{ 0x66c5171f, "cdev_device_add" },
	{ 0x3d0221e2, "cdev_init" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xf4c91d80, "rio_mport_write_config_32" },
	{ 0x727e0645, "__rio_local_write_config_32" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x999e8297, "vfree" },
	{ 0xd0a96921, "rio_mport_read_config_32" },
	{ 0x57df5952, "__rio_local_read_config_32" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf86f04a5, "rio_mport_send_doorbell" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3750a460, "get_device" },
	{ 0xfe03915b, "fasync_helper" },
	{ 0x8016a3b9, "rio_unmap_outb_region" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x6debc052, "rio_unmap_inb_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1D905617DBB9BB7BA12FCA4");
