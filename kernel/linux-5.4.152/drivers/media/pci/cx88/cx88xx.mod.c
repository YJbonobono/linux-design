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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x6b7e0565, "ir_raw_event_store_with_filter" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xd574499e, "v4l2_i2c_new_subdev" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xea6545f4, "rc_keydown_notimeout" },
	{ 0x30017bfa, "tveeprom_read" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x99b01350, "__v4l2_ctrl_grab" },
	{ 0x1a793c8b, "rc_keyup" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x4f44fe30, "i2c_smbus_xfer" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdc14eda7, "pci_pci_problems" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xc41422ca, "ir_raw_event_handle" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0xf3251e7b, "v4l2_norm_to_name" },
};

MODULE_INFO(depends, "rc-core,videodev,tveeprom,videobuf2-common,i2c-algo-bit");


MODULE_INFO(srcversion, "7FD6810791B48E8C9E2924D");
