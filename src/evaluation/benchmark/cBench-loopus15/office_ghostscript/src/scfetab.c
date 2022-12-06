typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct {
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void *__timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef unsigned long int ulong_;
typedef unsigned short int ushort_;
typedef unsigned int uint_;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
}
fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t * __restrict __sigmask);
__extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__));
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union {
    char __size[36];
    long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union {
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_mutexattr_t;
typedef union {
    struct {
	int __lock;
	unsigned int __futex;
	__extension__ unsigned long long int __total_seq;
	__extension__ unsigned long long int __wakeup_seq;
	__extension__ unsigned long long int __woken_seq;
	void *__mutex;
	unsigned int __nwaiters;
	unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union {
    struct {
	int __lock;
	unsigned int __nr_readers;
	unsigned int __readers_wakeup;
	unsigned int __writer_wakeup;
	unsigned int __nr_readers_queued;
	unsigned int __nr_writers_queued;
	unsigned char __flags;
	unsigned char __shared;
	unsigned char __pad1;
	unsigned char __pad2;
	int __writer;
    } __data;
    char __size[32];
    long int __align;
} pthread_rwlock_t;
typedef union {
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
    char __size[20];
    long int __align;
} pthread_barrier_t;
typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;
typedef int bool;
typedef const char *ptr_ord_t;
typedef double floatp;
typedef const char *client_name_t;
typedef ushort bits16;
typedef uint bits32;
typedef struct gs_memory_struct_type_s gs_memory_struct_type_t;
typedef const gs_memory_struct_type_t *gs_memory_type_ptr_t;
typedef client_name_t struct_name_t;
uint gs_struct_type_size(gs_memory_type_ptr_t);
struct_name_t gs_struct_type_name(gs_memory_type_ptr_t);
typedef struct gc_state_s gc_state_t;
typedef struct gs_ptr_procs_s {
    void (*unmark) (void *, gc_state_t *);
    bool(*mark) (void *, gc_state_t *);
    void *(*reloc) (const void *, gc_state_t *);
} gs_ptr_procs_t;
typedef const gs_ptr_procs_t *gs_ptr_type_t;
extern const gs_ptr_procs_t ptr_struct_procs;
extern const gs_ptr_procs_t ptr_string_procs;
extern const gs_ptr_procs_t ptr_const_string_procs;
typedef struct gs_gc_root_s gs_gc_root_t;
struct gs_gc_root_s {
    gs_gc_root_t *next;
    gs_ptr_type_t ptype;
    void **p;
};
typedef struct gs_memory_status_s {
    ulong allocated;
    ulong used;
} gs_memory_status_t;
struct gs_memory_s;
typedef struct gs_memory_s gs_memory_t;
typedef struct gs_memory_procs_s {
    byte *(*alloc_bytes) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_bytes_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    void *(*alloc_struct) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_immovable) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    byte *(*alloc_byte_array) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    byte *(*alloc_byte_array_immovable) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    void *(*alloc_struct_array) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_array_immovable) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*resize_object) (gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname);
    uint(*object_size) (gs_memory_t * mem, const void *obj);
    gs_memory_type_ptr_t(*object_type) (gs_memory_t * mem, const void *obj);
    void (*free_object) (gs_memory_t * mem, void *data, client_name_t cname);
    byte *(*alloc_string) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_string_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*resize_string) (gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname);
    void (*free_string) (gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
    void (*register_root) (gs_memory_t * mem, gs_gc_root_t * root, gs_ptr_type_t ptype, void **pp, client_name_t cname);
    void (*unregister_root) (gs_memory_t * mem, gs_gc_root_t * root, client_name_t cname);
    void (*status) (gs_memory_t * mem, gs_memory_status_t * status);
    void (*enable_free) (gs_memory_t * mem, bool enable);
} gs_memory_procs_t;
void gs_ignore_free_object(gs_memory_t * mem, void *data, client_name_t cname);
void gs_ignore_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
struct gs_memory_s {
    gs_memory_procs_t procs;
};
extern gs_memory_t gs_memory_default;
typedef ulong gs_id;
typedef struct gs_string_s {
    byte *data;
    uint size;
} gs_string;
typedef struct gs_const_string_s {
    const byte *data;
    uint size;
} gs_const_string;
typedef struct gs_point_s {
    double x, y;
} gs_point;
typedef struct gs_int_point_s {
    int x, y;
} gs_int_point;
typedef struct gs_log2_scale_point_s {
    int x, y;
} gs_log2_scale_point;
typedef struct gs_rect_s {
    gs_point p, q;
} gs_rect;
typedef struct gs_int_rect_s {
    gs_int_point p, q;
} gs_int_rect;
typedef struct obj_header_s obj_header_t;
typedef struct struct_shared_procs_s struct_shared_procs_t;
struct gs_memory_struct_type_s {
    uint ssize;
    struct_name_t sname;
    const struct_shared_procs_t *shared;
    void (*clear_marks) (void *pre, uint size);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
    void (*finalize) (void *ptr);
};
gs_ptr_type_t gs_no_struct_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
void gs_no_struct_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
void *gs_reloc_struct_ptr(const void *, gc_state_t *);
void gs_reloc_string(gs_string *, gc_state_t *);
void gs_reloc_const_string(gs_const_string *, gc_state_t *);
extern const gs_memory_struct_type_t st_free;
extern const gs_memory_struct_type_t st_bytes;
typedef struct stream_s stream;
typedef struct stream_state_s stream_state;
typedef struct stream_template_s stream_template;
typedef struct stream_cursor_read_s {
    const byte *ptr;
    const byte *limit;
    byte *_skip;
} stream_cursor_read;
typedef struct stream_cursor_write_s {
    const byte *_skip;
    byte *ptr;
    byte *limit;
} stream_cursor_write;
typedef union stream_cursor_s {
    stream_cursor_read r;
    stream_cursor_write w;
} stream_cursor;
int s_no_report_error(stream_state *, const char *);
struct stream_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
};
extern const gs_memory_struct_type_t st_stream_state;
extern const byte byte_reverse_bits[256];
extern const byte byte_right_mask[9];
extern const byte byte_count_bits[256];
extern const byte byte_bit_run_length_0[256], byte_bit_run_length_1[256], byte_bit_run_length_2[256], byte_bit_run_length_3[256], byte_bit_run_length_4[256], byte_bit_run_length_5[256], byte_bit_run_length_6[256], byte_bit_run_length_7[256];
extern const byte *byte_bit_run_length[8];
extern const byte *byte_bit_run_length_neg[8];
typedef struct hc_definition_s {
    ushort *counts;
    uint num_counts;
    ushort *values;
    uint num_values;
} hc_definition;
typedef struct stream_hc_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
} stream_hc_state;
typedef struct hce_code_s {
    ushort code;
    ushort code_length;
} hce_code;
typedef struct hce_table_s {
    uint count;
    hce_code *codes;
} hce_table;
void hc_put_code_proc(bool, byte *, uint);
byte *hc_put_last_bits_proc(stream_hc_state *, byte *, uint, int);
typedef struct hcd_code_s {
    short value;
    ushort code_length;
} hcd_code;
typedef struct hcd_table_s {
    uint count;
    uint initial_bits;
    hcd_code *codes;
} hcd_table;
typedef hce_code cfe_run;
extern const cfe_run cf_run_eol;
extern const cfe_run cf_white_termination[64];
extern const cfe_run cf_white_make_up[41];
extern const cfe_run cf_black_termination[64];
extern const cfe_run cf_black_make_up[41];
extern const cfe_run cf_uncompressed[6];
extern const cfe_run cf_uncompressed_exit[10];
extern const cfe_run cf1_run_uncompressed;
extern const cfe_run cf2_run_pass;
extern const cfe_run cf2_run_vertical[7];
extern const cfe_run cf2_run_horizontal;
extern const cfe_run cf2_run_uncompressed;
extern const cfe_run cf2_run_eol_1d;
extern const cfe_run cf2_run_eol_2d;
typedef hcd_code cfd_node;
extern const cfd_node cf_white_decode[];
extern const cfd_node cf_black_decode[];
extern const cfd_node cf_2d_decode[];
extern const cfd_node cf_uncompressed_decode[];
const cfe_run cf_run_eol = { 1, 12 };
const cfe_run cf1_run_uncompressed = { 0xf, 12 };
const cfe_run cf2_run_pass = { 0x1, 4 };
const cfe_run cf2_run_vertical[7] = { {0x3, 7}, {0x3, 6}, {0x3, 3}, {0x1, 1}, {0x2, 3}, {0x2, 6}, {0x2, 7} };
const cfe_run cf2_run_horizontal = { 1, 3 };
const cfe_run cf2_run_uncompressed = { 0xf, 10 };
const cfe_run cf2_run_eol_1d = { (1 << 1) + 1, 12 + 1 };
const cfe_run cf2_run_eol_2d = { (1 << 1) + 0, 12 + 1 };
const cfe_run cf_white_termination[64] = { {0x35, 8}, {0x7, 6}, {0x7, 4}, {0x8, 4}, {0xb, 4}, {0xc, 4}, {0xe, 4}, {0xf, 4}, {0x13, 5}, {0x14, 5}, {0x7, 5}, {0x8, 5}, {0x8, 6}, {0x3, 6}, {0x34, 6}, {0x35, 6}, {0x2a, 6}, {0x2b, 6}, {0x27, 7}, {0xc, 7}, {0x8, 7}, {0x17, 7}, {0x3, 7}, {0x4, 7}, {0x28, 7}, {0x2b, 7}, {0x13, 7}, {0x24, 7}, {0x18, 7}, {0x2, 8}, {0x3, 8}, {0x1a, 8}, {0x1b, 8}, {0x12, 8}, {0x13, 8}, {0x14, 8}, {0x15, 8}, {0x16, 8}, {0x17, 8}, {0x28, 8}, {0x29, 8}, {0x2a, 8}, {0x2b, 8}, {0x2c, 8}, {0x2d, 8}, {0x4, 8}, {0x5, 8}, {0xa, 8}, {0xb, 8}, {0x52, 8}, {0x53, 8}, {0x54, 8}, {0x55, 8}, {0x24, 8}, {0x25, 8}, {0x58, 8}, {0x59, 8}, {0x5a, 8}, {0x5b, 8}, {0x4a, 8}, {0x4b, 8}, {0x32, 8}, {0x33, 8}, {0x34, 8} };
const cfe_run cf_white_make_up[41] = { {0, 0}, {0x1b, 5}, {0x12, 5}, {0x17, 6}, {0x37, 7}, {0x36, 8}, {0x37, 8}, {0x64, 8}, {0x65, 8}, {0x68, 8}, {0x67, 8}, {0xcc, 9}, {0xcd, 9}, {0xd2, 9}, {0xd3, 9}, {0xd4, 9}, {0xd5, 9}, {0xd6, 9}, {0xd7, 9}, {0xd8, 9}, {0xd9, 9}, {0xda, 9}, {0xdb, 9}, {0x98, 9}, {0x99, 9}, {0x9a, 9}, {0x18, 6}, {0x9b, 9}, {0x8, 11}, {0xc, 11}, {0xd, 11}, {0x12, 12}, {0x13, 12}, {0x14, 12}, {0x15, 12}, {0x16, 12}, {0x17, 12}, {0x1c, 12}, {0x1d, 12}, {0x1e, 12}, {0x1f, 12} };
const cfe_run cf_black_termination[64] = { {0x37, 10}, {0x2, 3}, {0x3, 2}, {0x2, 2}, {0x3, 3}, {0x3, 4}, {0x2, 4}, {0x3, 5}, {0x5, 6}, {0x4, 6}, {0x4, 7}, {0x5, 7}, {0x7, 7}, {0x4, 8}, {0x7, 8}, {0x18, 9}, {0x17, 10}, {0x18, 10}, {0x8, 10}, {0x67, 11}, {0x68, 11}, {0x6c, 11}, {0x37, 11}, {0x28, 11}, {0x17, 11}, {0x18, 11}, {0xca, 12}, {0xcb, 12}, {0xcc, 12}, {0xcd, 12}, {0x68, 12}, {0x69, 12}, {0x6a, 12}, {0x6b, 12}, {0xd2, 12}, {0xd3, 12}, {0xd4, 12}, {0xd5, 12}, {0xd6, 12}, {0xd7, 12}, {0x6c, 12}, {0x6d, 12}, {0xda, 12}, {0xdb, 12}, {0x54, 12}, {0x55, 12}, {0x56, 12}, {0x57, 12}, {0x64, 12}, {0x65, 12}, {0x52, 12}, {0x53, 12}, {0x24, 12}, {0x37, 12}, {0x38, 12}, {0x27, 12}, {0x28, 12}, {0x58, 12}, {0x59, 12}, {0x2b, 12}, {0x2c, 12}, {0x5a, 12}, {0x66, 12}, {0x67, 12} };
const cfe_run cf_black_make_up[41] = { {0, 0}, {0xf, 10}, {0xc8, 12}, {0xc9, 12}, {0x5b, 12}, {0x33, 12}, {0x34, 12}, {0x35, 12}, {0x6c, 13}, {0x6d, 13}, {0x4a, 13}, {0x4b, 13}, {0x4c, 13}, {0x4d, 13}, {0x72, 13}, {0x73, 13}, {0x74, 13}, {0x75, 13}, {0x76, 13}, {0x77, 13}, {0x52, 13}, {0x53, 13}, {0x54, 13}, {0x55, 13}, {0x5a, 13}, {0x5b, 13}, {0x64, 13}, {0x65, 13}, {0x8, 11}, {0xc, 11}, {0xd, 11}, {0x12, 12}, {0x13, 12}, {0x14, 12}, {0x15, 12}, {0x16, 12}, {0x17, 12}, {0x1c, 12}, {0x1d, 12}, {0x1e, 12}, {0x1f, 12} };
const cfe_run cf_uncompressed[6] = { {1, 1}, {1, 2}, {1, 3}, {1, 4}, {1, 5}, {1, 6} };
const cfe_run cf_uncompressed_exit[10] = { {2, 8}, {3, 8}, {2, 9}, {3, 9}, {2, 10}, {3, 10}, {2, 11}, {3, 11}, {2, 12}, {3, 12} };

void cfe_dummy(void)
{
}
