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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd3cab45, "snd_ac97_read" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8b1496f, "snd_ak4114_resume" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb3c189c2, "snd_pcm_hw_constraint_step" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x392b1aed, "snd_i2c_device_create" },
	{ 0xf67c83aa, "snd_pcm_hw_constraint_msbits" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xef74a227, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd3172e94, "snd_ak4113_create" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xe604a3e9, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf6a5a517, "snd_ak4113_external_rate" },
	{ 0x65dc560c, "snd_ak4113_build" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f7c319e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x23b5c2da, "snd_pt2258_build_controls" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xa3180561, "snd_ctl_boolean_stereo_info" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5044d49, "snd_akm4xxx_reset" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x4a1bdeab, "snd_ak4114_build" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x4aac95db, "snd_pt2258_reset" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xac5ccce, "snd_ac97_suspend" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x2d4ce4eb, "snd_ice1712_akm4xxx_free" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x1f6c02ae, "snd_i2c_bus_create" },
	{ 0x537886d, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x582ea6dd, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0acea1c, "snd_ac97_bus" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x87ba614a, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x603ece0c, "snd_ac97_mixer" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x40ee3748, "snd_ak4114_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x88aba4d8, "snd_ak4114_external_rate" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x6bd354c3, "snd_ak4114_reinit" },
	{ 0x5e3ee5cf, "snd_akm4xxx_write" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x43dd3bad, "snd_ac97_resume" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xee2d68d2, "snd_ac97_write_cache" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x55764467, "snd_rawmidi_transmit_empty" },
	{ 0xaf379d98, "snd_ice1712_akm4xxx_init" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda");

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBF2F8CDAF6BDBA4C60072A");
