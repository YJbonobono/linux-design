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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xc9d116c3, "snd_pcm_hw_constraint_ratnums" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xb177d101, "seq_printf" },
	{ 0x5f1525ac, "snd_pci_quirk_lookup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x5b5b223, "__gameport_register_port" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xac5ccce, "snd_ac97_suspend" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x82205755, "snd_pcm_hw_constraint_ratdens" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xf2081e5a, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdc77dbde, "snd_pcm_set_sync" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0acea1c, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x603ece0c, "snd_ac97_mixer" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x3343be0, "snd_pcm_add_chmap_ctls" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x43dd3bad, "snd_ac97_resume" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x943487ca, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-rawmidi,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v00001274d00001371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001274d00005880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00008938sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A4463CF8035959C9A0C1E3");
