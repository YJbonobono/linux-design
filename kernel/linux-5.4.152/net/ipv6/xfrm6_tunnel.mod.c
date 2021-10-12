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
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xe9fc50c1, "xfrm6_tunnel_deregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3558ab5, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x581cf443, "skb_push" },
	{ 0xe6abd463, "xfrm_state_flush" },
	{ 0x351b28ab, "xfrm_register_type" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xdfb84a33, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0xabcc8326, "xfrm6_tunnel_register" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "721607F64C5B0E402A23B91");
