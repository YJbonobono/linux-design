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
	{ 0x4a93255e, "em28xx_read_reg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x86903c0d, "em28xx_write_regs" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbb4bb62b, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0xf8c679e2, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x27c4b4cb, "em28xx_find_led" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xaad38701, "rc_free_device" },
	{ 0x3ad96e67, "em28xx_toggle_reg_bits" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0xc4206bb5, "em28xx_unregister_extension" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0xf210b66a, "em28xx_write_reg_bits" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xc4a1cf1a, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409f65ef, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core");


MODULE_INFO(srcversion, "C7FCCE1410AC031A8255F3F");
