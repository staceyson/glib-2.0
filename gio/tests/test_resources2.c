#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.g_test2"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[180]; const double alignment; void * const ptr;}  _g_test2_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0xc9, 0x34, 0x0f, 0xb9, 
  0x02, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 
  0x0e, 0x00, 0x4c, 0x00, 0x84, 0x00, 0x00, 0x00, 
  0x88, 0x00, 0x00, 0x00, 0x48, 0x73, 0xa3, 0x50, 
  0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 
  0x09, 0x00, 0x76, 0x00, 0x98, 0x00, 0x00, 0x00, 
  0xae, 0x00, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xae, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xb0, 0x00, 0x00, 0x00, 
  0xb4, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x6e, 0x75, 
  0x61, 0x6c, 0x5f, 0x6c, 0x6f, 0x61, 0x64, 0x65, 
  0x64, 0x2f, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x74, 0x65, 0x73, 0x74, 0x31, 0x2e, 0x74, 0x78, 
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x74, 0x65, 0x73, 0x74, 0x31, 0x0a, 0x00, 0x00, 
  0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x2f, 0x00, 
  0x00, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { _g_test2_resource_data.data, sizeof (_g_test2_resource_data.data), NULL, NULL, NULL };
extern GResource *_g_test2_get_resource (void);
GResource *_g_test2_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}

extern void _g_test2_unregister_resource (void);
void _g_test2_unregister_resource (void)
{
  g_static_resource_fini (&static_resource);
}

extern void _g_test2_register_resource (void);
void _g_test2_register_resource (void)
{
  g_static_resource_init (&static_resource);
}
