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
	{ 0x36b4fa11, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x296cf97f, "ip_set_type_register" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x55ad01ff, "ip_set_put_extensions" },
	{ 0xa916b694, "strnlen" },
	{ 0x4168034d, "ip_set_name_byindex" },
	{ 0x711671e8, "ip_set_get_byname" },
	{ 0x4fcff9ce, "ip_set_get_extensions" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc92d05d0, "ip_set_extensions" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xba3b073f, "ip_set_elem_len" },
	{ 0xdff5bd82, "ip_set_match_extensions" },
	{ 0xe19b34f9, "ip_set_test" },
	{ 0xac5802ea, "ip_set_add" },
	{ 0xd1ced5ba, "ip_set_del" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x58440d1a, "ip_set_put_byindex" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "5E7F503ADBEF0CC72FFBF73");
