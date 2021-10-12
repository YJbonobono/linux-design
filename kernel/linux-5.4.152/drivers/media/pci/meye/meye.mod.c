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
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x86a54209, "__video_register_device" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2f548802, "ns_to_timeval" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd857cac7, "sony_pic_camera_command" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,sony-laptop");

MODULE_ALIAS("pci:v0000136Bd0000FF01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AD7128605A4B0DA764458E1");
