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
const cfd_node cf_white_decode[] = { {256, 12}, {272, 12}, {29, 8}, {30, 8}, {45, 8}, {46, 8}, {22, 7}, {22, 7}, {23, 7}, {23, 7}, {47, 8}, {48, 8}, {13, 6}, {13, 6}, {13, 6}, {13, 6}, {20, 7}, {20, 7}, {33, 8}, {34, 8}, {35, 8}, {36, 8}, {37, 8}, {38, 8}, {19, 7}, {19, 7}, {31, 8}, {32, 8}, {1, 6}, {1, 6}, {1, 6}, {1, 6}, {12, 6}, {12, 6}, {12, 6}, {12, 6}, {53, 8}, {54, 8}, {26, 7}, {26, 7}, {39, 8}, {40, 8}, {41, 8}, {42, 8}, {43, 8}, {44, 8}, {21, 7}, {21, 7}, {28, 7}, {28, 7}, {61, 8}, {62, 8}, {63, 8}, {0, 8}, {320, 8}, {384, 8}, {10, 5}, {10, 5}, {10, 5}, {10, 5}, {10, 5}, {10, 5}, {10, 5}, {10, 5}, {11, 5}, {11, 5}, {11, 5}, {11, 5}, {11, 5}, {11, 5}, {11, 5}, {11, 5}, {27, 7}, {27, 7}, {59, 8}, {60, 8}, {288, 9}, {290, 9}, {18, 7}, {18, 7}, {24, 7}, {24, 7}, {49, 8}, {50, 8}, {51, 8}, {52, 8}, {25, 7}, {25, 7}, {55, 8}, {56, 8}, {57, 8}, {58, 8}, {192, 6}, {192, 6}, {192, 6}, {192, 6}, {1664, 6}, {1664, 6}, {1664, 6}, {1664, 6}, {448, 8}, {512, 8}, {292, 9}, {640, 8}, {576, 8}, {294, 9}, {296, 9}, {298, 9}, {300, 9}, {302, 9}, {256, 7}, {256, 7}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {2, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {128, 5}, {128, 5}, {128, 5}, {128, 5}, {128, 5}, {128, 5}, {128, 5}, {128, 5}, {8, 5}, {8, 5}, {8, 5}, {8, 5}, {8, 5}, {8, 5}, {8, 5}, {8, 5}, {9, 5}, {9, 5}, {9, 5}, {9, 5}, {9, 5}, {9, 5}, {9, 5}, {9, 5}, {16, 6}, {16, 6}, {16, 6}, {16, 6}, {17, 6}, {17, 6}, {17, 6}, {17, 6}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {14, 6}, {14, 6}, {14, 6}, {14, 6}, {15, 6}, {15, 6}, {15, 6}, {15, 6}, {64, 5}, {64, 5}, {64, 5}, {64, 5}, {64, 5}, {64, 5}, {64, 5}, {64, 5}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {7, 4}, {-2, 3}, {-2, 3}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-3, 4}, {1792, 3}, {1792, 3}, {1984, 4}, {2048, 4}, {2112, 4}, {2176, 4}, {2240, 4}, {2304, 4}, {1856, 3}, {1856, 3}, {1920, 3}, {1920, 3}, {2368, 4}, {2432, 4}, {2496, 4}, {2560, 4}, {1472, 1}, {1536, 1}, {1600, 1}, {1728, 1}, {704, 1}, {768, 1}, {832, 1}, {896, 1}, {960, 1}, {1024, 1}, {1088, 1}, {1152, 1}, {1216, 1}, {1280, 1}, {1344, 1}, {1408, 1} };
const cfd_node cf_black_decode[] = { {128, 12}, {160, 13}, {224, 12}, {256, 12}, {10, 7}, {11, 7}, {288, 12}, {12, 7}, {9, 6}, {9, 6}, {8, 6}, {8, 6}, {7, 5}, {7, 5}, {7, 5}, {7, 5}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {6, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {3, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {-2, 4}, {-2, 4}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-3, 5}, {1792, 4}, {1792, 4}, {1984, 5}, {2048, 5}, {2112, 5}, {2176, 5}, {2240, 5}, {2304, 5}, {1856, 4}, {1856, 4}, {1920, 4}, {1920, 4}, {2368, 5}, {2432, 5}, {2496, 5}, {2560, 5}, {18, 3}, {18, 3}, {18, 3}, {18, 3}, {18, 3}, {18, 3}, {18, 3}, {18, 3}, {52, 5}, {52, 5}, {640, 6}, {704, 6}, {768, 6}, {832, 6}, {55, 5}, {55, 5}, {56, 5}, {56, 5}, {1280, 6}, {1344, 6}, {1408, 6}, {1472, 6}, {59, 5}, {59, 5}, {60, 5}, {60, 5}, {1536, 6}, {1600, 6}, {24, 4}, {24, 4}, {24, 4}, {24, 4}, {25, 4}, {25, 4}, {25, 4}, {25, 4}, {1664, 6}, {1728, 6}, {320, 5}, {320, 5}, {384, 5}, {384, 5}, {448, 5}, {448, 5}, {512, 6}, {576, 6}, {53, 5}, {53, 5}, {54, 5}, {54, 5}, {896, 6}, {960, 6}, {1024, 6}, {1088, 6}, {1152, 6}, {1216, 6}, {64, 3}, {64, 3}, {64, 3}, {64, 3}, {64, 3}, {64, 3}, {64, 3}, {64, 3}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {13, 1}, {23, 4}, {23, 4}, {50, 5}, {51, 5}, {44, 5}, {45, 5}, {46, 5}, {47, 5}, {57, 5}, {58, 5}, {61, 5}, {256, 5}, {16, 3}, {16, 3}, {16, 3}, {16, 3}, {17, 3}, {17, 3}, {17, 3}, {17, 3}, {48, 5}, {49, 5}, {62, 5}, {63, 5}, {30, 5}, {31, 5}, {32, 5}, {33, 5}, {40, 5}, {41, 5}, {22, 4}, {22, 4}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {14, 1}, {15, 2}, {15, 2}, {15, 2}, {15, 2}, {15, 2}, {15, 2}, {15, 2}, {15, 2}, {128, 5}, {192, 5}, {26, 5}, {27, 5}, {28, 5}, {29, 5}, {19, 4}, {19, 4}, {20, 4}, {20, 4}, {34, 5}, {35, 5}, {36, 5}, {37, 5}, {38, 5}, {39, 5}, {21, 4}, {21, 4}, {42, 5}, {43, 5}, {0, 3}, {0, 3}, {0, 3}, {0, 3} };
const cfd_node cf_2d_decode[] = { {128, 11}, {144, 10}, {6, 7}, {0, 7}, {5, 6}, {5, 6}, {1, 6}, {1, 6}, {-4, 4}, {-4, 4}, {-4, 4}, {-4, 4}, {-4, 4}, {-4, 4}, {-4, 4}, {-4, 4}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {-5, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {4, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {3, 1}, {-2, 4}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-1, 0}, {-3, 3} };
const cfd_node cf_uncompressed_decode[] = { {64, 12}, {5, 6}, {4, 5}, {4, 5}, {3, 4}, {3, 4}, {3, 4}, {3, 4}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {-1, 0}, {-1, 0}, {8, 6}, {9, 6}, {6, 5}, {6, 5}, {7, 5}, {7, 5}, {4, 4}, {4, 4}, {4, 4}, {4, 4}, {5, 4}, {5, 4}, {5, 4}, {5, 4}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {2, 3}, {3, 3}, {3, 3}, {3, 3}, {3, 3}, {3, 3}, {3, 3}, {3, 3}, {3, 3}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {0, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2}, {1, 2} };

void cfd_dummy(void)
{
}
