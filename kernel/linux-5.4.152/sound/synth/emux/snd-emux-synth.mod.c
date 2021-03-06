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
	{ 0x7d95566f, "snd_util_mem_avail" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1a5d90f, "snd_device_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x58aca9af, "snd_device_free" },
	{ 0x168a4a30, "snd_info_create_card_entry" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5e3bf4ca, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0x712a1a26, "snd_hwdep_new" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xecf88348, "snd_info_free_entry" },
	{ 0xacb0c516, "snd_virmidi_new" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x728316ec, "snd_seq_event_port_attach" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi");


MODULE_INFO(srcversion, "48059F52A9AD9FF6C9F0B5A");
