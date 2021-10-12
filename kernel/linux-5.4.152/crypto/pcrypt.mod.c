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
	{ 0xf49b3605, "crypto_unregister_template" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x503828a5, "crypto_register_template" },
	{ 0x3d0d4ea3, "padata_start" },
	{ 0x19866c91, "padata_stop" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x15798836, "kernel_kobj" },
	{ 0x845c0fbc, "crypto_spawn_tfm2" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x99a493b9, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x674a1010, "crypto_grab_aead" },
	{ 0x526f7658, "padata_alloc_shell" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x5f413019, "padata_free" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x7ce3189c, "padata_alloc_possible" },
	{ 0x37a0cba, "kfree" },
	{ 0x41eb1aa5, "padata_free_shell" },
	{ 0xeb43577c, "crypto_drop_spawn" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x2a9e6605, "padata_do_parallel" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0x4b6ad9b2, "padata_do_serial" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D67E05C972393B4D09689F2");
