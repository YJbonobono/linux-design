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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x83d511d9, "input_register_polled_device" },
	{ 0x636964f5, "input_allocate_polled_device" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf23af466, "input_free_polled_device" },
	{ 0x6c64287b, "input_unregister_polled_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("i2c:bma150");
MODULE_ALIAS("i2c:smb380");
MODULE_ALIAS("i2c:bma023");

MODULE_INFO(srcversion, "20ADDE53B9D36D5B9192B33");
