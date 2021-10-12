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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x54fa2920, "dm_io" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x6006847, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4122186, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A508D3D9E4171930FEFE3AF");
