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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xa672e084, "ntb_unregister_client" },
	{ 0x598acec5, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x97e0a8d, "ntb_default_port_number" },
	{ 0xf7f1c22d, "ntb_default_peer_port_count" },
	{ 0x6b0782a0, "debugfs_create_atomic_t" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x9bc3cd, "ntb_link_event" },
	{ 0x2c4cf0be, "ntb_set_ctx" },
	{ 0xe69efd7f, "ntb_default_peer_port_number" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x2b35d3f6, "ntb_clear_ctx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "F4050CE74E68E98BF350980");
