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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xfd205417, "no_llseek" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x86a998c8, "_dev_crit" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x93082893, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xf9575308, "stream_open" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:fscpos");
MODULE_ALIAS("i2c:fscher");
MODULE_ALIAS("i2c:fscscy");
MODULE_ALIAS("i2c:fschrc");
MODULE_ALIAS("i2c:fschmd");
MODULE_ALIAS("i2c:fschds");
MODULE_ALIAS("i2c:fscsyl");

MODULE_INFO(srcversion, "BE47DA208D7A992AB33CB09");
