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
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__ ((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__ ((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int ffs(int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__ ((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern byte gs_alloc_fill_alloc, gs_alloc_fill_block, gs_alloc_fill_collected, gs_alloc_fill_deleted, gs_alloc_fill_free;
extern void gs_alloc_memset(void *, int, ulong);
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
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef struct gs_memory_gc_status_s {
    long vm_threshold;
    long max_vm;
    int *psignal;
    int signal_value;
    bool enabled;
    long requested;
} gs_memory_gc_status_t;
void gs_memory_gc_status(const gs_ref_memory_t *, gs_memory_gc_status_t *);
void gs_memory_set_gc_status(gs_ref_memory_t *, const gs_memory_gc_status_t *);
void ialloc_reset(gs_ref_memory_t *);
void ialloc_reset_free(gs_ref_memory_t *);
void ialloc_set_limit(gs_ref_memory_t *);
typedef gs_id gx_bitmap_id;
typedef struct gx_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
} gx_bitmap;
typedef struct gx_tile_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
} gx_tile_bitmap;
typedef struct gx_strip_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
    ushort rep_shift;
    ushort shift;
} gx_strip_bitmap;
typedef struct obj_header_data_s {
    union _f {
	struct _h {
	    unsigned large:1;
	} h;
	struct _l {
	    unsigned _:1, lmark:2, lsize:(((1 << 2) * 8 - 1) - 2);
	} l;
	struct _m {
	    unsigned _:1, smark:((1 << 2) * 8 - 1);
	} m;
	struct _b {
	    unsigned _:1, back:((1 << 2) * 8 - 1);
	} b;
    } f;
    uint size;
    union _t {
	gs_memory_type_ptr_t type;
	uint reloc;
    } t;
} obj_header_data_t;
struct obj_header_s {
    union _d {
	obj_header_data_t o;
	byte _pad[(((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) & (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1) ? ((sizeof(obj_header_data_t)) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) / ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) * ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) : ((sizeof(obj_header_data_t)) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) & -((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)))];
    }
    d;
};
typedef struct chunk_head_s {
    byte *dest;
    obj_header_t free;
} chunk_head_t;
typedef uint string_mark_unit;
typedef uint string_reloc_offset;
typedef struct chunk_s chunk_t;
struct chunk_s {
    chunk_head_t *chead;
    byte *cbase;
    byte *cbot;
    obj_header_t *rcur;
    byte *rtop;
    byte *ctop;
    byte *climit;
    byte *cend;
    chunk_t *cprev;
    chunk_t *cnext;
    chunk_t *outer;
    uint inner_count;
    bool has_refs;
    ushort *sfree1;
    ushort sfree;
    byte *odest;
    byte *smark;
    uint smark_size;
    byte *sbase;
    string_reloc_offset *sreloc;
    byte *sdest;
    byte *rescan_bot;
    byte *rescan_top;
};
extern const gs_memory_struct_type_t st_chunk;
void alloc_init_chunk(chunk_t *, byte *, byte *, bool, chunk_t *);
void alloc_init_free_strings(chunk_t *);
typedef struct chunk_locator_s {
    const gs_ref_memory_t *memory;
    chunk_t *cp;
} chunk_locator_t;
bool chunk_locate_ptr(const void *, chunk_locator_t *);
void alloc_close_chunk(gs_ref_memory_t * mem);
void alloc_open_chunk(gs_ref_memory_t * mem);
void alloc_link_chunk(chunk_t *, gs_ref_memory_t *);
void alloc_unlink_chunk(chunk_t *, gs_ref_memory_t *);
void alloc_free_chunk(chunk_t *, gs_ref_memory_t *);
struct alloc_save_s;
struct alloc_change_s;
struct gs_ref_memory_s {
    gs_memory_procs_t procs;
    gs_memory_t *parent;
    uint chunk_size;
    uint large_size;
    gs_ref_memory_t *global;
    uint space;
    gs_memory_gc_status_t gc_status;
    ulong limit;
    chunk_t *cfirst;
    chunk_t *clast;
    chunk_t cc;
    chunk_t *pcc;
    chunk_locator_t cfreed;
    ulong allocated;
    long inherited;
    ulong gc_allocated;
    struct lost_ {
	ulong objects;
	ulong refs;
	ulong strings;
    } lost;
    gs_gc_root_t *roots;
    int num_contexts;
    struct alloc_change_s *changes;
    struct alloc_save_s *saved;
    struct alloc_save_s *reloc_saved;
    gs_memory_status_t previous_status;
    obj_header_t *freelists[((800 + (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1) / (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + 1)];
};
extern const gs_memory_struct_type_t st_ref_memory;
extern const gs_memory_procs_t gs_ref_memory_procs;
static gs_ptr_type_t ref_memory_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void ref_memory_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
const gs_memory_struct_type_t st_ref_memory = { sizeof(gs_ref_memory_t), "gs_ref_memory", 0, 0, ref_memory_enum_ptrs, ref_memory_reloc_ptrs, 0 };

static gs_ptr_type_t ref_memory_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gs_ref_memory_t *) vptr)->changes);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gs_ref_memory_t *) vptr)->saved);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void ref_memory_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	((gs_ref_memory_t *) vptr)->changes = gs_reloc_struct_ptr((const void *) ((const gs_ref_memory_t *) vptr)->changes, gcst);
	((gs_ref_memory_t *) vptr)->reloc_saved = gs_reloc_struct_ptr(((gs_ref_memory_t *) vptr)->saved, gcst);
}} static ulong compute_free_objects(gs_ref_memory_t *);

static obj_header_t *alloc_obj(gs_ref_memory_t *, ulong, gs_memory_type_ptr_t, bool, client_name_t);
static chunk_t *alloc_add_chunk(gs_ref_memory_t *, ulong, bool, client_name_t);
void alloc_close_chunk(gs_ref_memory_t *);
static byte *i_alloc_bytes(gs_memory_t * mem, uint nbytes, client_name_t cname);
static byte *i_alloc_bytes_immovable(gs_memory_t * mem, uint nbytes, client_name_t cname);
static void *i_alloc_struct(gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
static void *i_alloc_struct_immovable(gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
static byte *i_alloc_byte_array(gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
static byte *i_alloc_byte_array_immovable(gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
static void *i_alloc_struct_array(gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
static void *i_alloc_struct_array_immovable(gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
static void *i_resize_object(gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname);
static uint i_object_size(gs_memory_t * mem, const void *obj);
static gs_memory_type_ptr_t i_object_type(gs_memory_t * mem, const void *obj);
static void i_free_object(gs_memory_t * mem, void *data, client_name_t cname);
static byte *i_alloc_string(gs_memory_t * mem, uint nbytes, client_name_t cname);
static byte *i_alloc_string_immovable(gs_memory_t * mem, uint nbytes, client_name_t cname);
static byte *i_resize_string(gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname);
static void i_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
static void i_register_root(gs_memory_t * mem, gs_gc_root_t * root, gs_ptr_type_t ptype, void **pp, client_name_t cname);
static void i_unregister_root(gs_memory_t * mem, gs_gc_root_t * root, client_name_t cname);
static void i_status(gs_memory_t * mem, gs_memory_status_t * status);
static void i_enable_free(gs_memory_t * mem, bool enable);
const gs_memory_procs_t gs_ref_memory_procs = { i_alloc_bytes, i_alloc_bytes_immovable, i_alloc_struct, i_alloc_struct_immovable, i_alloc_byte_array, i_alloc_byte_array_immovable, i_alloc_struct_array, i_alloc_struct_array_immovable, i_resize_object, i_object_size, i_object_type, i_free_object, i_alloc_string, i_alloc_string_immovable, i_resize_string, i_free_string, i_register_root, i_unregister_root, i_status, i_enable_free };

static void *ialloc_solo(gs_memory_t *, gs_memory_type_ptr_t, chunk_t **);
gs_ref_memory_t *ialloc_alloc_state(gs_memory_t * parent, uint chunk_size)
{
    chunk_t *cp;
    gs_ref_memory_t *iimem = ialloc_solo(parent, &st_ref_memory, &cp);
    if (iimem == 0)
	return 0;
    iimem->procs = gs_ref_memory_procs;
    iimem->parent = parent;
    iimem->chunk_size = chunk_size;
    iimem->large_size = ((chunk_size / 4) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) + 1;
    iimem->gc_status.vm_threshold = chunk_size * 3L;
    iimem->gc_status.max_vm = (~(-1L << ((1 << 2) * 8 - 1)));
    iimem->gc_status.psignal = ((void *) 0);
    iimem->gc_status.enabled = ((bool) 0);
    iimem->previous_status.allocated = 0;
    iimem->previous_status.used = 0;
    ialloc_reset(iimem);
    iimem->cfirst = iimem->clast = cp;
    ialloc_set_limit(iimem);
    iimem->cc.cbot = iimem->cc.ctop = 0;
    iimem->pcc = 0;
    iimem->roots = 0;
    iimem->num_contexts = 1;
    iimem->saved = 0;
    return iimem;
}

static void *ialloc_solo(gs_memory_t * parent, gs_memory_type_ptr_t pstype, chunk_t ** pcp)
{
    chunk_t *cp = (chunk_t *) (*(parent)->procs.alloc_struct_immovable) (parent, &st_chunk, "ialloc_solo(chunk)");
    uint csize = (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) & (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1) ? ((sizeof(chunk_head_t) + sizeof(obj_header_t) + pstype->ssize) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) / ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) * ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) : ((sizeof(chunk_head_t) + sizeof(obj_header_t) + pstype->ssize) + (((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) - 1)) & -((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)));
    byte *cdata = (*(parent)->procs.alloc_bytes_immovable) (parent, csize, "ialloc_solo");
    obj_header_t *obj = (obj_header_t *) (cdata + sizeof(chunk_head_t));
    if (cp == 0 || cdata == 0)
	return 0;
    alloc_init_chunk(cp, cdata, cdata + csize, ((bool) 0), (chunk_t *) ((void *) 0));
    cp->cbot = cp->ctop;
    cp->cprev = cp->cnext = 0;
    obj->d.o.f.h.large = 0;
    obj->d.o.size = pstype->ssize;
    obj->d.o.t.type = pstype;
    *pcp = cp;
    return (void *) (obj + 1);
} void ialloc_reset(gs_ref_memory_t * mem)
{
    mem->cfirst = 0;
    mem->clast = 0;
    mem->cc.rcur = 0;
    mem->cc.rtop = 0;
    mem->cc.has_refs = ((bool) 0);
    mem->allocated = 0;
    mem->inherited = 0;
    mem->changes = 0;
    ialloc_reset_free(mem);
} void ialloc_reset_free(gs_ref_memory_t * mem)
{
    int i;
    obj_header_t **p;
    mem->lost.objects = 0;
    mem->lost.refs = 0;
    mem->lost.strings = 0;
    mem->cfreed.cp = 0;
    for (i = 0, p = &mem->freelists[0]; i < ((800 + (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1) / (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + 1); i++, p++)
	*p = 0;
}

void ialloc_set_limit(register gs_ref_memory_t * mem)
{
    ulong max_allocated = (mem->gc_status.max_vm > mem->previous_status.allocated ? mem->gc_status.max_vm - mem->previous_status.allocated : 0);
    if (mem->gc_status.enabled) {
	ulong limit = mem->gc_allocated + mem->gc_status.vm_threshold;
	if (limit < mem->previous_status.allocated)
	    mem->limit = 0;
	else {
	    limit -= mem->previous_status.allocated;
	    mem->limit = (((limit) < (max_allocated)) ? (limit) : (max_allocated));
	}
    } else
	mem->limit = max_allocated;
    do {
    } while (0);
}

static uint i_object_size(gs_memory_t * mem, const void *obj)
{
    return (((const obj_header_t *) obj - 1)->d.o.size);
} static gs_memory_type_ptr_t i_object_type(gs_memory_t * mem, const void *obj)
{
    return ((const obj_header_t *) obj - 1)->d.o.t.type;
} void gs_memory_gc_status(const gs_ref_memory_t * mem, gs_memory_gc_status_t * pstat)
{
    *pstat = mem->gc_status;
} void gs_memory_set_gc_status(gs_ref_memory_t * mem, const gs_memory_gc_status_t * pstat)
{
    mem->gc_status = *pstat;
    ialloc_set_limit(mem);
} static byte *i_alloc_bytes(gs_memory_t * mem, uint size, client_name_t cname)
{
    obj_header_t *obj;
    obj_header_t **pfl;
    if (size <= 800 && *(pfl = &((gs_ref_memory_t *) mem)->freelists[(size + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) >> 2]) != 0) {
	obj = *pfl;
	*pfl = *(obj_header_t **) obj;
	obj[-1].d.o.size = size;
	obj[-1].d.o.t.type = &st_bytes;
	do {
	} while (0);
	do {
	} while (0);
    } else if ((((gs_ref_memory_t *) mem)->cc.ctop - (byte *) (obj = (obj_header_t *) ((gs_ref_memory_t *) mem)->cc.cbot)) >= size + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + sizeof(obj_header_t) * 2) && size < ((gs_ref_memory_t *) mem)->large_size) {
	((gs_ref_memory_t *) mem)->cc.cbot = (byte *) obj + (uint) ((((size) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1));
	obj->d.o.f.h.large = 0;
	obj->d.o.size = size;
	obj->d.o.t.type = &st_bytes;
	obj++;
	do {
	} while (0);
	do {
	} while (0);
    } else {
	obj = alloc_obj(((gs_ref_memory_t *) mem), size, &st_bytes, ((bool) 0), cname);
	if (obj == 0)
	    return 0;
	do {
	} while (0);
    }
    return (byte *) obj;
}

static byte *i_alloc_bytes_immovable(gs_memory_t * mem, uint size, client_name_t cname)
{
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), size, &st_bytes, ((bool) 1), cname);
    if (obj == 0)
	return 0;
    do {
    } while (0);
    return (byte *) obj;
}

static void *i_alloc_struct(gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname)
{
    uint size = pstype->ssize;
    obj_header_t *obj;
    obj_header_t **pfl;
    if (size <= 800 && *(pfl = &((gs_ref_memory_t *) mem)->freelists[(size + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) >> 2]) != 0) {
	obj = *pfl;
	*pfl = *(obj_header_t **) obj;
	obj[-1].d.o.size = size;
	obj[-1].d.o.t.type = pstype;
	do {
	} while (0);
	do {
	} while (0);
    } else if ((((gs_ref_memory_t *) mem)->cc.ctop - (byte *) (obj = (obj_header_t *) ((gs_ref_memory_t *) mem)->cc.cbot)) >= size + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + sizeof(obj_header_t) * 2) && size < ((gs_ref_memory_t *) mem)->large_size) {
	((gs_ref_memory_t *) mem)->cc.cbot = (byte *) obj + (uint) ((((size) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1));
	obj->d.o.f.h.large = 0;
	obj->d.o.size = size;
	obj->d.o.t.type = pstype;
	obj++;
	do {
	} while (0);
	do {
	} while (0);
    } else {
	obj = alloc_obj(((gs_ref_memory_t *) mem), size, pstype, ((bool) 0), cname);
	if (obj == 0)
	    return 0;
	do {
	} while (0);
    }
    return obj;
}

static void *i_alloc_struct_immovable(gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname)
{
    uint size = pstype->ssize;
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), size, pstype, ((bool) 1), cname);
    if (obj == 0)
	return 0;
    do {
    } while (0);
    return obj;
}

static byte *i_alloc_byte_array(gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname)
{
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), (ulong) num_elements * elt_size, &st_bytes, ((bool) 0), cname);
    do {
    } while (0);
    return (byte *) obj;
}

static byte *i_alloc_byte_array_immovable(gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname)
{
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), (ulong) num_elements * elt_size, &st_bytes, ((bool) 1), cname);
    do {
    } while (0);
    return (byte *) obj;
}

static void *i_alloc_struct_array(gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname)
{
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), (ulong) num_elements * pstype->ssize, pstype, ((bool) 0), cname);
    do {
    } while (0);
    return (char *) obj;
} static void *i_alloc_struct_array_immovable(gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname)
{
    obj_header_t *obj = alloc_obj(((gs_ref_memory_t *) mem), (ulong) num_elements * pstype->ssize, pstype, ((bool) 1), cname);
    do {
    } while (0);
    return (char *) obj;
} static void *i_resize_object(gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname)
{
    obj_header_t *pp = (obj_header_t *) obj - 1;
    gs_memory_type_ptr_t pstype = pp->d.o.t.type;
    ulong old_size = ((pp)->d.o.size);
    ulong new_size = (ulong) pstype->ssize * new_num_elements;
    void *new_obj;
    if ((byte *) obj + (uint) (((old_size) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) == ((gs_ref_memory_t *) mem)->cc.cbot && ((gs_ref_memory_t *) mem)->cc.ctop - ((gs_ref_memory_t *) mem)->cc.cbot > new_size + (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) {
	((gs_ref_memory_t *) mem)->cc.cbot = (byte *) obj + (uint) (((new_size) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1));
	pp->d.o.size = new_size;
	do {
	} while (0);
	return obj;
    }
    new_obj = (void *) (*(mem)->procs.alloc_struct_array) (mem, new_num_elements, pstype, cname);
    if (new_obj == 0)
	return 0;
    memcpy(new_obj, obj, (((old_size) < (new_size)) ? (old_size) : (new_size)));
    (*(mem)->procs.free_object) (mem, obj, cname);
    return new_obj;
}

static void i_free_object(gs_memory_t * mem, void *ptr, client_name_t cname)
{
    obj_header_t *pp;
    void (*finalize) (void *ptr);
    uint size;
    if (ptr == 0)
	return;
    pp = (obj_header_t *) ptr - 1;
    size = ((pp)->d.o.size);
    finalize = pp->d.o.t.type->finalize;
    if (finalize != 0) {
	do {
	} while (0);
	(*finalize) (ptr);
    }
    if ((byte *) ptr + (uint) (((size) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) == ((gs_ref_memory_t *) mem)->cc.cbot) {
	do {
	} while (0);
	do {
	} while (0);
	((gs_ref_memory_t *) mem)->cc.cbot = (byte *) pp;
	return;
    }
    if (pp->d.o.f.h.large) {
	chunk_locator_t cl;
	cl.memory = ((gs_ref_memory_t *) mem);
	cl.cp = 0;
	if (chunk_locate_ptr(ptr, &cl)) {
	    alloc_free_chunk(cl.cp, ((gs_ref_memory_t *) mem));
	    return;
	}
    }
    if (size <= 800 && (uint) (((size) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) >= sizeof(obj_header_t *)) {
	((gs_ref_memory_t *) mem)->cfreed.memory = ((gs_ref_memory_t *) mem);
	if ((((&((gs_ref_memory_t *) mem)->cfreed)->cp != 0 && ((((ptr_ord_t) ((const byte *) (ptr)) >= (ptr_ord_t) (((&((gs_ref_memory_t *) mem)->cfreed)->cp)->cbase)) && ((ptr_ord_t) ((const byte *) (ptr)) < (ptr_ord_t) (((&((gs_ref_memory_t *) mem)->cfreed)->cp)->cend))) && !(((&((gs_ref_memory_t *) mem)->cfreed)->cp)->inner_count != 0 && (((ptr_ord_t) ((const byte *) (ptr)) >= (ptr_ord_t) (((&((gs_ref_memory_t *) mem)->cfreed)->cp)->cbot)) && ((ptr_ord_t) ((const byte *) (ptr)) < (ptr_ord_t) (((&((gs_ref_memory_t *) mem)->cfreed)->cp)->ctop)))))) || chunk_locate_ptr(ptr, &((gs_ref_memory_t *) mem)->cfreed))) {
	    obj_header_t **pfl = &((gs_ref_memory_t *) mem)->freelists[(size + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) >> 2];
	    pp->d.o.t.type = &st_free;
	    do {
	    } while (0);
	    *(obj_header_t **) ptr = *pfl;
	    *pfl = (obj_header_t *) ptr;
	    do {
	    } while (0);
	    return;
	}
    } else {
	pp->d.o.t.type = &st_free;
	do {
	} while (0);
    }
    do {
    } while (0);
    ((gs_ref_memory_t *) mem)->lost.objects += (uint) ((((size) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1));
}

static byte *i_alloc_string(gs_memory_t * mem, uint nbytes, client_name_t cname)
{
    byte *str;
  top:if (((gs_ref_memory_t *) mem)->cc.ctop - ((gs_ref_memory_t *) mem)->cc.cbot > nbytes) {
	do {
	} while (0);
	str = ((gs_ref_memory_t *) mem)->cc.ctop -= nbytes;
	do {
	} while (0);
	return str;
    }
    if (nbytes > ((((unsigned int) 0xffffffff + (unsigned int) 0) - sizeof(chunk_head_t)) / ((1 << (2 + 4)) + ((1 << (2 + 4)) / 8) + sizeof(string_reloc_offset))) * (1 << (2 + 4))) {
	return 0;
    }
    if (nbytes >= ((gs_ref_memory_t *) mem)->large_size) {
	return i_alloc_string_immovable(mem, nbytes, cname);
    } else {
	chunk_t *cp = alloc_add_chunk(((gs_ref_memory_t *) mem), (ulong) ((gs_ref_memory_t *) mem)->chunk_size, ((bool) 1), "chunk");
	if (cp == 0)
	    return 0;
	alloc_close_chunk(((gs_ref_memory_t *) mem));
	((gs_ref_memory_t *) mem)->pcc = cp;
	((gs_ref_memory_t *) mem)->cc = *((gs_ref_memory_t *) mem)->pcc;
	do {
	} while (0);
	goto top;
    }
}

static byte *i_alloc_string_immovable(gs_memory_t * mem, uint nbytes, client_name_t cname)
{
    byte *str;
    uint asize = (((nbytes) + ((1 << (2 + 4)) - 1)) / (1 << (2 + 4)) * ((1 << (2 + 4)) + ((1 << (2 + 4)) / 8) + sizeof(string_reloc_offset))) + sizeof(chunk_head_t);
    chunk_t *cp = alloc_add_chunk(((gs_ref_memory_t *) mem), (ulong) asize, ((bool) 1), "large string chunk");
    if (cp == 0)
	return 0;
    str = cp->ctop = cp->climit - nbytes;
    do {
    } while (0);
    do {
    } while (0);
    return str;
}

static byte *i_resize_string(gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname)
{
    byte *ptr;
    if (data == ((gs_ref_memory_t *) mem)->cc.ctop && (new_num < old_num || ((gs_ref_memory_t *) mem)->cc.ctop - ((gs_ref_memory_t *) mem)->cc.cbot > new_num - old_num)) {
	ptr = data + old_num - new_num;
	do {
	} while (0);
	((gs_ref_memory_t *) mem)->cc.ctop = ptr;
	memmove(ptr, data, (((old_num) < (new_num)) ? (old_num) : (new_num)));
    } else {
	ptr = (*(mem)->procs.alloc_string) (mem, new_num, cname);
	if (ptr == 0)
	    return 0;
	memcpy(ptr, data, (((old_num) < (new_num)) ? (old_num) : (new_num)));
	(*(mem)->procs.free_string) (mem, data, old_num, cname);
    }
    return ptr;
}

static void i_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname)
{
    if (data == ((gs_ref_memory_t *) mem)->cc.ctop) {
	do {
	} while (0);
	((gs_ref_memory_t *) mem)->cc.ctop += nbytes;
    } else {
	do {
	} while (0);
	((gs_ref_memory_t *) mem)->lost.strings += nbytes;
    }
    do {
    } while (0);
}

static void i_status(gs_memory_t * mem, gs_memory_status_t * pstat)
{
    ulong unused = ((gs_ref_memory_t *) mem)->lost.refs + ((gs_ref_memory_t *) mem)->lost.strings;
    ulong inner = 0;
    alloc_close_chunk(((gs_ref_memory_t *) mem)); {
	const chunk_t *cp = ((gs_ref_memory_t *) mem)->cfirst;
	while (cp != 0) {
	    unused += cp->ctop - cp->cbot;
	    if (cp->outer)
		inner += cp->cend - (byte *) cp->chead;
	    cp = cp->cnext;
	}
    }
    unused += compute_free_objects(((gs_ref_memory_t *) mem));
    pstat->used = ((gs_ref_memory_t *) mem)->allocated + inner - unused + ((gs_ref_memory_t *) mem)->previous_status.used;
    pstat->allocated = ((gs_ref_memory_t *) mem)->allocated + ((gs_ref_memory_t *) mem)->previous_status.allocated;
}

static void i_enable_free(gs_memory_t * mem, bool enable)
{
    if (enable)
	mem->procs.free_object = i_free_object, mem->procs.free_string = i_free_string;
    else
	mem->procs.free_object = gs_ignore_free_object, mem->procs.free_string = gs_ignore_free_string;
}

static ulong compute_free_objects(gs_ref_memory_t * mem)
{
    ulong unused = mem->lost.objects;
    int i;
    for (i = 0; i < ((800 + (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1) / (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + 1); i++) {
	uint free_size = (i << 2) + sizeof(obj_header_t);
	const obj_header_t *pfree;
	for (pfree = mem->freelists[i]; pfree != 0; pfree = *(const obj_header_t * const *) pfree)
	    unused += free_size;
    } return unused;
}

static obj_header_t *alloc_obj(gs_ref_memory_t * mem, ulong lsize, gs_memory_type_ptr_t pstype, bool immovable, client_name_t cname)
{
    obj_header_t *ptr;
    if (lsize >= mem->large_size || immovable) {
	ulong asize = ((lsize + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)) + sizeof(obj_header_t);
	chunk_t *cp = alloc_add_chunk(mem, asize + sizeof(chunk_head_t), ((bool) 0), "large object chunk");
	if (cp == 0)
	    return 0;
	ptr = (obj_header_t *) cp->cbot;
	cp->cbot += asize;
	ptr->d.o.f.h.large = 1;
	((ptr)->d.o.f.l.lsize = 0, (ptr)->d.o.size = (lsize));
    } else {
	uint asize = (uint) (((((uint) lsize) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1));
	while (mem->cc.ctop - (byte *) (ptr = (obj_header_t *) mem->cc.cbot) <= asize + sizeof(obj_header_t)) {
	    chunk_t *cp = alloc_add_chunk(mem, (ulong) mem->chunk_size, ((bool) 1), "chunk");
	    if (cp == 0)
		return 0;
	    alloc_close_chunk(mem);
	    mem->pcc = cp;
	    mem->cc = *mem->pcc;
	    do {
	    } while (0);
	}
	mem->cc.cbot = (byte *) ptr + asize;
	ptr->d.o.f.h.large = 0;
	ptr->d.o.size = (uint) lsize;
    }
    ptr->d.o.t.type = pstype;
    ptr++;
    do {
    } while (0);
    return ptr;
}

static void i_register_root(gs_memory_t * mem, gs_gc_root_t * rp, gs_ptr_type_t ptype, void **up, client_name_t cname)
{
    do {
    } while (0);
    rp->ptype = ptype, rp->p = up;
    rp->next = ((gs_ref_memory_t *) mem)->roots, ((gs_ref_memory_t *) mem)->roots = rp;
}

static void i_unregister_root(gs_memory_t * mem, gs_gc_root_t * rp, client_name_t cname)
{
    gs_gc_root_t **rpp = &((gs_ref_memory_t *) mem)->roots;
    do {
    } while (0);
    while (*rpp != rp)
	rpp = &(*rpp)->next;
    *rpp = (*rpp)->next;
}

static gs_ptr_type_t chunk_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((chunk_t *) vptr)->cprev);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((chunk_t *) vptr)->cnext);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void chunk_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((chunk_t *) vptr)->cprev = gs_reloc_struct_ptr((const void *) ((const chunk_t *) vptr)->cprev, gcst);
    ((chunk_t *) vptr)->cnext = gs_reloc_struct_ptr((const void *) ((const chunk_t *) vptr)->cnext, gcst);
} const gs_memory_struct_type_t st_chunk = { sizeof(chunk_t), "chunk_t", 0, 0, chunk_enum_ptrs, chunk_reloc_ptrs, 0 };

void alloc_link_chunk(chunk_t * cp, gs_ref_memory_t * mem)
{
    byte *cdata = cp->cbase;
    chunk_t *icp;
    chunk_t *prev;
    for (icp = mem->cfirst; icp != 0 && ((ptr_ord_t) (cdata) >= (ptr_ord_t) (icp->ctop)); icp = icp->cnext);
    cp->cnext = icp;
    if (icp == 0) {
	prev = ((gs_ref_memory_t *) mem)->clast;
	((gs_ref_memory_t *) mem)->clast = cp;
    } else {
	prev = icp->cprev;
	icp->cprev = cp;
    }
    cp->cprev = prev;
    if (prev == 0)
	((gs_ref_memory_t *) mem)->cfirst = cp;
    else
	prev->cnext = cp;
    if (((gs_ref_memory_t *) mem)->pcc != 0) {
	((gs_ref_memory_t *) mem)->cc.cnext = ((gs_ref_memory_t *) mem)->pcc->cnext;
	((gs_ref_memory_t *) mem)->cc.cprev = ((gs_ref_memory_t *) mem)->pcc->cprev;
    }
}

static chunk_t *alloc_add_chunk(gs_ref_memory_t * mem, ulong csize, bool has_strings, client_name_t cname)
{
    gs_memory_t *parent = mem->parent;
    chunk_t *cp = (chunk_t *) (*(parent)->procs.alloc_struct_immovable) (parent, &st_chunk, cname);
    byte *cdata;
    ulong elt_size = csize;
    uint num_elts = 1;
    if ((ulong) (mem->allocated + mem->inherited) >= mem->limit) {
	mem->gc_status.requested += csize;
	if (mem->limit >= mem->gc_status.max_vm || mem->gc_status.psignal == 0)
	    return 0;
	do {
	} while (0);
	*mem->gc_status.psignal = mem->gc_status.signal_value;
    }
    while ((uint) elt_size != elt_size)
	elt_size = (elt_size + 1) >> 1, num_elts <<= 1;
    cdata = (*(parent)->procs.alloc_byte_array_immovable) (parent, num_elts, elt_size, cname);
    if (cp == 0 || cdata == 0) {
	(*(parent)->procs.free_object) (parent, cdata, cname);
	(*(parent)->procs.free_object) (parent, cp, cname);
	mem->gc_status.requested = csize;
	return 0;
    }
    alloc_init_chunk(cp, cdata, cdata + csize, has_strings, (chunk_t *) 0);
    alloc_link_chunk(cp, mem);
    mem->allocated += (*(parent)->procs.object_size) (parent, cdata) + (*(parent)->procs.object_size) (parent, cp);
    return cp;
}

void alloc_init_chunk(chunk_t * cp, byte * bot, byte * top, bool has_strings, chunk_t * outer)
{
    byte *cdata = bot;
    if (outer != 0)
	outer->inner_count++;
    cp->chead = (chunk_head_t *) cdata;
    cdata += sizeof(chunk_head_t);
    cp->cbot = cp->cbase = cdata;
    cp->cend = top;
    cp->rcur = 0;
    cp->rtop = 0;
    cp->outer = outer;
    cp->inner_count = 0;
    cp->has_refs = ((bool) 0);
    cp->sbase = cdata;
    if (has_strings && top - cdata >= ((1 << (2 + 4)) + ((1 << (2 + 4)) / 8) + sizeof(string_reloc_offset)) + sizeof(long) - 1) {
	uint nquanta = ((top - cdata) / ((1 << (2 + 4)) + ((1 << (2 + 4)) / 8) + sizeof(string_reloc_offset)));
	cp->climit = cdata + nquanta * (1 << (2 + 4));
	cp->smark = cp->climit;
	cp->smark_size = ((nquanta) * ((1 << (2 + 4)) / 8));
	cp->sreloc = (string_reloc_offset *) (cp->smark + cp->smark_size);
	cp->sfree1 = (ushort *) cp->sreloc;
    } else {
	cp->climit = cp->cend;
	cp->sfree1 = 0;
	cp->smark = 0;
	cp->smark_size = 0;
	cp->sreloc = 0;
    }
    cp->ctop = cp->climit;
    alloc_init_free_strings(cp);
}

void alloc_init_free_strings(chunk_t * cp)
{
    if (cp->sfree1)
	memset(cp->sfree1, 0, ((cp->climit - ((byte *) (cp)->chead) + 255) >> 8) * sizeof(*cp->sfree1));
    cp->sfree = 0;
}

void alloc_close_chunk(gs_ref_memory_t * mem)
{
    if (mem->pcc != 0) {
	*mem->pcc = mem->cc;
    }
}

void alloc_open_chunk(gs_ref_memory_t * mem)
{
    if (mem->pcc != 0) {
	mem->cc = *mem->pcc;
    }
}

void alloc_unlink_chunk(chunk_t * cp, gs_ref_memory_t * mem)
{
    if (cp->cprev == 0)
	mem->cfirst = cp->cnext;
    else
	cp->cprev->cnext = cp->cnext;
    if (cp->cnext == 0)
	mem->clast = cp->cprev;
    else
	cp->cnext->cprev = cp->cprev;
    if (mem->pcc != 0) {
	mem->cc.cnext = mem->pcc->cnext;
	mem->cc.cprev = mem->pcc->cprev;
	if (mem->pcc == cp) {
	    mem->pcc = 0;
	    mem->cc.cbot = mem->cc.ctop = 0;
	}
    }
}

void alloc_free_chunk(chunk_t * cp, gs_ref_memory_t * mem)
{
    gs_memory_t *parent = mem->parent;
    alloc_unlink_chunk(cp, mem);
    if (mem->cfreed.cp == cp)
	mem->cfreed.cp = 0;
    if (cp->outer == 0) {
	byte *cdata = (byte *) cp->chead;
	mem->allocated -= (*(parent)->procs.object_size) (parent, cdata);
	(*(parent)->procs.free_object) (parent, cdata, "alloc_free_chunk(data)");
    } else
	cp->outer->inner_count--;
    mem->allocated -= (*(parent)->procs.object_size) (parent, cp);
    (*(parent)->procs.free_object) (parent, cp, "alloc_free_chunk(chunk struct)");
}

bool chunk_locate_ptr(const void *vptr, chunk_locator_t * clp)
{
    register chunk_t *cp = clp->cp;
    if (cp == 0) {
	cp = clp->memory->cfirst;
	if (cp == 0)
	    return ((bool) 0);
    }
    if (((ptr_ord_t) ((const byte *) vptr) < (ptr_ord_t) (cp->cbase))) {
	do {
	    cp = cp->cprev;
	    if (cp == 0)
		return ((bool) 0);
	} while (((ptr_ord_t) ((const byte *) vptr) < (ptr_ord_t) (cp->cbase)));
	if (((ptr_ord_t) ((const byte *) vptr) >= (ptr_ord_t) (cp->cend)))
	    return ((bool) 0);
    } else {
	while (((ptr_ord_t) ((const byte *) vptr) >= (ptr_ord_t) (cp->cend))) {
	    cp = cp->cnext;
	    if (cp == 0)
		return ((bool) 0);
	}
	if (((ptr_ord_t) ((const byte *) vptr) < (ptr_ord_t) (cp->cbase)))
	    return ((bool) 0);
    }
    clp->cp = cp;
    return !((cp)->inner_count != 0 && (((ptr_ord_t) ((const byte *) ((const byte *) vptr)) >= (ptr_ord_t) ((cp)->cbot)) && ((ptr_ord_t) ((const byte *) ((const byte *) vptr)) < (ptr_ord_t) ((cp)->ctop))));
}
