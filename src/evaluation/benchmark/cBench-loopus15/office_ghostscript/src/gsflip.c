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
extern const byte byte_reverse_bits[256];
extern const byte byte_right_mask[9];
extern const byte byte_count_bits[256];
extern const byte byte_bit_run_length_0[256], byte_bit_run_length_1[256], byte_bit_run_length_2[256], byte_bit_run_length_3[256], byte_bit_run_length_4[256], byte_bit_run_length_5[256], byte_bit_run_length_6[256], byte_bit_run_length_7[256];
extern const byte *byte_bit_run_length[8];
extern const byte *byte_bit_run_length_neg[8];
extern void (*image_flip_procs[2][13]) (byte *, const byte **, uint, uint);
typedef byte byte_var;
void flip3x1(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    uint n = nbytes;
    static const bits32 tab3x1[256] = { 0, 4 + 0, 0x20 + 0, 0x20 + 4 + 0, 0x100 + 0, 4 + 0x100 + 0, 0x20 + 0x100 + 0, 0x20 + 4 + 0x100 + 0, 0x800 + 0, 4 + 0x800 + 0, 0x20 + 0x800 + 0, 0x20 + 4 + 0x800 + 0, 0x800 + 0x100 + 0, 4 + 0x800 + 0x100 + 0, 0x20 + 0x800 + 0x100 + 0, 0x20 + 4 + 0x800 + 0x100 + 0, 0x4000 + 0, 4 + 0x4000 + 0, 0x20 + 0x4000 + 0, 0x20 + 4 + 0x4000 + 0, 0x100 + 0x4000 + 0, 4 + 0x100 + 0x4000 + 0, 0x20 + 0x100 + 0x4000 + 0, 0x20 + 4 + 0x100 + 0x4000 + 0, 0x800 + 0x4000 + 0, 4 + 0x800 + 0x4000 + 0, 0x20 + 0x800 + 0x4000 + 0, 0x20 + 4 + 0x800 + 0x4000 + 0, 0x800 + 0x100 + 0x4000 + 0, 4 + 0x800 + 0x100 + 0x4000 + 0, 0x20 + 0x800 + 0x100 + 0x4000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x4000 + 0, 0x20000 + 0, 4 + 0x20000 + 0, 0x20 + 0x20000 + 0, 0x20 + 4 + 0x20000 + 0, 0x100 + 0x20000 + 0, 4 + 0x100 + 0x20000 + 0, 0x20 + 0x100 + 0x20000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0, 0x800 + 0x20000 + 0, 4 + 0x800 + 0x20000 + 0, 0x20 + 0x800 + 0x20000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0, 0x800 + 0x100 + 0x20000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0, 0x20000 + 0x4000 + 0, 4 + 0x20000 + 0x4000 + 0, 0x20 + 0x20000 + 0x4000 + 0, 0x20 + 4 + 0x20000 + 0x4000 + 0, 0x100 + 0x20000 + 0x4000 + 0, 4 + 0x100 + 0x20000 + 0x4000 + 0, 0x20 + 0x100 + 0x20000 + 0x4000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x4000 + 0, 0x800 + 0x20000 + 0x4000 + 0, 4 + 0x800 + 0x20000 + 0x4000 + 0, 0x20 + 0x800 + 0x20000 + 0x4000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x4000 + 0, 0x800 + 0x100 + 0x20000 + 0x4000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0, 0x100000 + 0, 4 + 0x100000 + 0, 0x20 + 0x100000 + 0, 0x20 + 4 + 0x100000 + 0, 0x100 + 0x100000 + 0, 4 + 0x100 + 0x100000 + 0, 0x20 + 0x100 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x100000 + 0, 0x800 + 0x100000 + 0, 4 + 0x800 + 0x100000 + 0, 0x20 + 0x800 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100000 + 0, 0x800 + 0x100 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x100000 + 0, 0x4000 + 0x100000 + 0, 4 + 0x4000 + 0x100000 + 0, 0x20 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x4000 + 0x100000 + 0, 0x100 + 0x4000 + 0x100000 + 0, 4 + 0x100 + 0x4000 + 0x100000 + 0, 0x20 + 0x100 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x4000 + 0x100000 + 0, 0x800 + 0x4000 + 0x100000 + 0, 4 + 0x800 + 0x4000 + 0x100000 + 0, 0x20 + 0x800 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x4000 + 0x100000 + 0, 0x800 + 0x100 + 0x4000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x4000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x4000 + 0x100000 + 0, 0x20000 + 0x100000 + 0, 4 + 0x20000 + 0x100000 + 0, 0x20 + 0x20000 + 0x100000 + 0, 0x20 + 4 + 0x20000 + 0x100000 + 0, 0x100 + 0x20000 + 0x100000 + 0, 4 + 0x100 + 0x20000 + 0x100000 + 0, 0x20 + 0x100 + 0x20000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x100000 + 0, 0x800 + 0x20000 + 0x100000 + 0, 4 + 0x800 + 0x20000 + 0x100000 + 0, 0x20 + 0x800 + 0x20000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x100000 + 0, 0x800 + 0x100 + 0x20000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x100000 + 0, 0x20000 + 0x4000 + 0x100000 + 0, 4 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x20000 + 0x4000 + 0x100000 + 0, 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 4 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x800 + 0x20000 + 0x4000 + 0x100000 + 0, 4 + 0x800 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 0x800 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x4000 + 0x100000 + 0, 0x800 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x100000 + 0, 0x800000 + 0, 4 + 0x800000 + 0, 0x20 + 0x800000 + 0, 0x20 + 4 + 0x800000 + 0, 0x100 + 0x800000 + 0, 4 + 0x100 + 0x800000 + 0, 0x20 + 0x100 + 0x800000 + 0, 0x20 + 4 + 0x100 + 0x800000 + 0, 0x800 + 0x800000 + 0, 4 + 0x800 + 0x800000 + 0, 0x20 + 0x800 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x800000 + 0, 0x800 + 0x100 + 0x800000 + 0, 4 + 0x800 + 0x100 + 0x800000 + 0, 0x20 + 0x800 + 0x100 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x800000 + 0, 0x4000 + 0x800000 + 0, 4 + 0x4000 + 0x800000 + 0, 0x20 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x4000 + 0x800000 + 0, 0x100 + 0x4000 + 0x800000 + 0, 4 + 0x100 + 0x4000 + 0x800000 + 0, 0x20 + 0x100 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x100 + 0x4000 + 0x800000 + 0, 0x800 + 0x4000 + 0x800000 + 0, 4 + 0x800 + 0x4000 + 0x800000 + 0, 0x20 + 0x800 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x4000 + 0x800000 + 0, 0x800 + 0x100 + 0x4000 + 0x800000 + 0, 4 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0, 0x20 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0, 0x20000 + 0x800000 + 0, 4 + 0x20000 + 0x800000 + 0, 0x20 + 0x20000 + 0x800000 + 0, 0x20 + 4 + 0x20000 + 0x800000 + 0, 0x100 + 0x20000 + 0x800000 + 0, 4 + 0x100 + 0x20000 + 0x800000 + 0, 0x20 + 0x100 + 0x20000 + 0x800000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x800000 + 0, 0x800 + 0x20000 + 0x800000 + 0, 4 + 0x800 + 0x20000 + 0x800000 + 0, 0x20 + 0x800 + 0x20000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x800000 + 0, 0x800 + 0x100 + 0x20000 + 0x800000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0, 0x20000 + 0x4000 + 0x800000 + 0, 4 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x20000 + 0x4000 + 0x800000 + 0, 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 4 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x800 + 0x20000 + 0x4000 + 0x800000 + 0, 4 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0, 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0, 0x800000 + 0x100000 + 0, 4 + 0x800000 + 0x100000 + 0, 0x20 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800000 + 0x100000 + 0, 0x100 + 0x800000 + 0x100000 + 0, 4 + 0x100 + 0x800000 + 0x100000 + 0, 0x20 + 0x100 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x800000 + 0x100000 + 0, 0x800 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x800000 + 0x100000 + 0, 0x800 + 0x100 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x800000 + 0x100000 + 0, 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x4000 + 0x800000 + 0x100000 + 0, 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x800 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x4000 + 0x800000 + 0x100000 + 0, 0x800 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20000 + 0x800000 + 0x100000 + 0, 4 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x20000 + 0x800000 + 0x100000 + 0, 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 4 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x800 + 0x20000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x800000 + 0x100000 + 0, 0x800 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x800000 + 0x100000 + 0, 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x800 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0, 0x20 + 4 + 0x800 + 0x100 + 0x20000 + 0x4000 + 0x800000 + 0x100000 + 0 };
    for (; n > 0; out += 3, ++in1, ++in2, ++in3, --n) {
	bits32 b24 = tab3x1[*in1] | (tab3x1[*in2] >> 1) | (tab3x1[*in3] >> 2);
	out[0] = (byte) (b24 >> 16);
	out[1] = (byte) (b24 >> 8);
	out[2] = (byte) b24;
    }
}

void flip3x2(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    uint n = nbytes;
    static const bits32 tab3x2[256] = { 0, 0x10 + 0, 0x20 + 0, 0x20 + 0x10 + 0, 0x400 + 0, 0x10 + 0x400 + 0, 0x20 + 0x400 + 0, 0x20 + 0x10 + 0x400 + 0, 0x800 + 0, 0x10 + 0x800 + 0, 0x20 + 0x800 + 0, 0x20 + 0x10 + 0x800 + 0, 0x800 + 0x400 + 0, 0x10 + 0x800 + 0x400 + 0, 0x20 + 0x800 + 0x400 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0, 0x10000 + 0, 0x10 + 0x10000 + 0, 0x20 + 0x10000 + 0, 0x20 + 0x10 + 0x10000 + 0, 0x400 + 0x10000 + 0, 0x10 + 0x400 + 0x10000 + 0, 0x20 + 0x400 + 0x10000 + 0, 0x20 + 0x10 + 0x400 + 0x10000 + 0, 0x800 + 0x10000 + 0, 0x10 + 0x800 + 0x10000 + 0, 0x20 + 0x800 + 0x10000 + 0, 0x20 + 0x10 + 0x800 + 0x10000 + 0, 0x800 + 0x400 + 0x10000 + 0, 0x10 + 0x800 + 0x400 + 0x10000 + 0, 0x20 + 0x800 + 0x400 + 0x10000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x10000 + 0, 0x20000 + 0, 0x10 + 0x20000 + 0, 0x20 + 0x20000 + 0, 0x20 + 0x10 + 0x20000 + 0, 0x400 + 0x20000 + 0, 0x10 + 0x400 + 0x20000 + 0, 0x20 + 0x400 + 0x20000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0, 0x800 + 0x20000 + 0, 0x10 + 0x800 + 0x20000 + 0, 0x20 + 0x800 + 0x20000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0, 0x800 + 0x400 + 0x20000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0, 0x20000 + 0x10000 + 0, 0x10 + 0x20000 + 0x10000 + 0, 0x20 + 0x20000 + 0x10000 + 0, 0x20 + 0x10 + 0x20000 + 0x10000 + 0, 0x400 + 0x20000 + 0x10000 + 0, 0x10 + 0x400 + 0x20000 + 0x10000 + 0, 0x20 + 0x400 + 0x20000 + 0x10000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x10000 + 0, 0x800 + 0x20000 + 0x10000 + 0, 0x10 + 0x800 + 0x20000 + 0x10000 + 0, 0x20 + 0x800 + 0x20000 + 0x10000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x10000 + 0, 0x800 + 0x400 + 0x20000 + 0x10000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0, 0x400000 + 0, 0x10 + 0x400000 + 0, 0x20 + 0x400000 + 0, 0x20 + 0x10 + 0x400000 + 0, 0x400 + 0x400000 + 0, 0x10 + 0x400 + 0x400000 + 0, 0x20 + 0x400 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x400000 + 0, 0x800 + 0x400000 + 0, 0x10 + 0x800 + 0x400000 + 0, 0x20 + 0x800 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400000 + 0, 0x800 + 0x400 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x400000 + 0, 0x10000 + 0x400000 + 0, 0x10 + 0x10000 + 0x400000 + 0, 0x20 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x10000 + 0x400000 + 0, 0x400 + 0x10000 + 0x400000 + 0, 0x10 + 0x400 + 0x10000 + 0x400000 + 0, 0x20 + 0x400 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x10000 + 0x400000 + 0, 0x800 + 0x10000 + 0x400000 + 0, 0x10 + 0x800 + 0x10000 + 0x400000 + 0, 0x20 + 0x800 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x10000 + 0x400000 + 0, 0x800 + 0x400 + 0x10000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x10000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x10000 + 0x400000 + 0, 0x20000 + 0x400000 + 0, 0x10 + 0x20000 + 0x400000 + 0, 0x20 + 0x20000 + 0x400000 + 0, 0x20 + 0x10 + 0x20000 + 0x400000 + 0, 0x400 + 0x20000 + 0x400000 + 0, 0x10 + 0x400 + 0x20000 + 0x400000 + 0, 0x20 + 0x400 + 0x20000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x400000 + 0, 0x800 + 0x20000 + 0x400000 + 0, 0x10 + 0x800 + 0x20000 + 0x400000 + 0, 0x20 + 0x800 + 0x20000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x400000 + 0, 0x800 + 0x400 + 0x20000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x400000 + 0, 0x20000 + 0x10000 + 0x400000 + 0, 0x10 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x20000 + 0x10000 + 0x400000 + 0, 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x10 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x800 + 0x20000 + 0x10000 + 0x400000 + 0, 0x10 + 0x800 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x800 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x10000 + 0x400000 + 0, 0x800 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x400000 + 0, 0x800000 + 0, 0x10 + 0x800000 + 0, 0x20 + 0x800000 + 0, 0x20 + 0x10 + 0x800000 + 0, 0x400 + 0x800000 + 0, 0x10 + 0x400 + 0x800000 + 0, 0x20 + 0x400 + 0x800000 + 0, 0x20 + 0x10 + 0x400 + 0x800000 + 0, 0x800 + 0x800000 + 0, 0x10 + 0x800 + 0x800000 + 0, 0x20 + 0x800 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x800000 + 0, 0x800 + 0x400 + 0x800000 + 0, 0x10 + 0x800 + 0x400 + 0x800000 + 0, 0x20 + 0x800 + 0x400 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x800000 + 0, 0x10000 + 0x800000 + 0, 0x10 + 0x10000 + 0x800000 + 0, 0x20 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x10000 + 0x800000 + 0, 0x400 + 0x10000 + 0x800000 + 0, 0x10 + 0x400 + 0x10000 + 0x800000 + 0, 0x20 + 0x400 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x400 + 0x10000 + 0x800000 + 0, 0x800 + 0x10000 + 0x800000 + 0, 0x10 + 0x800 + 0x10000 + 0x800000 + 0, 0x20 + 0x800 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x10000 + 0x800000 + 0, 0x800 + 0x400 + 0x10000 + 0x800000 + 0, 0x10 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0, 0x20 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0, 0x20000 + 0x800000 + 0, 0x10 + 0x20000 + 0x800000 + 0, 0x20 + 0x20000 + 0x800000 + 0, 0x20 + 0x10 + 0x20000 + 0x800000 + 0, 0x400 + 0x20000 + 0x800000 + 0, 0x10 + 0x400 + 0x20000 + 0x800000 + 0, 0x20 + 0x400 + 0x20000 + 0x800000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x800000 + 0, 0x800 + 0x20000 + 0x800000 + 0, 0x10 + 0x800 + 0x20000 + 0x800000 + 0, 0x20 + 0x800 + 0x20000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x800000 + 0, 0x800 + 0x400 + 0x20000 + 0x800000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0, 0x20000 + 0x10000 + 0x800000 + 0, 0x10 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x20000 + 0x10000 + 0x800000 + 0, 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x10 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x800 + 0x20000 + 0x10000 + 0x800000 + 0, 0x10 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0, 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0, 0x800000 + 0x400000 + 0, 0x10 + 0x800000 + 0x400000 + 0, 0x20 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800000 + 0x400000 + 0, 0x400 + 0x800000 + 0x400000 + 0, 0x10 + 0x400 + 0x800000 + 0x400000 + 0, 0x20 + 0x400 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x800000 + 0x400000 + 0, 0x800 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x800000 + 0x400000 + 0, 0x800 + 0x400 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x800000 + 0x400000 + 0, 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x10000 + 0x800000 + 0x400000 + 0, 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x800 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x10000 + 0x800000 + 0x400000 + 0, 0x800 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20000 + 0x800000 + 0x400000 + 0, 0x10 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x20000 + 0x800000 + 0x400000 + 0, 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x10 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x800 + 0x20000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x800000 + 0x400000 + 0, 0x800 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x800000 + 0x400000 + 0, 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x800 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x10 + 0x800 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0, 0x20 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0,
	    0x20 + 0x10 + 0x800 + 0x400 + 0x20000 + 0x10000 + 0x800000 + 0x400000 + 0 };
    for (; n > 0; out += 3, ++in1, ++in2, ++in3, --n) {
	bits32 b24 = tab3x2[*in1] | (tab3x2[*in2] >> 2) | (tab3x2[*in3] >> 4);
	out[0] = (byte) (b24 >> 16);
	out[1] = (byte) (b24 >> 8);
	out[2] = (byte) b24;
    }
}

void flip3x4(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    uint n = nbytes;
    for (; n > 0; out += 3, ++in1, ++in2, ++in3, --n) {
	byte_var b1 = *in1, b2 = *in2, b3 = *in3;
	out[0] = (b1 & 0xf0) | (b2 >> 4);
	out[1] = (b3 & 0xf0) | (b1 & 0xf);
	out[2] = (byte) (b2 << 4) | (b3 & 0xf);
    }
}

void flip3x8(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    uint n = nbytes;
    for (; n > 0; out += 3, ++in1, ++in2, ++in3, --n) {
	out[0] = *in1;
	out[1] = *in2;
	out[2] = *in3;
    }
}

void flip3x12(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *pa = planes[0] + offset;
    const byte *pb = planes[1] + offset;
    const byte *pc = planes[2] + offset;
    uint n = nbytes;
    for (; n > 0; out += 9, pa += 3, pb += 3, pc += 3, n -= 3) {
	byte_var a1 = pa[1], b0 = pb[0], b1 = pb[1], b2 = pb[2], c1 = pc[1];
	out[0] = pa[0];
	out[1] = (a1 & 0xf0) | (b0 >> 4);
	out[2] = (byte) ((b0 << 4) | (b1 >> 4));
	out[3] = pc[0];
	out[4] = (c1 & 0xf0) | (a1 & 0xf);
	out[5] = pa[2];
	out[6] = (byte) ((b1 << 4) | (b2 >> 4));
	out[7] = (byte) ((b2 << 4) | (c1 & 0xf));
	out[8] = pc[2];
    }
}

void flip4x1(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    const byte *in4 = planes[3] + offset;
    uint n = nbytes;
    for (; n > 0; out += 4, ++in1, ++in2, ++in3, ++in4, --n) {
	byte_var b1 = *in1, b2 = *in2, b3 = *in3, b4 = *in4;
	byte_var temp;
	b1 ^= (temp = ((b2 << 1) ^ b1) & 0x55);
	b2 ^= temp >> 1;
	b3 ^= (temp = ((b4 << 1) ^ b3) & 0x55);
	b4 ^= temp >> 1;
	b1 ^= (temp = ((b3 << 2) ^ b1) & 0x33);
	b3 ^= temp >> 2;
	b2 ^= (temp = ((b4 << 2) ^ b2) & 0x33);
	b4 ^= temp >> 2;
	out[0] = (b1 & 0xf0) | (b2 >> 4);
	out[1] = (b3 & 0xf0) | (b4 >> 4);
	out[2] = (byte) ((b1 << 4) | (b2 & 0xf));
	out[3] = (byte) ((b3 << 4) | (b4 & 0xf));
    }
}

void flip4x2(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    const byte *in4 = planes[3] + offset;
    uint n = nbytes;
    for (; n > 0; out += 4, ++in1, ++in2, ++in3, ++in4, --n) {
	byte_var b1 = *in1, b2 = *in2, b3 = *in3, b4 = *in4;
	byte_var temp;
	b1 ^= (temp = ((b3 << 4) ^ b1) & 0x0f);
	b3 ^= temp >> 4;
	b2 ^= (temp = ((b4 << 4) ^ b2) & 0x0f);
	b4 ^= temp >> 4;
	b1 ^= (temp = ((b2 << 2) ^ b1) & 0x33);
	b2 ^= temp >> 2;
	b3 ^= (temp = ((b4 << 2) ^ b3) & 0x33);
	b4 ^= temp >> 2;
	out[0] = b1;
	out[1] = b2;
	out[2] = b3;
	out[3] = b4;
    }
}

void flip4x4(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    const byte *in4 = planes[3] + offset;
    uint n = nbytes;
    for (; n > 0; out += 4, ++in1, ++in2, ++in3, ++in4, --n) {
	byte_var b1 = *in1, b2 = *in2, b3 = *in3, b4 = *in4;
	out[0] = (b1 & 0xf0) | (b2 >> 4);
	out[1] = (b3 & 0xf0) | (b4 >> 4);
	out[2] = (byte) ((b1 << 4) | (b2 & 0xf));
	out[3] = (byte) ((b3 << 4) | (b4 & 0xf));
    }
}

void flip4x8(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *in1 = planes[0] + offset;
    const byte *in2 = planes[1] + offset;
    const byte *in3 = planes[2] + offset;
    const byte *in4 = planes[3] + offset;
    uint n = nbytes;
    for (; n > 0; out += 4, ++in1, ++in2, ++in3, ++in4, --n) {
	out[0] = *in1;
	out[1] = *in2;
	out[2] = *in3;
	out[3] = *in4;
    }
}

void flip4x12(byte * buffer, const byte ** planes, uint offset, uint nbytes)
{
    byte *out = buffer;
    const byte *pa = planes[0] + offset;
    const byte *pb = planes[1] + offset;
    const byte *pc = planes[2] + offset;
    const byte *pd = planes[3] + offset;
    uint n = nbytes;
    for (; n > 0; out += 12, pa += 3, pb += 3, pc += 3, pd += 3, n -= 3) {
	byte_var a1 = pa[1], b1 = pb[1], c1 = pc[1], d1 = pd[1]; {
	    byte_var v0;
	    out[0] = pa[0];
	    v0 = pb[0];
	    out[1] = (a1 & 0xf0) | (v0 >> 4);
	    out[2] = (byte) ((v0 << 4) | (b1 >> 4));
	    out[3] = pc[0];
	    v0 = pd[0];
	    out[4] = (c1 & 0xf0) | (v0 >> 4);
	    out[5] = (byte) ((v0 << 4) | (d1 >> 4));
	}
	{
	    byte_var v2;
	    v2 = pa[2];
	    out[6] = (byte) ((a1 << 4) | (v2 >> 4));
	    out[7] = (byte) ((v2 << 4) | (b1 & 0xf));
	    out[8] = pb[2];
	    v2 = pc[2];
	    out[9] = (byte) ((c1 << 4) | (v2 >> 4));
	    out[10] = (byte) ((v2 << 4) | (d1 & 0xf));
	    out[11] = pd[2];
	}
    }
}

void (*image_flip_procs[2][13]) (byte *, const byte **, uint, uint) = { {
0, flip3x1, flip3x2, 0, flip3x4, 0, 0, 0, flip3x8, 0, 0, 0, flip3x12}, {
0, flip4x1, flip4x2, 0, flip4x4, 0, 0, 0, flip4x8, 0, 0, 0, flip4x12}};
