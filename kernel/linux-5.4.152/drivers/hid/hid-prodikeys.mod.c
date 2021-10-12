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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf8c679e2, "input_event" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xe0851549, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,snd,snd-rawmidi");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "A2AAF1A708CB61E66A47144");
