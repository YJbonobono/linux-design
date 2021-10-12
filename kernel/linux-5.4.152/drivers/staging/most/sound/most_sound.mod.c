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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x42acac50, "most_stop_channel" },
	{ 0x558b71d1, "most_deregister_configfs_subsys" },
	{ 0x754d539c, "strlen" },
	{ 0x6f9481d9, "most_register_component" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x85df9b6c, "strsep" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda5cd86b, "most_put_mbo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d8f96bf, "most_deregister_component" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x72180714, "most_submit_mbo" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc78a4cef, "most_get_mbo" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe03f0cbd, "most_start_channel" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x4b66a255, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core,snd-pcm,snd");


MODULE_INFO(srcversion, "30C5FA5CE551176449110F2");
