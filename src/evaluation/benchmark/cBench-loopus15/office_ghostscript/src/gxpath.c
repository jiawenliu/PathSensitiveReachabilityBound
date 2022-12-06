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
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct {
    int __count;
    union {
	unsigned int __wch;
	char __wchb[4];
    } __value;
} __mbstate_t;
typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__(__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__(__SI__)));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result { __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv };
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern int _IO_feof(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_ferror(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE * __fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__ ((__nothrow__));
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__ ((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__ ((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__ ((__nothrow__));
extern FILE *tmpfile(void);
extern char *tmpnam(char *__s) __attribute__ ((__nothrow__));
extern char *tmpnam_r(char *__s) __attribute__ ((__nothrow__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int fclose(FILE * __stream);
extern int fflush(FILE * __stream);
extern int fflush_unlocked(FILE * __stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes);
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE * __restrict __stream);
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc) __attribute__ ((__nothrow__));
extern void setbuf(FILE * __restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));
extern int setvbuf(FILE * __restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__ ((__nothrow__));
extern void setbuffer(FILE * __restrict __stream, char *__restrict __buf, size_t __size) __attribute__ ((__nothrow__));
extern void setlinebuf(FILE * __stream) __attribute__ ((__nothrow__));
extern int fprintf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__ ((__format__(__printf__, 2, 0)));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int scanf(__const char *__restrict __format, ...);
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...) __asm__("" "__isoc99_fscanf");
extern int scanf(__const char *__restrict __format, ...) __asm__("" "__isoc99_scanf");
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vfscanf") __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vscanf") __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vsscanf") __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE * __stream);
extern int getc(FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE * __stream);
extern int fputc(int __c, FILE * __stream);
extern int putc(int __c, FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE * __stream);
extern int putc_unlocked(int __c, FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE * __stream);
extern int putw(int __w, FILE * __stream);
extern char *fgets(char *__restrict __s, int __n, FILE * __restrict __stream);
extern char *gets(char *__s);
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern int fputs(__const char *__restrict __s, FILE * __restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE * __stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern int fseek(FILE * __stream, long int __off, int __whence);
extern long int ftell(FILE * __stream);
extern void rewind(FILE * __stream);
extern int fseeko(FILE * __stream, __off_t __off, int __whence);
extern __off_t ftello(FILE * __stream);
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);
extern int fsetpos(FILE * __stream, __const fpos_t * __pos);
extern void clearerr(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror(FILE * __stream) __attribute__ ((__nothrow__));
extern void clearerr_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE * __stream) __attribute__ ((__nothrow__));
extern int fileno_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern FILE *popen(__const char *__command, __const char *__modes);
extern int pclose(FILE * __stream);
extern char *ctermid(char *__s) __attribute__ ((__nothrow__));
extern void flockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern int ftrylockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void funlockfile(FILE * __stream) __attribute__ ((__nothrow__));
int unlink(const char *);
extern FILE *gs_stdin, *gs_stdout, *gs_stderr;
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
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
typedef struct gs_imager_state_s gs_imager_state;
typedef struct gs_state_s gs_state;
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
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
typedef struct gs_path_enum_s gs_path_enum;
typedef struct gx_path_s gx_path;
typedef enum { sn_none = 0, sn_not_first = 1, sn_from_arc = 2 } segment_notes;
gx_path *gx_path_alloc(gs_memory_t *, client_name_t);
void gx_path_init(gx_path *, gs_memory_t *), gx_path_reset(gx_path *), gx_path_release(gx_path *), gx_path_share(gx_path *);
int gx_path_add_point(gx_path *, fixed, fixed), gx_path_add_relative_point(gx_path *, fixed, fixed), gx_path_add_line_notes(gx_path *, fixed, fixed, segment_notes), gx_path_add_lines_notes(gx_path *, const gs_fixed_point *, int, segment_notes), gx_path_add_rectangle(gx_path *, fixed, fixed, fixed, fixed), gx_path_add_char_path(gx_path *, gx_path *, gs_char_path_mode), gx_path_add_curve_notes(gx_path *, fixed, fixed, fixed, fixed, fixed, fixed, segment_notes), gx_path_add_partial_arc_notes(gx_path *, fixed, fixed, fixed, fixed, floatp, segment_notes), gx_path_add_path(gx_path *, gx_path *), gx_path_close_subpath_notes(gx_path *, segment_notes), gx_path_pop_close_notes(gx_path *, segment_notes);
gx_path *gx_current_path(const gs_state *);
void gx_path_assign(gx_path *, const gx_path *);
int gx_path_current_point(const gx_path *, gs_fixed_point *), gx_path_bbox(gx_path *, gs_fixed_rect *);
bool gx_path_has_curves(const gx_path *), gx_path_is_void(const gx_path *), gx_path_is_null(const gx_path *), gx_path_is_rectangle(const gx_path *, gs_fixed_rect *), gx_path_is_monotonic(const gx_path *);
typedef enum { pco_none = 0, pco_init = 1, pco_monotonize = 2, pco_accurate = 4 } gx_path_copy_options;
int gx_path_copy_reducing(const gx_path * ppath_old, gx_path * ppath_new, fixed fixed_flatness, gx_path_copy_options options);
int gx_path_expand_dashes(const gx_path *, gx_path *, const gs_imager_state *), gx_path_copy_reversed(const gx_path *, gx_path *, bool), gx_path_translate(gx_path *, fixed, fixed), gx_path_scale_exp2(gx_path *, int, int);
void gx_point_scale_exp2(gs_fixed_point *, int, int), gx_rect_scale_exp2(gs_fixed_rect *, int, int);
int gx_path_enum_init(gs_path_enum *, const gx_path *);
int gx_path_enum_next(gs_path_enum *, gs_fixed_point[3]);
segment_notes gx_path_enum_notes(const gs_path_enum *);
bool gx_path_enum_backup(gs_path_enum *);
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_clip_list_s gx_clip_list;
int gx_clip_to_rectangle(gs_state *, gs_fixed_rect *), gx_clip_to_path(gs_state *), gx_cpath_init(gx_clip_path *, gs_memory_t *), gx_cpath_from_rectangle(gx_clip_path *, gs_fixed_rect *, gs_memory_t *), gx_cpath_intersect(gs_state *, gx_clip_path *, gx_path *, int), gx_cpath_scale_exp2(gx_clip_path *, int, int);
void gx_cpath_release(gx_clip_path *), gx_cpath_share(gx_clip_path *);
int gx_cpath_path(gx_clip_path *, gx_path *);
bool gx_cpath_inner_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_outer_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_includes_rectangle(const gx_clip_path *, fixed, fixed, fixed, fixed);
int gx_cpath_set_outside(gx_clip_path *, bool);
bool gx_cpath_is_outside(const gx_clip_path *);
typedef enum { s_start, s_line, s_line_close, s_curve } segment_type;
typedef struct segment_s segment;
typedef struct subpath_s subpath;
struct segment_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
};
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
} line_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    subpath *sub;
} line_close_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    gs_fixed_point p1, p2;
} curve_segment;
struct subpath_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    segment *last;
    int curve_count;
    line_close_segment closer;
    char is_closed;
};
bool gx_subpath_is_rectangle(const subpath * pstart, gs_fixed_rect * pbox, const subpath ** ppnext);
int gx_curve_log2_samples(fixed, fixed, const curve_segment *, fixed);
int gx_curve_monotonic_points(fixed, fixed, fixed, fixed, double[2]);
void gx_curve_split(fixed, fixed, const curve_segment *, double, curve_segment *, curve_segment *);
int gx_flatten_sample(gx_path *, int, curve_segment *, segment_notes);
typedef struct curve_cursor_s {
    int k;
    gs_fixed_point p0;
    const curve_segment *pc;
    fixed a, b, c;
    double da, db, dc;
    bool double_set;
    int fixed_limit;
    struct ccc_ {
	fixed ky0, ky3;
	fixed xl, xd;
    } cache;
} curve_cursor;
void gx_curve_cursor_init(curve_cursor * prc, fixed x0, fixed y0, const curve_segment * pc, int k);
fixed gx_curve_x_at_y(curve_cursor * prc, fixed y);
typedef enum { psf_position_valid = 1, psf_subpath_open = 2, psf_is_drawing = 4, psf_outside_range = 8, psf_last_newpath = 0, psf_last_moveto = psf_position_valid | psf_subpath_open, psf_last_draw = psf_position_valid | psf_subpath_open | psf_is_drawing, psf_last_closepath = psf_position_valid } gx_path_state_flags;
struct gx_path_s {
    gs_memory_t *memory;
    gs_fixed_rect bbox;
    segment *box_last;
    subpath *first_subpath;
    subpath *current_subpath;
    int subpath_count;
    int curve_count;
    gs_fixed_point position;
    gs_point outside_position;
    gs_point outside_start;
    byte start_flags;
    byte state_flags;
    byte bbox_set;
    byte shares_segments;
};
extern const gs_memory_struct_type_t st_path;
struct gs_path_enum_s {
    const segment *pseg;
    const gs_state *pgs;
    const gx_path *path;
    gx_path *copied_path;
    bool moveto_done;
    segment_notes notes;
};
static subpath *path_alloc_copy(gx_path *);
static int gx_path_new_subpath(gx_path *);
static gs_ptr_type_t path_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gx_path *) vptr)->box_last);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gx_path *) vptr)->first_subpath);
	    return (&ptr_struct_procs);
	} while (0);
    case 2:
	do {
	    *pep = (const void *) (((gx_path *) vptr)->current_subpath);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void path_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((gx_path *) vptr)->box_last = gs_reloc_struct_ptr((const void *) ((const gx_path *) vptr)->box_last, gcst);
    ((gx_path *) vptr)->first_subpath = gs_reloc_struct_ptr((const void *) ((const gx_path *) vptr)->first_subpath, gcst);
    ((gx_path *) vptr)->current_subpath = gs_reloc_struct_ptr((const void *) ((const gx_path *) vptr)->current_subpath, gcst);
} const gs_memory_struct_type_t st_path = { sizeof(gx_path), "path", 0, 0, path_enum_ptrs, path_reloc_ptrs, 0 };

static gs_ptr_type_t segment_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((struct segment_s *) vptr)->prev);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((struct segment_s *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void segment_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((struct segment_s *) vptr)->prev = gs_reloc_struct_ptr((const void *) ((const struct segment_s *) vptr)->prev, gcst);
    ((struct segment_s *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const struct segment_s *) vptr)->next, gcst);
} static const gs_memory_struct_type_t st_segment = { sizeof(struct segment_s), "segment", 0, 0, segment_enum_ptrs, segment_reloc_ptrs, 0 };

static gs_ptr_type_t line_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    return (*st_segment.enum_ptrs) (vptr, size, index, pep);
}

static void line_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	(*st_segment.reloc_ptrs) (vptr, size, gcst);
}} static const gs_memory_struct_type_t st_line = { sizeof(line_segment), "line", 0, 0, line_enum_ptrs, line_reloc_ptrs, 0 };

static gs_ptr_type_t close_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_segment.enum_ptrs) (vptr, size, index - (1), pep);
    case 0:
	do {
	    *pep = (const void *) (((line_close_segment *) vptr)->sub);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void close_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{
    (*st_segment.reloc_ptrs) (vptr, size, gcst);
    ((line_close_segment *) vptr)->sub = gs_reloc_struct_ptr((const void *) ((const line_close_segment *) vptr)->sub, gcst);
} static const gs_memory_struct_type_t st_line_close = { sizeof(line_close_segment), "close", 0, 0, close_enum_ptrs, close_reloc_ptrs, 0 };
static const gs_memory_struct_type_t st_curve = { sizeof(curve_segment), "curve", 0, 0, segment_enum_ptrs, segment_reloc_ptrs, 0 };

static gs_ptr_type_t subpath_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_segment.enum_ptrs) (vptr, size, index - (1), pep);
    case 0:
	do {
	    *pep = (const void *) (((subpath *) vptr)->last);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void subpath_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{
    (*st_segment.reloc_ptrs) (vptr, size, gcst);
    ((subpath *) vptr)->last = gs_reloc_struct_ptr((const void *) ((const subpath *) vptr)->last, gcst);
} static const gs_memory_struct_type_t st_subpath = { sizeof(subpath), "subpath", 0, 0, subpath_enum_ptrs, subpath_reloc_ptrs, 0 };

gx_path *gx_path_alloc(gs_memory_t * mem, client_name_t cname)
{
    gx_path *ppath = (gx_path *) (*(mem)->procs.alloc_struct) (mem, &st_path, cname);
    if (ppath == 0)
	return 0;
    gx_path_init(ppath, mem);
    return ppath;
}

void gx_path_init(gx_path * ppath, gs_memory_t * mem)
{
    ppath->memory = mem;
    gx_path_reset(ppath);
} void gx_path_reset(gx_path * ppath)
{
    ppath->box_last = 0;
    ppath->first_subpath = ppath->current_subpath = 0;
    ppath->subpath_count = 0;
    ppath->curve_count = 0;
    ((ppath)->state_flags = psf_last_newpath);
    ppath->shares_segments = 0;
    ppath->bbox_set = 0;
} void gx_path_release(gx_path * ppath)
{
    segment *pseg;
    if (ppath->first_subpath == 0)
	return;
    if (ppath->shares_segments)
	return;
    pseg = (segment *) ppath->current_subpath->last;
    while (pseg) {
	segment *prev = pseg->prev;
	do {
	} while (0);
	(*(ppath->memory)->procs.free_object) (ppath->memory, pseg, "gx_path_release");
	pseg = prev;
    }
    ppath->box_last = 0;
    ppath->first_subpath = ppath->current_subpath = 0;
}

void gx_path_share(gx_path * ppath)
{
    if (ppath->first_subpath)
	ppath->shares_segments = 1;
}

static int gx_path_new_subpath(gx_path * ppath)
{
    subpath *psub = ppath->current_subpath;
    subpath *spp;
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (!(spp = (subpath *) (*(ppath->memory)->procs.alloc_struct) (ppath->memory, &st_subpath, "gx_path_new_subpath")))
	return ((-25));
    spp->type = s_start, spp->notes = sn_none, spp->next = 0;
    spp->last = (segment *) spp;
    spp->curve_count = 0;
    spp->is_closed = 0;
    spp->pt = ppath->position;
    if (!psub) {
	ppath->first_subpath = spp;
	spp->prev = 0;
    } else {
	segment *prev = psub->last;
	prev->next = (segment *) spp;
	spp->prev = prev;
    }
    ppath->current_subpath = spp;
    ppath->subpath_count++;
    do {
    } while (0);
    return 0;
}

int gx_path_add_point(gx_path * ppath, fixed x, fixed y)
{
    if (ppath->bbox_set)
	if ((x < ppath->bbox.p.x || x > ppath->bbox.q.x || y < ppath->bbox.p.y || y > ppath->bbox.q.y))
	    return ((-15));
    ppath->position.x = x;
    ppath->position.y = y;
    ((ppath)->state_flags = (ppath)->start_flags = psf_last_moveto);
    return 0;
}

int gx_path_add_relative_point(gx_path * ppath, fixed dx, fixed dy)
{
    if (!(((ppath)->state_flags & (psf_position_valid + psf_outside_range)) == psf_position_valid))
	return (((((ppath)->state_flags & psf_position_valid) != 0) ? (-13) : (-14))); {
	fixed nx = ppath->position.x + dx, ny = ppath->position.y + dy;
	if (((nx ^ dx) < 0 && (ppath->position.x ^ dx) >= 0) || ((ny ^ dy) < 0 && (ppath->position.y ^ dy) >= 0))
	    return ((-13));
	if (ppath->bbox_set)
	    if ((nx < ppath->bbox.p.x || nx > ppath->bbox.q.x || ny < ppath->bbox.p.y || ny > ppath->bbox.q.y))
		return ((-15));
	ppath->position.x = nx;
	ppath->position.y = ny;
	}
	((ppath)->state_flags = (ppath)->start_flags = psf_last_moveto);
	return 0;
}

int gx_path_add_line_notes(gx_path * ppath, fixed x, fixed y, segment_notes notes)
{
    subpath *psub = ppath->current_subpath;
    line_segment *lp;
    if (ppath->bbox_set)
	if ((x < ppath->bbox.p.x || x > ppath->bbox.q.x || y < ppath->bbox.p.y || y > ppath->bbox.q.y))
	    return ((-15));
    if (!(((ppath)->state_flags & psf_is_drawing) != 0)) {
	int code;
	if (!(((ppath)->state_flags & psf_position_valid) != 0))
	    return ((-14));
	code = gx_path_new_subpath(ppath);
	if (code < 0)
	    return code;
	psub = ppath->current_subpath;
    };
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (!(lp = (line_segment *) (*(ppath->memory)->procs.alloc_struct) (ppath->memory, &st_line, "gx_path_add_line")))
	return ((-25));
    lp->type = s_line, lp->notes = notes, lp->next = 0; {
	segment *prev = psub->last;
	prev->next = (segment *) lp;
	lp->prev = prev;
	psub->last = (segment *) lp;
    };
    (lp)->pt.x = ppath->position.x = (x), (lp)->pt.y = ppath->position.y = (y);
    ((ppath)->state_flags = psf_last_draw);
    do {
    } while (0);
    return 0;
}

int gx_path_add_lines_notes(gx_path * ppath, const gs_fixed_point * ppts, int count, segment_notes notes)
{
    subpath *psub = ppath->current_subpath;
    segment *prev;
    line_segment *lp = 0;
    int i;
    int code = 0;
    if (count <= 0)
	return 0;
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (!(((ppath)->state_flags & psf_is_drawing) != 0)) {
	int code;
	if (!(((ppath)->state_flags & psf_position_valid) != 0))
	    return ((-14));
	code = gx_path_new_subpath(ppath);
	if (code < 0)
	    return code;
	psub = ppath->current_subpath;
    };
    prev = psub->last;
    for (i = 0; i < count; i++) {
	fixed x = ppts[i].x;
	fixed y = ppts[i].y;
	line_segment *next;
	if (ppath->bbox_set && (x < ppath->bbox.p.x || x > ppath->bbox.q.x || y < ppath->bbox.p.y || y > ppath->bbox.q.y)) {
	    code = ((-15));
	    break;
	}
	if (!(next = (line_segment *) (*(ppath->memory)->procs.alloc_struct) (ppath->memory, &st_line, "gx_path_add_lines"))) {
	    code = ((-25));
	    break;
	}
	lp = next;
	lp->type = s_line;
	lp->notes = notes;
	prev->next = (segment *) lp;
	lp->prev = prev;
	lp->pt.x = x;
	lp->pt.y = y;
	prev = (segment *) lp;
	do {
	} while (0);
    }
    if (lp != 0)
	ppath->position.x = lp->pt.x, ppath->position.y = lp->pt.y, psub->last = (segment *) lp, lp->next = 0, ((ppath)->state_flags = psf_last_draw);
    return code;
}

int gx_path_add_rectangle(gx_path * ppath, fixed x0, fixed y0, fixed x1, fixed y1)
{
    gs_fixed_point pts[3];
    int code;
    pts[0].x = x0;
    pts[1].x = pts[2].x = x1;
    pts[2].y = y0;
    pts[0].y = pts[1].y = y1;
    if ((code = gx_path_add_point(ppath, x0, y0)) < 0 || (code = gx_path_add_lines_notes(ppath, pts, 3, sn_none)) < 0 || (code = gx_path_close_subpath_notes(ppath, sn_none)) < 0)
	return code;
    return 0;
}

int gx_path_add_curve_notes(gx_path * ppath, fixed x1, fixed y1, fixed x2, fixed y2, fixed x3, fixed y3, segment_notes notes)
{
    subpath *psub = ppath->current_subpath;
    curve_segment *lp;
    if (ppath->bbox_set) {
	if ((x1 < ppath->bbox.p.x || x1 > ppath->bbox.q.x || y1 < ppath->bbox.p.y || y1 > ppath->bbox.q.y))
	    return ((-15));
	if ((x2 < ppath->bbox.p.x || x2 > ppath->bbox.q.x || y2 < ppath->bbox.p.y || y2 > ppath->bbox.q.y))
	    return ((-15));
	if ((x3 < ppath->bbox.p.x || x3 > ppath->bbox.q.x || y3 < ppath->bbox.p.y || y3 > ppath->bbox.q.y))
	    return ((-15));
    }
    if (!(((ppath)->state_flags & psf_is_drawing) != 0)) {
	int code;
	if (!(((ppath)->state_flags & psf_position_valid) != 0))
	    return ((-14));
	code = gx_path_new_subpath(ppath);
	if (code < 0)
	    return code;
	psub = ppath->current_subpath;
    };
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (!(lp = (curve_segment *) (*(ppath->memory)->procs.alloc_struct) (ppath->memory, &st_curve, "gx_path_add_curve")))
	return ((-25));
    lp->type = s_curve, lp->notes = notes, lp->next = 0; {
	segment *prev = psub->last;
	prev->next = (segment *) lp;
	lp->prev = prev;
	psub->last = (segment *) lp;
    };
    lp->p1.x = x1;
    lp->p1.y = y1;
    lp->p2.x = x2;
    lp->p2.y = y2;
    (lp)->pt.x = ppath->position.x = (x3), (lp)->pt.y = ppath->position.y = (y3);
    psub->curve_count++;
    ppath->curve_count++;
    ((ppath)->state_flags = psf_last_draw);
    do {
    } while (0);
    return 0;
}

int gx_path_add_partial_arc_notes(gx_path * ppath, fixed x3, fixed y3, fixed xt, fixed yt, floatp fraction, segment_notes notes)
{
    fixed x0 = ppath->position.x, y0 = ppath->position.y;
    return gx_path_add_curve_notes(ppath, x0 + (fixed) ((xt - x0) * fraction), y0 + (fixed) ((yt - y0) * fraction), x3 + (fixed) ((xt - x3) * fraction), y3 + (fixed) ((yt - y3) * fraction), x3, y3, notes | sn_from_arc);
}

int gx_path_add_path(gx_path * ppath, gx_path * ppfrom)
{
    subpath *psub;
    if (ppfrom->shares_segments)
	if (!(psub = path_alloc_copy(ppfrom)))
	    return ((-25));
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (ppfrom->first_subpath) {
	if (ppath->first_subpath) {
	    subpath *psub = ppath->current_subpath;
	    segment *pseg = psub->last;
	    subpath *pfsub = ppfrom->first_subpath;
	    pseg->next = (segment *) pfsub;
	    pfsub->prev = pseg;
	} else
	    ppath->first_subpath = ppfrom->first_subpath;
	ppath->current_subpath = ppfrom->current_subpath;
	ppath->subpath_count += ppfrom->subpath_count;
	ppath->curve_count += ppfrom->curve_count;
    }
    ppath->position = ppfrom->position;
    ppath->outside_position = ppfrom->outside_position;
    ppath->state_flags = ppfrom->state_flags;
    gx_path_reset(ppfrom);
    return 0;
}

int gx_path_add_char_path(gx_path * to_path, gx_path * from_path, gs_char_path_mode mode)
{
    switch (mode) {
    default:
	gx_path_reset(from_path);
	return 0;
    case cpm_true_charpath:
    case cpm_false_charpath:
	return gx_path_add_path(to_path, from_path);
    case cpm_true_charboxpath:{
	    gs_fixed_rect bbox;
	    gx_path_bbox(from_path, &bbox);
	    return gx_path_add_rectangle(to_path, bbox.p.x, bbox.p.y, bbox.q.x, bbox.q.y);
	}
    case cpm_false_charboxpath:{
	    gs_fixed_rect bbox;
	    int code;
	    gx_path_bbox(from_path, &bbox);
	    return ((code = gx_path_add_point(to_path, bbox.p.x, bbox.p.y)) < 0 ? code : gx_path_add_line_notes(to_path, bbox.q.x, bbox.q.y, sn_none));
	}
    }
}

int gx_path_close_subpath_notes(gx_path * ppath, segment_notes notes)
{
    subpath *psub = ppath->current_subpath;
    line_close_segment *lp;
    int code;
    if (!(((ppath)->state_flags & psf_subpath_open) != 0))
	return 0;
    if ((((ppath)->state_flags & ~psf_outside_range) == psf_last_moveto)) {
	code = gx_path_new_subpath(ppath);
	if (code < 0)
	    return code;
	psub = ppath->current_subpath;
    }
    if (ppath->shares_segments)
	if (!(psub = path_alloc_copy(ppath)))
	    return ((-25));
    if (!(lp = (line_close_segment *) (*(ppath->memory)->procs.alloc_struct) (ppath->memory, &st_line_close, "gx_path_close_subpath")))
	return ((-25));
    lp->type = s_line_close, lp->notes = notes, lp->next = 0; {
	segment *prev = psub->last;
	prev->next = (segment *) lp;
	lp->prev = prev;
	psub->last = (segment *) lp;
    };
    (lp)->pt.x = ppath->position.x = (psub->pt.x), (lp)->pt.y = ppath->position.y = (psub->pt.y);
    lp->sub = psub;
    psub->is_closed = 1;
    ((ppath)->state_flags = psf_last_closepath);
    do {
    } while (0);
    return 0;
}

int gx_path_pop_close_notes(gx_path * ppath, segment_notes notes)
{
    subpath *psub = ppath->current_subpath;
    segment *pseg;
    segment *prev;
    if (psub == 0 || (pseg = psub->last) == 0 || pseg->type != s_line)
	return ((-1));
    prev = pseg->prev;
    prev->next = 0;
    psub->last = prev;
    (*(ppath->memory)->procs.free_object) (ppath->memory, pseg, "gx_path_pop_close_subpath");
    return gx_path_close_subpath_notes(ppath, notes);
}

static subpath *path_alloc_copy(gx_path * ppath)
{
    gx_path path_new;
    int code;
    code = gx_path_copy_reducing(ppath, &path_new, (~(-1L << ((1 << 2) * 8 - 1))), (1 ? pco_init : pco_none));
    if (code < 0)
	return 0;
    *ppath = path_new;
    ppath->shares_segments = 0;
    return ppath->current_subpath;
}
