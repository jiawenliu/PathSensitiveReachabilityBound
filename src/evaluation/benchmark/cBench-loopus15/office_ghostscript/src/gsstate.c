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
gs_id gs_next_ids(uint count);
void memflip8x8(const byte * inp, int line_size, byte * outp, int dist);
int bytes_compare(const byte * str1, uint len1, const byte * str2, uint len2);
typedef struct string_match_params_s {
    int any_substring;
    int any_char;
    int quote_next;
    bool ignore_case;
} string_match_params;
bool string_match(const byte * str, uint len, const byte * pstr, uint plen, const string_match_params * psmp);
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
int imod(int m, int n);
int igcd(int x, int y);
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
typedef struct gx_ht_tile_s gx_ht_tile;
struct gx_ht_tile_s {
    gx_strip_bitmap tiles;
    int level;
    uint index;
};
typedef unsigned long gx_color_index;
typedef struct gx_device_color_s gx_device_color;
typedef struct gx_device_halftone_s gx_device_halftone;
typedef struct gx_color_tile_s gx_color_tile;
typedef struct gx_device_color_procs_s gx_device_color_procs;
typedef const gx_device_color_procs *gx_device_color_type;
struct gx_device_color_s {
    gx_device_color_type type;
    union _c {
	gx_color_index pure;
	struct _bin {
	    const gx_device_halftone *b_ht;
	    gx_color_index color[2];
	    uint b_level;
	    gx_ht_tile *b_tile;
	} binary;
	struct _col {
	    const gx_device_halftone *c_ht;
	    byte c_base[4];
	    uint c_level[4];
	    ushort alpha;
	} colored;
	struct _pat {
	    gx_color_tile *p_tile;
	} pattern;
    } colors;
    gs_int_point phase;
    struct _mask {
	gs_client_color ccolor;
	gx_bitmap_id id;
	gx_color_tile *m_tile;
    } mask;
};
extern const gx_device_color_procs *gx_dc_type_none;
extern const gx_device_color_procs *gx_dc_type_null;
extern const gx_device_color_procs *gx_dc_type_pure;
extern const gx_device_color_procs *gx_dc_type_ht_binary;
extern const gx_device_color_procs *gx_dc_type_ht_colored;
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef struct gx_device_s gx_device;
typedef struct gx_rop_source_s {
    const byte *sdata;
    int sourcex;
    uint sraster;
    gx_bitmap_id id;
    gx_color_index scolors[2];
    bool use_scolors;
} gx_rop_source_t;
extern const gx_rop_source_t gx_rop_no_source_0;
struct gx_device_color_procs_s {
    int (*load) (gx_device_color * pdevc, const gs_imager_state * pis, gx_device * dev, gs_color_select_t select);
    int (*fill_rectangle) (const gx_device_color * pdevc, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, const gx_rop_source_t * source);
    int (*fill_masked) (const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
int gx_dc_default_fill_masked(const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
extern const gs_memory_struct_type_t st_device_color;
extern const gx_device_color_procs gx_dc_procs_none, gx_dc_procs_null, gx_dc_procs_pure, gx_dc_procs_ht_binary, gx_dc_procs_ht_colored;
void gx_set_device_color_1(gs_state * pgs);
int gx_remap_color(gs_state *);
typedef unsigned short gx_color_value;
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
typedef struct gx_dash_params_s {
    float *pattern;
    uint pattern_size;
    float offset;
    bool adapt;
    float pattern_length;
    bool init_ink_on;
    int init_index;
    float init_dist_left;
} gx_dash_params;
typedef struct gx_line_params_s {
    float half_width;
    gs_line_cap cap;
    gs_line_join join;
    float miter_limit;
    float miter_check;
    float dot_length;
    float dot_length_absolute;
    gx_dash_params dash;
} gx_line_params;
int gx_set_miter_limit(gx_line_params *, floatp);
int gx_set_dash(gx_dash_params *, const float *, uint, floatp, gs_memory_t *);
int gx_set_dot_length(gx_line_params *, floatp, bool);
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
typedef struct gs_matrix_fixed_s {
    float xx, xy, yx, yy, tx, ty;
    fixed tx_fixed, ty_fixed;
    bool txy_fixed_valid;
} gs_matrix_fixed;
int gs_point_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
int gs_distance_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
typedef struct {
    long l;
    fixed f;
} coeff1;
typedef struct {
    coeff1 xx, xy, yx, yy;
    int skewed;
    int shift;
    int max_bits;
    fixed round;
} fixed_coeff;
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
typedef struct gs_halftone_s gs_halftone;
typedef struct gx_transfer_colored_s {
    gx_transfer_map *red;
    gx_transfer_map *green;
    gx_transfer_map *blue;
    gx_transfer_map *gray;
} gx_transfer_colored;
typedef union gx_transfer_s {
    gx_transfer_map *indexed[4];
    gx_transfer_colored colored;
} gx_transfer;
struct gs_imager_state_s {
    gs_memory_t *memory;
    gx_line_params line_params;
    gs_matrix_fixed ctm;
    gs_logical_operation_t log_op;
    gx_color_value alpha;
    bool overprint;
    float flatness;
    gs_fixed_point fill_adjust;
    bool stroke_adjust;
    bool accurate_curves;
    gs_halftone *halftone;
    gs_int_point screen_phase[2];
    gx_device_halftone *dev_ht;
    struct gx_ht_cache_s *ht_cache;
    struct gs_cie_render_s *cie_render;
    gx_transfer_map *black_generation;
    gx_transfer_map *undercolor_removal;
    gx_transfer set_transfer;
    gx_transfer effective_transfer;
    struct gx_cie_joint_caches_s *cie_joint_caches;
    const struct gx_color_map_procs_s *cmap_procs;
    struct gx_pattern_cache_s *pattern_cache;
};
int gs_imager_state_initialize(gs_imager_state * pis, gs_memory_t * mem);
void gs_imager_state_release(gs_imager_state * pis);
gs_state *gs_state_alloc(gs_memory_t *);
int gs_state_free(gs_state *);
int gs_gsave(gs_state *), gs_grestore(gs_state *), gs_grestoreall(gs_state *);
gs_state *gs_gstate(gs_state *);
gs_state *gs_state_copy(gs_state *, gs_memory_t *);
int gs_copygstate(gs_state *, const gs_state *), gs_currentgstate(gs_state *, const gs_state *), gs_setgstate(gs_state *, const gs_state *);
int gs_initgraphics(gs_state *);
typedef struct gx_device_memory_s gx_device_memory;
typedef struct gs_param_list_s gs_param_list;
int gs_flushpage(gs_state *);
int gs_copypage(gs_state *);
int gs_output_page(gs_state *, int, int);
int gs_copyscanlines(gx_device *, int, byte *, uint, int *, uint *);
const gx_device *gs_getdevice(int);
int gs_copydevice(gx_device **, const gx_device *, gs_memory_t *);
int gs_makewordimagedevice(gx_device ** pnew_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int num_colors, bool word_oriented, bool page_device, gs_memory_t * mem);
int gs_initialize_wordimagedevice(gx_device_memory * new_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int colors_size, bool word_oriented, bool page_device, gs_memory_t * mem);
void gs_nulldevice(gs_state *);
int gs_setdevice(gs_state *, gx_device *);
int gs_setdevice_no_erase(gs_state *, gx_device *);
gx_device *gs_currentdevice(const gs_state *);
const char *gs_devicename(const gx_device *);
void gs_deviceinitialmatrix(gx_device *, gs_matrix *);
int gs_getdeviceparams(gx_device *, gs_param_list *);
int gs_putdeviceparams(gx_device *, gs_param_list *);
int gs_closedevice(gx_device *);
int gs_setlinewidth(gs_state *, floatp);
float gs_currentlinewidth(const gs_state *);
int gs_setlinecap(gs_state *, gs_line_cap);
gs_line_cap gs_currentlinecap(const gs_state *);
int gs_setlinejoin(gs_state *, gs_line_join);
gs_line_join gs_currentlinejoin(const gs_state *);
int gs_setmiterlimit(gs_state *, floatp);
float gs_currentmiterlimit(const gs_state *);
int gs_setdash(gs_state *, const float *, uint, floatp);
uint gs_currentdash_length(const gs_state *);
const float *gs_currentdash_pattern(const gs_state *);
float gs_currentdash_offset(const gs_state *);
int gs_setflat(gs_state *, floatp);
float gs_currentflat(const gs_state *);
int gs_setstrokeadjust(gs_state *, bool);
bool gs_currentstrokeadjust(const gs_state *);
void gs_setaccuratecurves(gs_state *, bool);
bool gs_currentaccuratecurves(const gs_state *);
void gs_setdashadapt(gs_state *, bool);
bool gs_currentdashadapt(const gs_state *);
int gs_setdotlength(gs_state *, floatp, bool);
float gs_currentdotlength(const gs_state *);
bool gs_currentdotlength_absolute(const gs_state *);
int gs_imager_setflat(gs_imager_state *, floatp);
bool gs_imager_currentdashadapt(const gs_imager_state *);
bool gs_imager_currentaccuratecurves(const gs_imager_state *);
int gs_setgray(gs_state *, floatp);
float gs_currentgray(const gs_state *);
int gs_setrgbcolor(gs_state *, floatp, floatp, floatp), gs_currentrgbcolor(const gs_state *, float[3]), gs_setalpha(gs_state *, floatp);
float gs_currentalpha(const gs_state *);
int gs_setnullcolor(gs_state *);
int gs_settransfer(gs_state *, gs_mapping_proc), gs_settransfer_remap(gs_state *, gs_mapping_proc, bool);
gs_mapping_proc gs_currenttransfer(const gs_state *);
typedef struct gs_screen_halftone_s {
    float frequency;
    float angle;
    float (*spot_function) (floatp, floatp);
    float actual_frequency;
    float actual_angle;
} gs_screen_halftone;
typedef struct gs_colorscreen_halftone_s {
    union _css {
	gs_screen_halftone indexed[4];
	struct _csc {
	    gs_screen_halftone red, green, blue, gray;
	} colored;
    } screens;
} gs_colorscreen_halftone;
int gs_setscreen(gs_state *, gs_screen_halftone *);
int gs_currentscreen(const gs_state *, gs_screen_halftone *);
int gs_currentscreenlevels(const gs_state *);
typedef struct gs_screen_enum_s gs_screen_enum;
gs_screen_enum *gs_screen_enum_alloc(gs_memory_t *, client_name_t);
int gs_screen_init(gs_screen_enum *, gs_state *, gs_screen_halftone *);
int gs_screen_currentpoint(gs_screen_enum *, gs_point *);
int gs_screen_next(gs_screen_enum *, floatp);
int gs_screen_install(gs_screen_enum *);
int gs_setscreenphase(gs_state *, int, int, gs_color_select_t);
int gs_currentscreenphase(const gs_state *, gs_int_point *, gs_color_select_t);
int gx_imager_setscreenphase(gs_imager_state *, int, int, gs_color_select_t);
int gs_setfilladjust(gs_state *, floatp, floatp);
int gs_currentfilladjust(const gs_state *, gs_point *);
void gs_setlimitclamp(gs_state *, bool);
bool gs_currentlimitclamp(const gs_state *);
gs_memory_t *gs_state_memory(const gs_state *);
gs_state *gs_state_saved(const gs_state *);
gs_state *gs_state_swap_saved(gs_state *, gs_state *);
gs_memory_t *gs_state_swap_memory(gs_state *, gs_memory_t *);
typedef void *(*gs_state_alloc_proc_t) (gs_memory_t * mem);
typedef int (*gs_state_copy_proc_t) (void *to, const void *from);
typedef void (*gs_state_free_proc_t) (void *old, gs_memory_t * mem);
typedef enum { copy_for_gsave, copy_for_grestore, copy_for_gstate, copy_for_setgstate, copy_for_copygstate, copy_for_currentgstate } gs_state_copy_reason_t;
typedef int (*gs_state_copy_for_proc_t) (void *to, void *from, gs_state_copy_reason_t reason);
typedef struct gs_state_client_procs_s {
    gs_state_alloc_proc_t alloc;
    gs_state_copy_proc_t copy;
    gs_state_free_proc_t free;
    gs_state_copy_for_proc_t copy_for;
} gs_state_client_procs;
void gs_state_set_client(gs_state *, void *, const gs_state_client_procs *);
void *gs_state_client_data(const gs_state *);
typedef struct gs_font_s gs_font;
typedef struct gs_state_contents_s gs_state_contents;
struct gs_state_s {
    gs_memory_t *memory;
    gx_line_params line_params;
    gs_matrix_fixed ctm;
    gs_logical_operation_t log_op;
    gx_color_value alpha;
    bool overprint;
    float flatness;
    gs_fixed_point fill_adjust;
    bool stroke_adjust;
    bool accurate_curves;
    gs_halftone *halftone;
    gs_int_point screen_phase[2];
    gx_device_halftone *dev_ht;
    struct gx_ht_cache_s *ht_cache;
    struct gs_cie_render_s *cie_render;
    gx_transfer_map *black_generation;
    gx_transfer_map *undercolor_removal;
    gx_transfer set_transfer;
    gx_transfer effective_transfer;
    struct gx_cie_joint_caches_s *cie_joint_caches;
    const struct gx_color_map_procs_s *cmap_procs;
    struct gx_pattern_cache_s *pattern_cache;
    gs_state *saved;
    gs_state_contents *contents;
    gs_matrix ctm_inverse;
    bool ctm_inverse_valid;
    gs_matrix ctm_default;
    bool ctm_default_set;
    struct gx_path_s *path;
    struct gx_clip_path_s *clip_path;
    int clip_rule;
    bool clamp_coordinates;
    struct gs_color_space_s *color_space;
    struct gs_client_color_s *ccolor;
    gx_device_color *dev_color;
    gs_font *font;
    gs_font *root_font;
    gs_matrix_fixed char_tm;
    bool char_tm_valid;
    byte in_cachedevice;
    gs_char_path_mode in_charpath;
    gs_state *show_gstate;
    int level;
    gx_device *device;
    void *client_data;
    gs_state_client_procs client_procs;
};
typedef enum { gs_color_space_index_DeviceGray = 0, gs_color_space_index_DeviceRGB, gs_color_space_index_DeviceCMYK, gs_color_space_index_CIEDEFG, gs_color_space_index_CIEDEF, gs_color_space_index_CIEABC, gs_color_space_index_CIEA, gs_color_space_index_Separation, gs_color_space_index_Indexed, gs_color_space_index_Pattern } gs_color_space_index;
typedef struct gs_color_space_s gs_color_space;
extern const gs_color_space *gs_color_space_DeviceGray(void);
extern const gs_color_space *gs_color_space_DeviceRGB(void);
extern const gs_color_space *gs_color_space_DeviceCMYK(void);
typedef struct gs_cie_defg_s gs_cie_defg;
typedef struct gs_cie_def_s gs_cie_def;
typedef struct gs_cie_abc_s gs_cie_abc;
typedef struct gs_cie_a_s gs_cie_a;
typedef struct gs_separation_params_s gs_separation_params;
typedef struct gs_indexed_params_s gs_indexed_params;
typedef struct gs_color_space_type_s gs_color_space_type;
typedef struct gs_base_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
    } params;
} gs_base_color_space;
typedef ulong gs_separation_name;
typedef struct gs_indexed_map_s gs_indexed_map;
struct gs_separation_params_s {
    gs_separation_name sname;
    gs_base_color_space alt_space;
    gs_indexed_map *map;
};
struct gs_indexed_params_s {
    gs_base_color_space base_space;
    int hival;
    union {
	gs_const_string table;
	gs_indexed_map *map;
    } lookup;
    bool use_proc;
};
typedef struct gs_paint_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
	gs_separation_params separation;
	gs_indexed_params indexed;
    } params;
} gs_paint_color_space;
typedef struct gs_pattern_params_s {
    bool has_base_space;
    gs_paint_color_space base_space;
} gs_pattern_params;
struct gs_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
	gs_separation_params separation;
	gs_indexed_params indexed;
	gs_pattern_params pattern;
    } params;
};
gs_color_space_index gs_color_space_get_index(const gs_color_space *);
int gs_color_space_num_components(const gs_color_space *);
const gs_color_space *gs_color_space_indexed_base(const gs_color_space *);
typedef short frac;
typedef short signed_frac;
struct gs_color_space_type_s {
    gs_color_space_index index;
    int num_components;
    bool can_be_base_space;
    void (*init_color) (gs_client_color *, const gs_color_space *);
    const gs_color_space *(*concrete_space) (const gs_color_space *, const gs_imager_state *);
    int (*concretize_color) (const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
    int (*remap_concrete_color) (const frac *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    int (*remap_color) (const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    int (*install_cspace) (gs_color_space *, gs_state *);
    void (*adjust_cspace_count) (const gs_color_space *, gs_memory_t *, int);
    void (*adjust_color_count) (const gs_client_color *, const gs_color_space *, gs_memory_t *, int);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
void gx_init_paint_1(gs_client_color *, const gs_color_space *);
void gx_init_paint_3(gs_client_color *, const gs_color_space *);
void gx_init_paint_4(gs_client_color *, const gs_color_space *);
const gs_color_space *gx_no_concrete_space(const gs_color_space *, const gs_imager_state *);
const gs_color_space *gx_same_concrete_space(const gs_color_space *, const gs_imager_state *);
int gx_no_concretize_color(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
int gx_default_remap_color(const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
int gx_no_install_cspace(gs_color_space *, gs_state *);
void gx_no_adjust_cspace_count(const gs_color_space *, gs_memory_t *, int);
void gx_no_adjust_color_count(const gs_client_color *, const gs_color_space *, gs_memory_t *, int);
extern const gs_color_space_type gs_color_space_type_DeviceGray, gs_color_space_type_DeviceRGB, gs_color_space_type_DeviceCMYK;
extern const gs_memory_struct_type_t st_color_space;
typedef struct gs_uid_s gs_uid;
struct gs_uid_s {
    long id;
    long *xvalues;
};
bool uid_equal(const gs_uid *, const gs_uid *);
const gs_color_space *gs_currentcolorspace(const gs_state *);
int gs_setcolorspace(gs_state *, gs_color_space *);
const gs_client_color *gs_currentcolor(const gs_state *);
int gs_setcolor(gs_state *, const gs_client_color *);
typedef struct gs_cie_render_s gs_cie_render;
const gs_cie_render *gs_currentcolorrendering(const gs_state *);
int gs_setcolorrendering(gs_state *, gs_cie_render *);
typedef struct gs_client_pattern_s {
    gs_uid uid;
    int PaintType;
    int TilingType;
    gs_rect BBox;
    float XStep;
    float YStep;
    int (*PaintProc) (const gs_client_color *, gs_state *);
    void *client_data;
} gs_client_pattern;
int gs_makepattern(gs_client_color *, const gs_client_pattern *, const gs_matrix *, gs_state *, gs_memory_t *);
int gs_setpattern(gs_state *, const gs_client_color *);
int gs_setpatternspace(gs_state *);
const gs_client_pattern *gs_getpattern(const gs_client_color *);
int gs_makebitmappattern(gs_client_color *, const gx_tile_bitmap *, bool, gs_state *, gs_memory_t *);
int gs_initmatrix(gs_state *), gs_defaultmatrix(const gs_state *, gs_matrix *), gs_currentmatrix(const gs_state *, gs_matrix *), gs_setmatrix(gs_state *, const gs_matrix *), gs_translate(gs_state *, floatp, floatp), gs_scale(gs_state *, floatp, floatp), gs_rotate(gs_state *, floatp), gs_concat(gs_state *, const gs_matrix *);
int gs_setdefaultmatrix(gs_state *, const gs_matrix *), gs_currentcharmatrix(gs_state *, gs_matrix *, bool), gs_setcharmatrix(gs_state *, const gs_matrix *), gs_settocharmatrix(gs_state *);
int gs_transform(gs_state *, floatp, floatp, gs_point *), gs_dtransform(gs_state *, floatp, floatp, gs_point *), gs_itransform(gs_state *, floatp, floatp, gs_point *), gs_idtransform(gs_state *, floatp, floatp, gs_point *);
int gs_imager_setmatrix(gs_imager_state *, const gs_matrix *);
int gs_imager_idtransform(const gs_imager_state *, floatp, floatp, gs_point *);
typedef struct rc_header_s rc_header;
struct rc_header_s {
    long ref_count;
    gs_memory_t *memory;
    void (*free) (gs_memory_t *, void *, client_name_t);
};
void rc_free_struct_only(gs_memory_t *, void *, client_name_t);
typedef struct gx_color_lookup_table_s {
    int n;
    int dims[4];
    int m;
    const gs_const_string *table;
} gx_color_lookup_table;
void gx_color_interpolate_nearest(const fixed * pi, const gx_color_lookup_table * pclt, frac * pv);
void gx_color_interpolate_linear(const fixed * pi, const gx_color_lookup_table * pclt, frac * pv);
typedef float cie_cached_value;
typedef struct gs_vector3_s {
    float u, v, w;
} gs_vector3;
typedef struct gs_matrix3_s {
    gs_vector3 cu, cv, cw;
    bool is_identity;
} gs_matrix3;
typedef struct gs_range_s {
    float rmin, rmax;
} gs_range;
typedef struct gs_range3_s {
    gs_range ranges[3];
} gs_range3;
typedef struct gs_range4_s {
    gs_range ranges[4];
} gs_range4;
typedef struct gs_cie_common_s gs_cie_common;
typedef struct gs_cie_abc_s gs_cie_abc_common;
typedef struct gs_cie_wbsd_s gs_cie_wbsd;
typedef float (*gs_cie_a_proc) (floatp, const gs_cie_a *);
typedef float (*gs_cie_abc_proc) (floatp, const gs_cie_abc *);
typedef struct gs_cie_abc_proc3_s {
    gs_cie_abc_proc procs[3];
} gs_cie_abc_proc3;
typedef float (*gs_cie_def_proc) (floatp, const gs_cie_def *);
typedef struct gs_cie_def_proc3_s {
    gs_cie_def_proc procs[3];
} gs_cie_def_proc3;
typedef float (*gs_cie_defg_proc) (floatp, const gs_cie_defg *);
typedef struct gs_cie_defg_proc4_s {
    gs_cie_defg_proc procs[4];
} gs_cie_defg_proc4;
typedef float (*gs_cie_common_proc) (floatp, const gs_cie_common *);
typedef struct gs_cie_common_proc3_s {
    gs_cie_common_proc procs[3];
} gs_cie_common_proc3;
typedef float (*gs_cie_render_proc) (floatp, const gs_cie_render *);
typedef struct gs_cie_render_proc3_s {
    gs_cie_render_proc procs[3];
} gs_cie_render_proc3;
typedef float (*gs_cie_transform_proc) (floatp, const gs_cie_wbsd *, const gs_cie_render *);
typedef struct gs_cie_transform_proc3_s {
    gs_cie_transform_proc procs[3];
} gs_cie_transform_proc3;
typedef frac(*gs_cie_render_table_proc) (byte, const gs_cie_render *);
typedef struct gs_cie_render_table_procs_s {
    gs_cie_render_table_proc procs[4];
} gs_cie_render_table_procs;
typedef struct gs_cie_wb_s {
    gs_vector3 WhitePoint;
    gs_vector3 BlackPoint;
} gs_cie_wb;
typedef struct cie_cache_params_s {
    bool is_identity;
    float base, factor;
} cie_cache_params;
typedef struct gx_cie_cache_s {
    cie_cache_params params;
    float values[(1 << 9)];
} cie_cache_floats;
typedef union gx_cie_scalar_cache_s {
    cie_cache_floats floats;
    struct _scf {
	cie_cache_params params;
	frac values[(1 << 9)];
    } fracs;
    struct _sci {
	cie_cache_params params;
	int values[(1 << 9)];
    } ints;
} gx_cie_scalar_cache;
typedef struct cie_cached_vector3_s {
    cie_cached_value u, v, w;
} cie_cached_vector3;
typedef struct cie_vector_cache_params_s {
    bool is_identity;
    cie_cached_value base, factor, limit;
} cie_vector_cache_params;
typedef struct cie_cache_vectors_s {
    cie_vector_cache_params params;
    cie_cached_vector3 values[(1 << 9)];
} cie_cache_vectors;
typedef union gx_cie_vector_cache_s {
    cie_cache_floats floats;
    cie_cache_vectors vecs;
} gx_cie_vector_cache;
struct gs_cie_common_s {
    gs_range3 RangeLMN;
    gs_cie_common_proc3 DecodeLMN;
    gs_matrix3 MatrixLMN;
    gs_cie_wb points;
    struct {
	gx_cie_scalar_cache DecodeLMN[3];
    } caches;
};
struct gs_cie_a_s {
    gs_cie_common common;
    rc_header rc;
    gs_range RangeA;
    gs_cie_a_proc DecodeA;
    gs_vector3 MatrixA;
    struct {
	gx_cie_vector_cache DecodeA;
    } caches;
};
struct gs_cie_abc_s {
    gs_cie_common common;
    rc_header rc;
    gs_range3 RangeABC;
    gs_cie_abc_proc3 DecodeABC;
    gs_matrix3 MatrixABC;
    struct {
	bool skipABC;
	gx_cie_vector_cache DecodeABC[3];
    } caches;
};
struct gs_cie_def_s {
    gs_cie_abc_common abc;
    rc_header rc;
    gs_range3 RangeDEF;
    gs_cie_def_proc3 DecodeDEF;
    gs_range3 RangeHIJ;
    gx_color_lookup_table Table;
    struct {
	gx_cie_scalar_cache DecodeDEF[3];
    } caches;
};
struct gs_cie_defg_s {
    gs_cie_abc_common abc;
    rc_header rc;
    gs_range4 RangeDEFG;
    gs_cie_defg_proc4 DecodeDEFG;
    gs_range4 RangeHIJK;
    gx_color_lookup_table Table;
    struct {
	gx_cie_scalar_cache DecodeDEFG[4];
    } caches;
};
extern const gs_range3 Range3_default;
extern const gs_range4 Range4_default;
extern const gs_cie_defg_proc4 DecodeDEFG_default;
extern const gs_cie_def_proc3 DecodeDEF_default;
extern const gs_cie_abc_proc3 DecodeABC_default;
extern const gs_cie_common_proc3 DecodeLMN_default;
extern const gs_matrix3 Matrix3_default;
extern const gs_range RangeA_default;
extern const gs_cie_a_proc DecodeA_default;
extern const gs_vector3 MatrixA_default;
extern const gs_vector3 BlackPoint_default;
extern const gs_cie_render_proc3 Encode_default;
extern const gs_cie_transform_proc3 TransformPQR_default;
extern const gs_cie_render_table_procs RenderTableT_default;
struct gs_cie_wbsd_s {
    struct {
	gs_vector3 xyz, pqr;
    } ws, bs, wd, bd;
};
struct gs_cie_render_s {
    rc_header rc;
    gs_cie_wb points;
    gs_matrix3 MatrixPQR;
    gs_range3 RangePQR;
    gs_cie_transform_proc3 TransformPQR;
    gs_matrix3 MatrixLMN;
    gs_cie_render_proc3 EncodeLMN;
    gs_range3 RangeLMN;
    gs_matrix3 MatrixABC;
    gs_cie_render_proc3 EncodeABC;
    gs_range3 RangeABC;
    struct {
	gx_color_lookup_table lookup;
	gs_cie_render_table_procs T;
    } RenderTable;
    gs_range3 DomainLMN;
    gs_range3 DomainABC;
    gs_matrix3 MatrixABCEncode;
    cie_cached_value EncodeABC_base[3];
    gs_matrix3 MatrixPQR_inverse_LMN;
    gs_vector3 wdpqr, bdpqr;
    struct {
	gx_cie_vector_cache EncodeLMN[3];
	gx_cie_scalar_cache EncodeABC[3];
	gx_cie_scalar_cache RenderTableT[4];
	bool RenderTableT_is_identity;
    } caches;
};
extern const gs_memory_struct_type_t st_const_string_element;
typedef struct gx_cie_joint_caches_s {
    rc_header rc;
    bool skipLMN;
    gx_cie_vector_cache DecodeLMN[3];
    gs_cie_wbsd points_sd;
    gs_matrix3 MatrixLMN_PQR;
    bool skipPQR;
    gx_cie_vector_cache TransformPQR[3];
} gx_cie_joint_caches;
typedef struct gs_for_loop_params_s {
    float init, step, limit;
} gs_for_loop_params;
void gs_cie_cache_init(cie_cache_params *, gs_for_loop_params *, const gs_range *, client_name_t);
void gs_cie_cache_to_fracs(gx_cie_scalar_cache *);
void gs_cie_abc_complete(gs_cie_abc *);
void gs_cie_a_complete(gs_cie_a *);
int gs_cie_render_init(gs_cie_render *);
int gs_cie_render_complete(gs_cie_render *);
gx_cie_joint_caches *gx_currentciecaches(gs_state *);
const gs_cie_common *gs_cie_cs_common(gs_state *);
void gs_cie_cs_complete(gs_state *, bool);
struct gx_transfer_map_s {
    rc_header rc;
    gs_mapping_proc proc;
    gs_id id;
    frac values[(1 << 8)];
};
extern const gs_memory_struct_type_t st_transfer_map;
frac gx_color_frac_map(frac, const frac *);
float gs_mapped_transfer(floatp, const gx_transfer_map *);
struct gx_color_map_procs_s {
    void (*map_gray) (frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_rgb) (frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_cmyk) (frac, frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
};
typedef struct gx_color_map_procs_s gx_color_map_procs;
const gx_color_map_procs *gx_device_cmap_procs(const gx_device *);
void gx_set_cmap_procs(gs_imager_state *, const gx_device *);
typedef enum { gs_image_format_chunky = 0, gs_image_format_component_planar = 1, gs_image_format_bit_planar = 2 } gs_image_format_t;
typedef struct gs_image_s {
    int Width;
    int Height;
    gs_matrix ImageMatrix;
    int BitsPerComponent;
    const gs_color_space *ColorSpace;
    float Decode[8];
    bool Interpolate;
    bool ImageMask;
    bool adjust;
    bool CombineWithColor;
} gs_image_t;
void gs_image_t_init_gray(gs_image_t * pim), gs_image_t_init_color(gs_image_t * pim), gs_image_t_init_mask(gs_image_t * pim, bool write_1s);
typedef ulong gx_xglyph;
struct gx_xfont_procs_s;
typedef struct gx_xfont_procs_s gx_xfont_procs;
struct gx_xfont_s;
typedef struct gx_xfont_s gx_xfont;
typedef struct gx_path_s gx_path;
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_fill_params_s gx_fill_params;
typedef struct gx_stroke_params_s gx_stroke_params;
typedef gx_device_color gx_drawing_color;
typedef enum { go_text, go_graphics } graphics_object_type;
typedef struct gs_fixed_edge_s {
    gs_fixed_point start;
    gs_fixed_point end;
} gs_fixed_edge;
typedef struct gx_device_color_info_s {
    int num_components;
    int depth;
    gx_color_value max_gray;
    gx_color_value max_color;
    gx_color_value dither_grays;
    gx_color_value dither_colors;
} gx_device_color_info;
typedef struct gx_device_procs_s gx_device_procs;
typedef struct gx_page_device_procs_s {
    int (*install) (gx_device * dev, gs_state * pgs);
    int (*begin_page) (gx_device * dev, gs_state * pgs);
    int (*end_page) (gx_device * dev, int reason, gs_state * pgs);
} gx_page_device_procs;
int gx_default_install(gx_device * dev, gs_state * pgs);
int gx_default_begin_page(gx_device * dev, gs_state * pgs);
int gx_default_end_page(gx_device * dev, int reason, gs_state * pgs);
struct gx_device_procs_s {
    int (*open_device) (gx_device * dev);
    void (*get_initial_matrix) (gx_device * dev, gs_matrix * pmat);
    int (*sync_output) (gx_device * dev);
    int (*output_page) (gx_device * dev, int num_copies, int flush);
    int (*close_device) (gx_device * dev);
    gx_color_index(*map_rgb_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
    int (*map_color_rgb) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
    int (*fill_rectangle) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    int (*tile_rectangle) (gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*copy_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
    int (*copy_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
    int (*draw_line) (gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
    int (*get_bits) (gx_device * dev, int y, byte * data, byte ** actual_data);
    int (*get_params) (gx_device * dev, gs_param_list * plist);
    int (*put_params) (gx_device * dev, gs_param_list * plist);
    gx_color_index(*map_cmyk_color) (gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
    gx_xfont_procs *(*get_xfont_procs) (gx_device * dev);
    gx_device *(*get_xfont_device) (gx_device * dev);
    gx_color_index(*map_rgb_alpha_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
    gx_device *(*get_page_device) (gx_device * dev);
    int (*get_alpha_bits) (gx_device * dev, graphics_object_type type);
    int (*copy_alpha) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
    int (*get_band) (gx_device * dev, int y, int *band_start);
    int (*copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    int (*fill_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*stroke_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*fill_mask) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
    int (*fill_trapezoid) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_parallelogram) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_triangle) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*draw_thin_line) (gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*begin_image) (gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
    int (*image_data) (gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
    int (*end_image) (gx_device * dev, void *info, bool draw_last);
    int (*strip_tile_rectangle) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*strip_copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    void (*get_clipping_box) (gx_device * dev, gs_fixed_rect * pbox);
};
int gx_default_make_buffer_device(gx_device_memory *, gx_device *, gs_memory_t *, bool);
int gx_copy_mono_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_copy_color_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_copy_alpha_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
struct gx_device_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
};
extern const gs_memory_struct_type_t st_device;
void gx_device_finalize(void *ptr);
gx_device *gx_device_enum_ptr(gx_device *);
gx_device *gx_device_reloc_ptr(gx_device *, gc_state_t *);
typedef gx_color_index(*dev_proc_map_rgb_color_t) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
typedef int (*dev_proc_map_color_rgb_t) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
typedef struct gx_device_forward_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
} gx_device_forward;
extern const gs_memory_struct_type_t st_device_forward;
typedef struct gx_device_null_s gx_device_null;
struct gx_device_null_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
};
extern gx_device_null gs_null_device;
extern const gs_memory_struct_type_t st_device_null;
void gs_make_null_device(gx_device_null *, gs_memory_t *);
uint gx_device_raster(const gx_device * dev, bool pad_to_word);
int gx_device_adjust_resolution(gx_device * dev, int actual_width, int actual_height, int fit);
void gx_device_set_margins(gx_device * dev, const float *margins, bool move_origin);
void gx_device_set_width_height(gx_device * dev, int width, int height);
void gx_device_set_resolution(gx_device * dev, floatp x_dpi, floatp y_dpi);
void gx_device_set_media_size(gx_device * dev, floatp media_width, floatp media_height);
int gx_default_open_device(gx_device * dev);
void gx_default_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
void gx_upright_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_default_sync_output(gx_device * dev);
int gx_default_output_page(gx_device * dev, int num_copies, int flush);
int gx_default_close_device(gx_device * dev);
gx_color_index gx_default_w_b_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_w_b_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_default_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_default_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_default_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_default_draw_line(gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
int gx_default_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_default_get_params(gx_device * dev, gs_param_list * plist);
int gx_default_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_default_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_default_get_xfont_procs(gx_device * dev);
gx_device *gx_default_get_xfont_device(gx_device * dev);
gx_color_index gx_default_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_default_get_page_device(gx_device * dev);
gx_device *gx_page_device_get_page_device(gx_device * dev);
int gx_default_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_no_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_get_band(gx_device * dev, int y, int *band_start);
int gx_no_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_default_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_default_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_default_end_image(gx_device * dev, void *info, bool draw_last);
int gx_default_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_no_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_default_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_get_largest_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
gx_color_index gx_default_b_w_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_b_w_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_gray_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_gray_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_rgb_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_rgb_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_cmyk_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
void gx_forward_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_forward_sync_output(gx_device * dev);
int gx_forward_output_page(gx_device * dev, int num_copies, int flush);
gx_color_index gx_forward_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_forward_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_forward_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_forward_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_forward_get_params(gx_device * dev, gs_param_list * plist);
int gx_forward_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_forward_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_forward_get_xfont_procs(gx_device * dev);
gx_device *gx_forward_get_xfont_device(gx_device * dev);
gx_color_index gx_forward_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_forward_get_page_device(gx_device * dev);
int gx_forward_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_forward_get_band(gx_device * dev, int y, int *band_start);
extern int (*gx_forward_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_forward_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_forward_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_forward_end_image(gx_device * dev, void *info, bool draw_last);
int gx_forward_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
extern int (*gx_forward_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_forward_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_device_set_procs(gx_device *);
void gx_device_fill_in_procs(gx_device *);
void gx_device_forward_fill_in_procs(gx_device_forward *);
void gx_device_forward_color_procs(gx_device_forward *);
void gx_device_no_output(gs_state *);
void gx_set_device_only(gs_state *, gx_device *);
int gs_closedevice(gx_device *);
typedef struct gx_device_type_s {
    gs_memory_type_ptr_t stype;
    int (*initialize) (gx_device *);
} gx_device_type;
int gdev_initialize(gx_device *);
typedef struct gx_pattern_cache_s gx_pattern_cache;
struct gx_pattern_cache_s {
    gs_memory_t *memory;
    gx_color_tile *tiles;
    uint num_tiles;
    uint tiles_used;
    uint next;
    ulong bits_used;
    ulong max_bits;
    void (*free_all) (gx_pattern_cache *);
};
int gs_setcolorscreen(gs_state *, gs_colorscreen_halftone *);
int gs_currentcolorscreen(gs_state *, gs_colorscreen_halftone *);
int gs_sethalftone(gs_state *, gs_halftone *);
int gs_sethalftone_allocated(gs_state *, gs_halftone *);
int gs_currenthalftone(gs_state *, gs_halftone *);
typedef enum { ht_type_none, ht_type_screen, ht_type_colorscreen, ht_type_spot, ht_type_threshold, ht_type_multiple, ht_type_multiple_colorscreen } gs_halftone_type;
typedef struct gs_spot_halftone_s {
    gs_screen_halftone screen;
    bool accurate_screens;
    gs_mapping_proc transfer;
} gs_spot_halftone;
typedef struct gs_threshold_halftone_s {
    int width;
    int height;
    gs_const_string thresholds;
    gs_mapping_proc transfer;
} gs_threshold_halftone;
typedef enum { gs_ht_separation_Default, gs_ht_separation_Gray, gs_ht_separation_Red, gs_ht_separation_Green, gs_ht_separation_Blue, gs_ht_separation_Cyan, gs_ht_separation_Magenta, gs_ht_separation_Yellow, gs_ht_separation_Black } gs_ht_separation_name;
typedef struct gs_halftone_component_s {
    gs_ht_separation_name cname;
    gs_halftone_type type;
    union {
	gs_spot_halftone spot;
	gs_threshold_halftone threshold;
    } params;
} gs_halftone_component;
extern const gs_memory_struct_type_t st_halftone_component;
extern const gs_memory_struct_type_t st_ht_component_element;
typedef struct gs_multiple_halftone_s {
    gs_halftone_component *components;
    uint num_comp;
} gs_multiple_halftone;
struct gs_halftone_s {
    gs_halftone_type type;
    rc_header rc;
    union {
	gs_screen_halftone screen;
	gs_colorscreen_halftone colorscreen;
	gs_spot_halftone spot;
	gs_threshold_halftone threshold;
	gs_multiple_halftone multiple;
    } params;
};
extern const gs_memory_struct_type_t st_halftone;
void gs_setaccuratescreens(bool);
bool gs_currentaccuratescreens(void);
int gs_screen_init_memory(gs_screen_enum *, gs_state *, gs_screen_halftone *, bool, gs_memory_t *);
void gs_setminscreenlevels(uint);
uint gs_currentminscreenlevels(void);
typedef struct gx_ht_cell_params_s {
    short M, N, R;
    short M1, N1, R1;
    ulong C;
    short D, D1;
    uint W, W1;
    int S;
} gx_ht_cell_params_t;
void gx_compute_cell_values(gx_ht_cell_params_t *);
typedef uint ht_mask_t;
typedef struct gx_ht_bit_s {
    uint offset;
    ht_mask_t mask;
} gx_ht_bit;
typedef ht_mask_t ht_sample_t;
typedef struct gx_ht_cache_s gx_ht_cache;
typedef struct gx_ht_order_s {
    gx_ht_cell_params_t params;
    ushort width;
    ushort height;
    ushort raster;
    ushort shift;
    ushort orig_height;
    ushort orig_shift;
    uint full_height;
    uint num_levels;
    uint num_bits;
    uint *levels;
    gx_ht_bit *bits;
    gx_ht_cache *cache;
    gx_transfer_map *transfer;
} gx_ht_order;
extern const gs_memory_struct_type_t st_ht_order;
typedef struct gx_ht_order_component_s {
    gx_ht_order corder;
    gs_ht_separation_name cname;
} gx_ht_order_component;
extern const gs_memory_struct_type_t st_ht_order_component_element;
struct gx_device_halftone_s {
    gx_ht_order order;
    rc_header rc;
    gs_id id;
    gx_ht_order_component *components;
    uint num_comp;
    uint color_indices[4];
    int lcm_width, lcm_height;
};
extern const gs_memory_struct_type_t st_device_halftone;
void gx_device_halftone_release(gx_device_halftone * pdht, gs_memory_t * mem);
void gx_sort_ht_order(gx_ht_bit *, uint);
int gx_ht_alloc_order(gx_ht_order * porder, uint width, uint height, uint strip_shift, uint num_levels, gs_memory_t * mem);
void gx_ht_construct_spot_order(gx_ht_order *);
void gx_ht_construct_threshold_order(gx_ht_order *, const byte *);
void gx_ht_construct_bits(gx_ht_order *);
struct gs_screen_enum_s {
    gs_halftone halftone;
    gx_ht_order order;
    gs_matrix mat;
    int x, y;
    int strip, shift;
    gs_state *pgs;
};
int gs_sethalftone_prepare(gs_state *, gs_halftone *, gx_device_halftone *);
int gs_screen_order_init_memory(gx_ht_order *, const gs_state *, gs_screen_halftone *, bool, gs_memory_t *);
int gs_screen_enum_init_memory(gs_screen_enum *, const gx_ht_order *, gs_state *, gs_screen_halftone *, gs_memory_t *);
int gx_ht_process_screen_memory(gs_screen_enum * penum, gs_state * pgs, gs_screen_halftone * phsp, bool accurate, gs_memory_t * mem);
struct gx_ht_cache_s {
    byte *bits;
    uint bits_size;
    gx_ht_tile *ht_tiles;
    uint num_tiles;
    gx_ht_order order;
    int num_cached;
    int levels_per_tile;
    gx_bitmap_id base_id;
};
extern const gx_color_value *fc_color_quo[8];
uint gx_ht_cache_default_tiles(void);
uint gx_ht_cache_default_bits(void);
gx_ht_cache *gx_ht_alloc_cache(gs_memory_t *, uint, uint);
void gx_ht_free_cache(gs_memory_t *, gx_ht_cache *);
void gx_ht_init_cache(gx_ht_cache *, const gx_ht_order *);
bool gx_check_tile_cache(const gs_imager_state *);
int gx_check_tile_size(const gs_imager_state * pis, int w, int y, int h, gs_color_select_t select, int *ppx);
gx_ht_tile *gx_render_ht(gx_ht_cache *, int);
void gx_ht_order_release(gx_ht_order * porder, gs_memory_t * mem, bool free_cache);
int gx_imager_dev_ht_install(gs_imager_state * pis, const gx_device_halftone * pdht, gs_halftone_type type, const gx_device * dev);
int gx_ht_install(gs_state *, const gs_halftone *, const gx_device_halftone *);
void gx_imager_set_effective_xfer(gs_imager_state * pis);
void gx_set_effective_transfer(gs_state * pgs);
const gx_line_params *gs_currentlineparams(const gs_imager_state *);
typedef struct gs_path_enum_s gs_path_enum;
int gs_newpath(gs_state *), gs_moveto(gs_state *, floatp, floatp), gs_rmoveto(gs_state *, floatp, floatp), gs_lineto(gs_state *, floatp, floatp), gs_rlineto(gs_state *, floatp, floatp), gs_arc(gs_state *, floatp, floatp, floatp, floatp, floatp), gs_arcn(gs_state *, floatp, floatp, floatp, floatp, floatp), gs_arc_add(gs_state *, bool, floatp, floatp, floatp, floatp, floatp, bool), gs_arcto(gs_state *, floatp, floatp, floatp, floatp, floatp, float[4]), gs_curveto(gs_state *, floatp, floatp, floatp, floatp, floatp, floatp), gs_rcurveto(gs_state *, floatp, floatp, floatp, floatp, floatp, floatp), gs_closepath(gs_state *);
int gs_upmergepath(gs_state *);
int gs_currentpoint(const gs_state *, gs_point *), gs_upathbbox(gs_state *, gs_rect *, bool), gs_dashpath(gs_state *), gs_flattenpath(gs_state *), gs_reversepath(gs_state *), gs_strokepath(gs_state *);
gs_path_enum *gs_path_enum_alloc(gs_memory_t *, client_name_t);
int gs_path_enum_init(gs_path_enum *, const gs_state *);
int gs_path_enum_next(gs_path_enum *, gs_point[3]);
void gs_path_enum_cleanup(gs_path_enum *);
int gs_clippath(gs_state *), gs_initclip(gs_state *), gs_clip(gs_state *), gs_eoclip(gs_state *);
int gs_setclipoutside(gs_state *, bool);
bool gs_currentclipoutside(const gs_state *);
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
typedef struct gx_clip_rect_s gx_clip_rect;
struct gx_clip_rect_s {
    gx_clip_rect *next, *prev;
    int ymin, ymax;
    int xmin, xmax;
    byte to_visit;
};
extern const gs_memory_struct_type_t st_clip_rect;
struct gx_clip_list_s {
    gx_clip_rect single;
    gx_clip_rect *head;
    gx_clip_rect *tail;
    int count;
    bool outside;
};
typedef struct gx_device_clip_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
    gx_clip_list list;
    gx_clip_rect *current;
    gs_int_point translation;
} gx_device_clip;
extern const gs_memory_struct_type_t st_device_clip;
void gx_make_clip_translate_device(gx_device_clip * dev, void *container, const gx_clip_list * list, int tx, int ty);
void gx_make_clip_path_device(gx_device_clip *, const gx_clip_path *);
void gx_clip_list_init(gx_clip_list *);
void gx_clip_list_free(gx_clip_list *, gs_memory_t *);
void gx_cpath_set_outer_box(gx_clip_path *);
struct gx_clip_path_s {
    gx_path path;
    int rule;
    gs_fixed_rect inner_box;
    gs_fixed_rect outer_box;
    gx_clip_list list;
    char segments_valid;
    char shares_list;
    gs_id id;
};
extern const gs_memory_struct_type_t st_clip_path;
extern gx_color_map_procs *cmap_procs_default;
static gs_state *gstate_alloc(gs_memory_t *, client_name_t);
static void gstate_set_contents(gs_state *, gs_state_contents *);
static gs_state *gstate_clone(gs_state *, gs_memory_t *, client_name_t, gs_state_copy_reason_t);
static void gstate_free_contents(gs_state *);
static void gstate_share_paths(const gs_state *);
static int gstate_copy(gs_state *, const gs_state *, gs_state_copy_reason_t, client_name_t);
struct gs_state_contents_s {
    gx_path path;
    gx_clip_path clip_path;
    gs_client_color ccolor;
    gx_device_color dev_color;
};
static gs_ptr_type_t line_params_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gx_line_params *) vptr)->dash.pattern);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void line_params_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((gx_line_params *) vptr)->dash.pattern = gs_reloc_struct_ptr((const void *) ((const gx_line_params *) vptr)->dash.pattern, gcst);
} static const gs_memory_struct_type_t st_line_params = { sizeof(gx_line_params), "line_params", 0, 0, line_params_enum_ptrs, line_params_reloc_ptrs, 0 };

static gs_ptr_type_t imager_state_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void imager_state_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_imager_state = { sizeof(gs_imager_state), "gs_imager_state", 0, 0, imager_state_enum_ptrs, imager_state_reloc_ptrs, 0 };

static gs_ptr_type_t gs_state_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void gs_state_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_gs_state = { sizeof(gs_state), "gs_state", 0, 0, gs_state_enum_ptrs, gs_state_reloc_ptrs, 0 };

static gs_ptr_type_t imager_state_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_line_params.enum_ptrs) (&((gs_imager_state *) vptr)->line_params, sizeof(((gs_imager_state *) vptr)->line_params), index - ((1 + 16) - 1), pep);
    case 0:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->halftone);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->dev_ht);
	    return (&ptr_struct_procs);
	} while (0);
    case 2:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->ht_cache);
	    return (&ptr_struct_procs);
	} while (0);
    case 3:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->cie_render);
	    return (&ptr_struct_procs);
	} while (0);
    case 4:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->black_generation);
	    return (&ptr_struct_procs);
	} while (0);
    case 5:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->undercolor_removal);
	    return (&ptr_struct_procs);
	} while (0);
    case 6:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->set_transfer.colored.red);
	    return (&ptr_struct_procs);
	} while (0);
    case 7:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->set_transfer.colored.green);
	    return (&ptr_struct_procs);
	} while (0);
    case 8:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->set_transfer.colored.blue);
	    return (&ptr_struct_procs);
	} while (0);
    case 9:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->set_transfer.colored.gray);
	    return (&ptr_struct_procs);
	} while (0);
    case 10:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->effective_transfer.colored.red);
	    return (&ptr_struct_procs);
	} while (0);
    case 11:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->effective_transfer.colored.green);
	    return (&ptr_struct_procs);
	} while (0);
    case 12:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->effective_transfer.colored.blue);
	    return (&ptr_struct_procs);
	} while (0);
    case 13:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->effective_transfer.colored.gray);
	    return (&ptr_struct_procs);
	} while (0);
    case 14:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->cie_joint_caches);
	    return (&ptr_struct_procs);
	} while (0);
    case 15:
	do {
	    *pep = (const void *) (((gs_imager_state *) vptr)->pattern_cache);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void imager_state_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	(*st_line_params.reloc_ptrs) (&((gs_imager_state *) vptr)->line_params, sizeof(((gs_imager_state *) vptr)->line_params), gcst);
	((gs_imager_state *) vptr)->halftone = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->halftone, gcst);
	((gs_imager_state *) vptr)->dev_ht = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->dev_ht, gcst);
	((gs_imager_state *) vptr)->ht_cache = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->ht_cache, gcst);
	((gs_imager_state *) vptr)->cie_render = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->cie_render, gcst);
	((gs_imager_state *) vptr)->black_generation = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->black_generation, gcst);
	((gs_imager_state *) vptr)->undercolor_removal = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->undercolor_removal, gcst);
	((gs_imager_state *) vptr)->set_transfer.colored.red = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->set_transfer.colored.red, gcst);
	((gs_imager_state *) vptr)->set_transfer.colored.green = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->set_transfer.colored.green, gcst);
	((gs_imager_state *) vptr)->set_transfer.colored.blue = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->set_transfer.colored.blue, gcst);
	((gs_imager_state *) vptr)->set_transfer.colored.gray = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->set_transfer.colored.gray, gcst);
	((gs_imager_state *) vptr)->effective_transfer.colored.red = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->effective_transfer.colored.red, gcst);
	((gs_imager_state *) vptr)->effective_transfer.colored.green = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->effective_transfer.colored.green, gcst);
	((gs_imager_state *) vptr)->effective_transfer.colored.blue = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->effective_transfer.colored.blue, gcst);
	((gs_imager_state *) vptr)->effective_transfer.colored.gray = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->effective_transfer.colored.gray, gcst);
	((gs_imager_state *) vptr)->cie_joint_caches = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->cie_joint_caches, gcst);
	((gs_imager_state *) vptr)->pattern_cache = gs_reloc_struct_ptr((const void *) ((const gs_imager_state *) vptr)->pattern_cache, gcst);
}} static gs_ptr_type_t state_contents_enum_ptrs(void *ptr, uint size, uint index, const void **pep);

static void state_contents_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_gs_state_contents = { sizeof(gs_state_contents), "gs_state_contents", 0, 0, state_contents_enum_ptrs, state_contents_reloc_ptrs, 0 };
const gs_memory_struct_type_t st_transfer_map = { sizeof(gx_transfer_map), "gx_transfer_map", 0, 0, 0, 0, 0 };

static gs_ptr_type_t gs_state_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_imager_state.enum_ptrs) (vptr, size, index - (7 + 1), pep);
    case 0:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->saved);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->contents);
	    return (&ptr_struct_procs);
	} while (0);
    case 2:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->color_space);
	    return (&ptr_struct_procs);
	} while (0);
    case 3:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->font);
	    return (&ptr_struct_procs);
	} while (0);
    case 4:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->root_font);
	    return (&ptr_struct_procs);
	} while (0);
    case 5:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->show_gstate);
	    return (&ptr_struct_procs);
	} while (0);
    case 6:
	do {
	    *pep = (const void *) (((gs_state *) vptr)->client_data);
	    return (&ptr_struct_procs);
	} while (0);
    case 7:
	do {
	    *pep = (const void *) (gx_device_enum_ptr(((gs_state *) vptr)->device));
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void gs_state_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	(*st_imager_state.reloc_ptrs) (vptr, size, gcst); {
	    byte *cont = (byte *) ((gs_state *) vptr)->contents;
	    long reloc;
	    ((gs_state *) vptr)->saved = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->saved, gcst);
	    ((gs_state *) vptr)->contents = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->contents, gcst);
	    ((gs_state *) vptr)->color_space = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->color_space, gcst);
	    ((gs_state *) vptr)->font = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->font, gcst);
	    ((gs_state *) vptr)->root_font = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->root_font, gcst);
	    ((gs_state *) vptr)->show_gstate = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->show_gstate, gcst);
	    ((gs_state *) vptr)->client_data = gs_reloc_struct_ptr((const void *) ((const gs_state *) vptr)->client_data, gcst);
	    ((gs_state *) vptr)->device = gx_device_reloc_ptr(((gs_state *) vptr)->device, gcst);
	    reloc = cont - (byte *) ((gs_state *) vptr)->contents;
	    ((gs_state *) vptr)->path = (void *) ((byte *) ((gs_state *) vptr)->path - reloc);
	    ((gs_state *) vptr)->clip_path = (void *) ((byte *) ((gs_state *) vptr)->clip_path - reloc);
	    ((gs_state *) vptr)->ccolor = (void *) ((byte *) ((gs_state *) vptr)->ccolor - reloc);
	    ((gs_state *) vptr)->dev_color = (void *) ((byte *) ((gs_state *) vptr)->dev_color - reloc);
}}} static gs_ptr_type_t state_contents_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    gs_ptr_type_t ret;
    if (index < 3) {
	ret = (*st_path.enum_ptrs) (&((gs_state_contents *) vptr)->path, sizeof(((gs_state_contents *) vptr)->path), index, pep);
	goto rx;
    }
    index -= 3;
    if (index < (3 + 2)) {
	ret = (*st_clip_path.enum_ptrs) (&((gs_state_contents *) vptr)->clip_path, sizeof(((gs_state_contents *) vptr)->clip_path), index, pep);
	goto rx;
    }
    index -= (3 + 2);
    if (index < 1) {
	ret = (*st_client_color.enum_ptrs) (&((gs_state_contents *) vptr)->ccolor, sizeof(((gs_state_contents *) vptr)->ccolor), index, pep);
	goto rx;
    }
    index -= 1;
    return (*st_device_color.enum_ptrs) (&((gs_state_contents *) vptr)->dev_color, sizeof(((gs_state_contents *) vptr)->dev_color), index, pep);
  rx:if (ret == 0) {
	*pep = 0;
	return (&ptr_struct_procs);
    }
    return ret;
}

static void state_contents_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	(*st_path.reloc_ptrs) (&((gs_state_contents *) vptr)->path, sizeof(gx_path), gcst);
	(*st_clip_path.reloc_ptrs) (&((gs_state_contents *) vptr)->clip_path, sizeof(gx_clip_path), gcst);
	(*st_client_color.reloc_ptrs) (&((gs_state_contents *) vptr)->ccolor, sizeof(gs_client_color), gcst);
	(*st_device_color.reloc_ptrs) (&((gs_state_contents *) vptr)->dev_color, sizeof(gx_device_color), gcst);
}
}

static int gstate_copy_client_data(gs_state * pgs, void *dto, void *dfrom, gs_state_copy_reason_t reason)
{
    return (pgs->client_procs.copy_for != 0 ? (*pgs->client_procs.copy_for) (dto, dfrom, reason) : (*pgs->client_procs.copy) (dto, dfrom));
}

static float null_transfer(floatp gray, const gx_transfer_map * pmap)
{
    return gray;
}

int gs_imager_state_initialize(gs_imager_state * pis, gs_memory_t * mem)
{
    pis->memory = mem; {
	int i;
	for (i = 0; i < 2; ++i)
	    pis->screen_phase[i].x = pis->screen_phase[i].y = 0;
    }
    pis->cie_render = 0;
    pis->black_generation = 0;
    pis->undercolor_removal = 0;
    do {
	if (((pis->set_transfer.colored.gray) = (gx_transfer_map *) (*(mem)->procs.alloc_struct) (mem, &st_transfer_map, "gs_imager_state_init(transfer)")) == 0) {
	    return ((-25));
	} else {
	    (pis->set_transfer.colored.gray)->rc.ref_count = 4;
	    (pis->set_transfer.colored.gray)->rc.memory = mem;
	    (pis->set_transfer.colored.gray)->rc.free = rc_free_struct_only;
	}
    } while (0);
    pis->set_transfer.colored.gray->proc = null_transfer;
    pis->set_transfer.colored.gray->id = gs_next_ids(1);
    pis->set_transfer.colored.gray->values[0] = ((frac) 0);
    pis->set_transfer.colored.red = pis->set_transfer.colored.green = pis->set_transfer.colored.blue = pis->set_transfer.colored.gray;
    pis->effective_transfer = pis->set_transfer;
    pis->cie_joint_caches = 0;
    pis->cmap_procs = cmap_procs_default;
    pis->pattern_cache = 0;
    return 0;
}

void gs_imager_state_release(gs_imager_state * pis)
{
    static const char cname[] = "gs_imager_state_release";
    do {
	if ((pis->cie_joint_caches) != 0 && !((pis->cie_joint_caches)->rc.ref_count += -1)) {
	    (*(pis->cie_joint_caches)->rc.free) ((pis->cie_joint_caches)->rc.memory, (void *) (pis->cie_joint_caches), cname);
	    (pis->cie_joint_caches) = 0;
	}
    } while (0);
    do {
	if ((pis->set_transfer.colored.gray) != 0 && !((pis->set_transfer.colored.gray)->rc.ref_count += -1)) {
	    (*(pis->set_transfer.colored.gray)->rc.free) ((pis->set_transfer.colored.gray)->rc.memory, (void *) (pis->set_transfer.colored.gray), cname);
	    (pis->set_transfer.colored.gray) = 0;
	}
    } while (0);
    do {
	if ((pis->set_transfer.colored.blue) != 0 && !((pis->set_transfer.colored.blue)->rc.ref_count += -1)) {
	    (*(pis->set_transfer.colored.blue)->rc.free) ((pis->set_transfer.colored.blue)->rc.memory, (void *) (pis->set_transfer.colored.blue), cname);
	    (pis->set_transfer.colored.blue) = 0;
	}
    } while (0);
    do {
	if ((pis->set_transfer.colored.green) != 0 && !((pis->set_transfer.colored.green)->rc.ref_count += -1)) {
	    (*(pis->set_transfer.colored.green)->rc.free) ((pis->set_transfer.colored.green)->rc.memory, (void *) (pis->set_transfer.colored.green), cname);
	    (pis->set_transfer.colored.green) = 0;
	}
    } while (0);
    do {
	if ((pis->set_transfer.colored.red) != 0 && !((pis->set_transfer.colored.red)->rc.ref_count += -1)) {
	    (*(pis->set_transfer.colored.red)->rc.free) ((pis->set_transfer.colored.red)->rc.memory, (void *) (pis->set_transfer.colored.red), cname);
	    (pis->set_transfer.colored.red) = 0;
	}
    } while (0);
    do {
	if ((pis->undercolor_removal) != 0 && !((pis->undercolor_removal)->rc.ref_count += -1)) {
	    (*(pis->undercolor_removal)->rc.free) ((pis->undercolor_removal)->rc.memory, (void *) (pis->undercolor_removal), cname);
	    (pis->undercolor_removal) = 0;
	}
    } while (0);
    do {
	if ((pis->black_generation) != 0 && !((pis->black_generation)->rc.ref_count += -1)) {
	    (*(pis->black_generation)->rc.free) ((pis->black_generation)->rc.memory, (void *) (pis->black_generation), cname);
	    (pis->black_generation) = 0;
	}
    } while (0);
    do {
	if ((pis->cie_render) != 0 && !((pis->cie_render)->rc.ref_count += -1)) {
	    (*(pis->cie_render)->rc.free) ((pis->cie_render)->rc.memory, (void *) (pis->cie_render), cname);
	    (pis->cie_render) = 0;
	}
    } while (0);
}

gs_state *gs_state_alloc(gs_memory_t * mem)
{
    gs_state *pgs = gstate_alloc(mem, "gs_state_alloc");
    if (pgs == 0)
	return 0; {
	static const gs_imager_state gstate_initial = { 0, {0.0, gs_cap_butt, gs_join_miter, 10.0, 0.20305866, 0.0, 0, {((void *) 0), 0, 0.0, 0, 0.0, 1, 0, 0.0}}, {1.0, 0.0, 0.0, -(1.0), 0.0, 0.0}, (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10)), ((gx_color_value) ((1L << (sizeof(gx_color_value) * 8)) - 1)), 0, 1.0, {((1L << 12) >> 1), ((1L << 12) >> 1)}
	, 0, 0 };
	*(gs_imager_state *) pgs = gstate_initial;
	}
	do {
	    if (((pgs->halftone) = (gs_halftone *) (*(mem)->procs.alloc_struct) (mem, &st_halftone, "gs_state_alloc(halftone)")) == 0) {
		goto fail;
	    } else {
		(pgs->halftone)->rc.ref_count = 1;
		(pgs->halftone)->rc.memory = mem;
		(pgs->halftone)->rc.free = rc_free_struct_only;
	    }
	} while (0);
	pgs->saved = 0;
	gstate_set_contents(pgs, pgs->contents);
	pgs->halftone->type = ht_type_none;
	pgs->dev_ht = 0;
	pgs->ht_cache = gx_ht_alloc_cache(mem, gx_ht_cache_default_tiles(), gx_ht_cache_default_bits());
	gs_imager_state_initialize((gs_imager_state *) pgs, mem);
	pgs->client_data = 0;
	gx_path_init(pgs->path, mem);
	gx_cpath_init(pgs->clip_path, mem);
	pgs->color_space->type = &gs_color_space_type_DeviceGray;
	gx_set_device_color_1(pgs);
	pgs->overprint = ((bool) 0);
	gs_nulldevice(pgs);
	gs_setalpha(pgs, 1.0);
	gs_settransfer(pgs, null_transfer);
	gs_setflat(pgs, 1.0);
	gs_setfilladjust(pgs, 0.25, 0.25);
	gs_setlimitclamp(pgs, ((bool) 0));
	gs_setstrokeadjust(pgs, ((bool) 1));
	pgs->font = 0;
	pgs->root_font = 0;
	pgs->in_cachedevice = 0;
	pgs->in_charpath = (gs_char_path_mode) 0;
	pgs->show_gstate = 0;
	pgs->level = 0;
	pgs->client_data = 0;
	if (gs_initgraphics(pgs) < 0) {
	    return 0;
	}
    return pgs;
  fail:gs_state_free(pgs);
    return 0;
}

void gs_state_set_client(gs_state * pgs, void *pdata, const gs_state_client_procs * pprocs)
{
    pgs->client_data = pdata;
    pgs->client_procs = *pprocs;
} void *gs_state_client_data(const gs_state * pgs)
{
    return pgs->client_data;
}

int gs_state_free(gs_state * pgs)
{
    gstate_free_contents(pgs);
    (*(pgs->memory)->procs.free_object) (pgs->memory, pgs, "gs_state_free");
    return 0;
}

int gs_gsave(gs_state * pgs)
{
    gs_state *pnew = gstate_clone(pgs, pgs->memory, "gs_gsave", copy_for_gsave);
    if (pnew == 0)
	return ((-25));
    gx_path_share(pgs->path);
    gx_cpath_share(pgs->clip_path);
    pgs->saved = pnew;
    if (pgs->show_gstate == pgs)
	pgs->show_gstate = pnew->show_gstate = pnew;
    pgs->level++;
    do {
    } while (0);
    return 0;
}

int gs_grestore(gs_state * pgs)
{
    gs_state *saved = pgs->saved;
    void *pdata = pgs->client_data;
    void *sdata;
    do {
    } while (0);
    if (!saved)
	return gs_gsave(pgs);
    sdata = saved->client_data;
    if (saved->pattern_cache == 0)
	saved->pattern_cache = pgs->pattern_cache;
    pgs->client_data = sdata;
    saved->client_data = pdata;
    if (pdata != 0 && sdata != 0)
	gstate_copy_client_data(pgs, pdata, sdata, copy_for_grestore);
    gstate_free_contents(pgs);
    *pgs = *saved;
    if (pgs->show_gstate == saved)
	pgs->show_gstate = pgs;
    (*(pgs->memory)->procs.free_object) (pgs->memory, saved, "gs_grestore");
    if (pgs->saved)
	return 0;
    return gs_gsave(pgs);
}

int gs_grestoreall(gs_state * pgs)
{
    int code;
    if (!pgs->saved)
	return gs_gsave(pgs);
    while (pgs->saved->saved) {
	int code = gs_grestore(pgs);
	if (code < 0)
	    return code;
    }
    code = gs_grestore(pgs);
    if (code < 0)
	return code;
    ((pgs->ht_cache)->order.levels = 0, (pgs->ht_cache)->order.bits = 0, (pgs->ht_cache)->ht_tiles[0].tiles.data = 0);
    if (pgs->pattern_cache)
	(*pgs->pattern_cache->free_all) (pgs->pattern_cache);
    return code;
}

gs_state *gs_gstate(gs_state * pgs)
{
    return gs_state_copy(pgs, pgs->memory);
}

gs_state *gs_state_copy(gs_state * pgs, gs_memory_t * mem)
{
    gs_state *pnew;
    gstate_share_paths(pgs);
    pnew = gstate_clone(pgs, mem, "gs_gstate", copy_for_gstate);
    if (pnew == 0)
	return 0;
    pnew->saved = 0;
    pnew->show_gstate = (pgs->show_gstate == pgs ? pnew : 0);
    return pnew;
}

int gs_copygstate(gs_state * pto, const gs_state * pfrom)
{
    return gstate_copy(pto, pfrom, copy_for_copygstate, "gs_copygstate");
}

int gs_currentgstate(gs_state * pto, const gs_state * pgs)
{
    gstate_share_paths(pgs);
    return gstate_copy(pto, pgs, copy_for_currentgstate, "gs_currentgstate");
}

int gs_setgstate(gs_state * pgs, const gs_state * pfrom)
{
    gs_state *saved_show = pgs->show_gstate;
    int level = pgs->level;
    int code = gstate_copy(pgs, pfrom, copy_for_setgstate, "gs_setgstate");
    if (code < 0)
	return code;
    pgs->level = level;
    pgs->show_gstate = (pgs->show_gstate == pfrom ? pgs : saved_show);
    return 0;
}

gs_memory_t *gs_state_memory(const gs_state * pgs)
{
    return pgs->memory;
}

gs_state *gs_state_saved(const gs_state * pgs)
{
    return pgs->saved;
}

gs_state *gs_state_swap_saved(gs_state * pgs, gs_state * new_saved)
{
    gs_state *saved = pgs->saved;
    pgs->saved = new_saved;
    return saved;
}

gs_memory_t *gs_state_swap_memory(gs_state * pgs, gs_memory_t * mem)
{
    gs_memory_t *memory = pgs->memory;
    pgs->memory = mem;
    return memory;
}

int gs_initgraphics(gs_state * pgs)
{
    int code;
    gs_initmatrix(pgs);
    if ((code = gs_newpath(pgs)) < 0 || (code = gs_initclip(pgs)) < 0 || (code = gs_setlinewidth(pgs, 1.0)) < 0 || (code = gs_setlinecap(pgs, gs_cap_butt)) < 0 || (code = gs_setlinejoin(pgs, gs_join_miter)) < 0 || (code = gs_setdash(pgs, (float *) 0, 0, 0.0)) < 0 || (gs_setdashadapt(pgs, ((bool) 0)), (code = gs_setdotlength(pgs, 0.0, ((bool) 0)))) < 0 || (code = gs_setgray(pgs, 0.0)) < 0 || (code = gs_setmiterlimit(pgs, 10.0)) < 0)
	return code;
    ((pgs)->log_op = (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10)));
    return 0;
}

int gs_setfilladjust(gs_state * pgs, floatp adjust_x, floatp adjust_y)
{
    if (adjust_x < 0)
	adjust_x = 0;
    else if (adjust_x > 0.5)
	adjust_x = 0.5;
    pgs->fill_adjust.x = ((fixed) ((adjust_x) * (float) (1 << 12)));
    if (adjust_y < 0)
	adjust_y = 0;
    else if (adjust_y > 0.5)
	adjust_y = 0.5;
    pgs->fill_adjust.y = ((fixed) ((adjust_y) * (float) (1 << 12)));
    return 0;
}

int gs_currentfilladjust(const gs_state * pgs, gs_point * adjust)
{
    adjust->x = ((pgs->fill_adjust.x) * (1.0 / (1 << 12)));
    adjust->y = ((pgs->fill_adjust.y) * (1.0 / (1 << 12)));
    return 0;
}

void gs_setlimitclamp(gs_state * pgs, bool clamp)
{
    pgs->clamp_coordinates = clamp;
} bool gs_currentlimitclamp(const gs_state * pgs)
{
    return pgs->clamp_coordinates;
}

static gs_state *gstate_alloc(gs_memory_t * mem, client_name_t cname)
{
    gs_state *pgs = (gs_state *) (*(mem)->procs.alloc_struct) (mem, &st_gs_state, cname);
    gs_state_contents *cont = (gs_state_contents *) (*(mem)->procs.alloc_struct) (mem, &st_gs_state_contents, cname);
    gs_color_space *pcs = (gs_color_space *) (*(mem)->procs.alloc_struct) (mem, &st_color_space, cname);
    if (pgs == 0 || cont == 0 || pcs == 0) {
	(*(mem)->procs.free_object) (mem, pcs, cname);
	(*(mem)->procs.free_object) (mem, cont, cname);
	(*(mem)->procs.free_object) (mem, pgs, cname);
	return 0;
    }
    pgs->line_params.dash.pattern = 0;
    pgs->memory = mem;
    pgs->contents = cont;
    pgs->color_space = pcs;
    return pgs;
}

static void gstate_set_contents(gs_state * pgs, gs_state_contents * cont)
{
    pgs->contents = cont;
    pgs->path = &cont->path;;
    pgs->clip_path = &cont->clip_path;;
    pgs->ccolor = &cont->ccolor;;
    pgs->dev_color = &cont->dev_color;;
} static int gstate_copy_dash(gs_state * pto, const gs_state * pfrom)
{
    return gs_setdash(pto, pfrom->line_params.dash.pattern, pfrom->line_params.dash.pattern_size, pfrom->line_params.dash.offset);
}

static gs_state *gstate_clone(gs_state * pfrom, gs_memory_t * mem, client_name_t cname, gs_state_copy_reason_t reason)
{
    gs_state_contents *cfrom = pfrom->contents;
    gs_color_space *csfrom = pfrom->color_space;
    gs_state *pgs = gstate_alloc(mem, cname);
    gs_state_contents *cont;
    gs_color_space *pcs;
    if (pgs == 0)
	return 0;
    cont = pgs->contents;
    pcs = pgs->color_space;
    *pgs = *pfrom;
    if (pgs->line_params.dash.pattern) {
	int code;
	pgs->line_params.dash.pattern = 0;
	code = gstate_copy_dash(pgs, pfrom);
	if (code < 0)
	    goto fail;
    }
    if (pgs->client_data != 0) {
	void *pdata = pgs->client_data = (*pgs->client_procs.alloc) (mem);
	if (pdata == 0 || gstate_copy_client_data(pgs, pdata, pfrom->client_data, reason) < 0)
	    goto fail;
    }
    do {
	if ((pgs->set_transfer.colored.gray) != 0)
	    (pgs->set_transfer.colored.gray)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->set_transfer.colored.red) != 0)
	    (pgs->set_transfer.colored.red)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->set_transfer.colored.green) != 0)
	    (pgs->set_transfer.colored.green)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->set_transfer.colored.blue) != 0)
	    (pgs->set_transfer.colored.blue)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->halftone) != 0)
	    (pgs->halftone)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->dev_ht) != 0)
	    (pgs->dev_ht)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->cie_render) != 0)
	    (pgs->cie_render)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->black_generation) != 0)
	    (pgs->black_generation)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->undercolor_removal) != 0)
	    (pgs->undercolor_removal)->rc.ref_count++;
    } while (0);
    do {
	if ((pgs->cie_joint_caches) != 0)
	    (pgs->cie_joint_caches)->rc.ref_count++;
    } while (0);
    if (reason == copy_for_gsave) {
	gstate_set_contents(pgs, cfrom);
	pgs->color_space = csfrom;
	gstate_set_contents(pfrom, cont);
	pfrom->color_space = pcs;
    } else {
	gstate_set_contents(pgs, cont);
	pgs->color_space = pcs;
    }
    *cont = *cfrom;
    *pcs = *csfrom;
    (*(pgs)->color_space->type->adjust_color_count) ((pgs)->ccolor, (pgs)->color_space, (pgs)->memory, 1), (*(pgs)->color_space->type->adjust_cspace_count) ((pgs)->color_space, (pgs)->memory, 1);
    return pgs;
  fail:(*(mem)->procs.free_object) (mem, pgs->line_params.dash.pattern, cname);
    (*(mem)->procs.free_object) (mem, pcs, cname);
    (*(mem)->procs.free_object) (mem, cont, cname);
    (*(mem)->procs.free_object) (mem, pgs, cname);
    return 0;
}

static void gstate_free_contents(gs_state * pgs)
{
    gs_memory_t *mem = pgs->memory;
    static const char cname[] = "gstate_free_contents";
    gx_device_halftone *pdht = pgs->dev_ht;
    gx_path_release(pgs->path);
    gx_cpath_release(pgs->clip_path);
    do {
	if ((pgs->cie_joint_caches) != 0 && !((pgs->cie_joint_caches)->rc.ref_count += -1)) {
	    (*(pgs->cie_joint_caches)->rc.free) ((pgs->cie_joint_caches)->rc.memory, (void *) (pgs->cie_joint_caches), cname);
	    (pgs->cie_joint_caches) = 0;
	}
    } while (0);
    do {
	if ((pgs->set_transfer.colored.gray) != 0 && !((pgs->set_transfer.colored.gray)->rc.ref_count += -1)) {
	    (*(pgs->set_transfer.colored.gray)->rc.free) ((pgs->set_transfer.colored.gray)->rc.memory, (void *) (pgs->set_transfer.colored.gray), cname);
	    (pgs->set_transfer.colored.gray) = 0;
	}
    } while (0);
    do {
	if ((pgs->set_transfer.colored.blue) != 0 && !((pgs->set_transfer.colored.blue)->rc.ref_count += -1)) {
	    (*(pgs->set_transfer.colored.blue)->rc.free) ((pgs->set_transfer.colored.blue)->rc.memory, (void *) (pgs->set_transfer.colored.blue), cname);
	    (pgs->set_transfer.colored.blue) = 0;
	}
    } while (0);
    do {
	if ((pgs->set_transfer.colored.green) != 0 && !((pgs->set_transfer.colored.green)->rc.ref_count += -1)) {
	    (*(pgs->set_transfer.colored.green)->rc.free) ((pgs->set_transfer.colored.green)->rc.memory, (void *) (pgs->set_transfer.colored.green), cname);
	    (pgs->set_transfer.colored.green) = 0;
	}
    } while (0);
    do {
	if ((pgs->set_transfer.colored.red) != 0 && !((pgs->set_transfer.colored.red)->rc.ref_count += -1)) {
	    (*(pgs->set_transfer.colored.red)->rc.free) ((pgs->set_transfer.colored.red)->rc.memory, (void *) (pgs->set_transfer.colored.red), cname);
	    (pgs->set_transfer.colored.red) = 0;
	}
    } while (0);
    do {
	if ((pgs->undercolor_removal) != 0 && !((pgs->undercolor_removal)->rc.ref_count += -1)) {
	    (*(pgs->undercolor_removal)->rc.free) ((pgs->undercolor_removal)->rc.memory, (void *) (pgs->undercolor_removal), cname);
	    (pgs->undercolor_removal) = 0;
	}
    } while (0);
    do {
	if ((pgs->black_generation) != 0 && !((pgs->black_generation)->rc.ref_count += -1)) {
	    (*(pgs->black_generation)->rc.free) ((pgs->black_generation)->rc.memory, (void *) (pgs->black_generation), cname);
	    (pgs->black_generation) = 0;
	}
    } while (0);
    do {
	if ((pgs->cie_render) != 0 && !((pgs->cie_render)->rc.ref_count += -1)) {
	    (*(pgs->cie_render)->rc.free) ((pgs->cie_render)->rc.memory, (void *) (pgs->cie_render), cname);
	    (pgs->cie_render) = 0;
	}
    } while (0);
    if (pdht != 0 && pdht->rc.ref_count == 1) {
	gx_ht_cache *pcache = pgs->ht_cache;
	if (pcache->order.bits == pdht->order.bits || pcache->order.levels == pdht->order.levels)
	    ((pcache)->order.levels = 0, (pcache)->order.bits = 0, (pcache)->ht_tiles[0].tiles.data = 0);
	gx_device_halftone_release(pdht, pdht->rc.memory);
    }
    do {
	if ((pgs->dev_ht) != 0 && !((pgs->dev_ht)->rc.ref_count += -1)) {
	    (*(pgs->dev_ht)->rc.free) ((pgs->dev_ht)->rc.memory, (void *) (pgs->dev_ht), cname);
	    (pgs->dev_ht) = 0;
	}
    } while (0);
    do {
	if ((pgs->halftone) != 0 && !((pgs->halftone)->rc.ref_count += -1)) {
	    (*(pgs->halftone)->rc.free) ((pgs->halftone)->rc.memory, (void *) (pgs->halftone), cname);
	    (pgs->halftone) = 0;
	}
    } while (0);
    (*(pgs)->color_space->type->adjust_color_count) ((pgs)->ccolor, (pgs)->color_space, (pgs)->memory, -1), (*(pgs)->color_space->type->adjust_cspace_count) ((pgs)->color_space, (pgs)->memory, -1);
    if (pgs->client_data != 0)
	(*pgs->client_procs.free) (pgs->client_data, mem);
    (*(mem)->procs.free_object) (mem, pgs->line_params.dash.pattern, cname);
    (*(mem)->procs.free_object) (mem, pgs->color_space, cname);
    (*(mem)->procs.free_object) (mem, pgs->contents, cname);
}

static void gstate_share_paths(const gs_state * pgs)
{
    gx_path *ppath = pgs->path;
    gx_clip_path *pcpath = pgs->clip_path;
    if (ppath->shares_segments) {
	const gs_state *pcur;
	const gs_state *prev;
	const subpath *first;
	for (pcur = pgs, first = ppath->first_subpath; (prev = pcur->saved) != 0 && prev->path->first_subpath == first; pcur = prev)
	    if (!prev->path->shares_segments) {
		gx_path_share(prev->path);
		break;
	    }
    } else
	gx_path_share(ppath);
    if (pcpath->list.count <= 1 && pcpath->segments_valid) {
	gx_path_release(&pcpath->path);
	pcpath->segments_valid = ((bool) 0);
    }
    if (pcpath->path.shares_segments) {
	const gs_state *pcur;
	const gs_state *prev;
	const subpath *first;
	for (pcur = pgs, first = pcpath->path.first_subpath; (prev = pcur->saved) != 0 && prev->clip_path->path.first_subpath == first; pcur = prev)
	    if (!prev->clip_path->path.shares_segments) {
		gx_cpath_share(prev->clip_path);
		break;
	    }
    }
    if (pcpath->shares_list) {
	const gs_state *pcur;
	const gs_state *prev;
	const gx_clip_rect *head;
	for (pcur = pgs, head = pcpath->list.head; (prev = pcur->saved) != 0 && prev->clip_path->list.head == head; pcur = prev)
	    if (!prev->clip_path->shares_list) {
		gx_cpath_share(prev->clip_path);
		break;
	    }
    }
    gx_cpath_share(pcpath);
}

static int gstate_copy(gs_state * pto, const gs_state * pfrom, gs_state_copy_reason_t reason, client_name_t cname)
{
    gs_state_contents *cto = pto->contents;
    gs_color_space *csto = pto->color_space;
    if (pfrom->line_params.dash.pattern || pto->line_params.dash.pattern) {
	int code = gstate_copy_dash(pto, pfrom);
	if (code < 0)
	    return 0;
    }
    (*(pto)->color_space->type->adjust_color_count) ((pto)->ccolor, (pto)->color_space, (pto)->memory, -1), (*(pto)->color_space->type->adjust_cspace_count) ((pto)->color_space, (pto)->memory, -1);
    gx_path_release(pto->path);
    gx_cpath_release(pto->clip_path);
    *cto = *pfrom->contents;
    *csto = *pfrom->color_space;
    (*(pto)->color_space->type->adjust_color_count) ((pto)->ccolor, (pto)->color_space, (pto)->memory, 1), (*(pto)->color_space->type->adjust_cspace_count) ((pto)->color_space, (pto)->memory, 1);
    gx_path_share(pto->path);
    gx_cpath_share(pto->clip_path);
    do {
	if ((pto->cie_joint_caches) != (pfrom->cie_joint_caches)) {
	    do {
		if ((pto->cie_joint_caches) != 0 && !((pto->cie_joint_caches)->rc.ref_count += -1)) {
		    (*(pto->cie_joint_caches)->rc.free) ((pto->cie_joint_caches)->rc.memory, (void *) (pto->cie_joint_caches), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->cie_joint_caches) != 0)
		    (pfrom->cie_joint_caches)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->set_transfer.colored.gray) != (pfrom->set_transfer.colored.gray)) {
	    do {
		if ((pto->set_transfer.colored.gray) != 0 && !((pto->set_transfer.colored.gray)->rc.ref_count += -1)) {
		    (*(pto->set_transfer.colored.gray)->rc.free) ((pto->set_transfer.colored.gray)->rc.memory, (void *) (pto->set_transfer.colored.gray), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->set_transfer.colored.gray) != 0)
		    (pfrom->set_transfer.colored.gray)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->set_transfer.colored.blue) != (pfrom->set_transfer.colored.blue)) {
	    do {
		if ((pto->set_transfer.colored.blue) != 0 && !((pto->set_transfer.colored.blue)->rc.ref_count += -1)) {
		    (*(pto->set_transfer.colored.blue)->rc.free) ((pto->set_transfer.colored.blue)->rc.memory, (void *) (pto->set_transfer.colored.blue), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->set_transfer.colored.blue) != 0)
		    (pfrom->set_transfer.colored.blue)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->set_transfer.colored.green) != (pfrom->set_transfer.colored.green)) {
	    do {
		if ((pto->set_transfer.colored.green) != 0 && !((pto->set_transfer.colored.green)->rc.ref_count += -1)) {
		    (*(pto->set_transfer.colored.green)->rc.free) ((pto->set_transfer.colored.green)->rc.memory, (void *) (pto->set_transfer.colored.green), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->set_transfer.colored.green) != 0)
		    (pfrom->set_transfer.colored.green)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->set_transfer.colored.red) != (pfrom->set_transfer.colored.red)) {
	    do {
		if ((pto->set_transfer.colored.red) != 0 && !((pto->set_transfer.colored.red)->rc.ref_count += -1)) {
		    (*(pto->set_transfer.colored.red)->rc.free) ((pto->set_transfer.colored.red)->rc.memory, (void *) (pto->set_transfer.colored.red), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->set_transfer.colored.red) != 0)
		    (pfrom->set_transfer.colored.red)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->undercolor_removal) != (pfrom->undercolor_removal)) {
	    do {
		if ((pto->undercolor_removal) != 0 && !((pto->undercolor_removal)->rc.ref_count += -1)) {
		    (*(pto->undercolor_removal)->rc.free) ((pto->undercolor_removal)->rc.memory, (void *) (pto->undercolor_removal), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->undercolor_removal) != 0)
		    (pfrom->undercolor_removal)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->black_generation) != (pfrom->black_generation)) {
	    do {
		if ((pto->black_generation) != 0 && !((pto->black_generation)->rc.ref_count += -1)) {
		    (*(pto->black_generation)->rc.free) ((pto->black_generation)->rc.memory, (void *) (pto->black_generation), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->black_generation) != 0)
		    (pfrom->black_generation)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->cie_render) != (pfrom->cie_render)) {
	    do {
		if ((pto->cie_render) != 0 && !((pto->cie_render)->rc.ref_count += -1)) {
		    (*(pto->cie_render)->rc.free) ((pto->cie_render)->rc.memory, (void *) (pto->cie_render), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->cie_render) != 0)
		    (pfrom->cie_render)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->dev_ht) != (pfrom->dev_ht)) {
	    do {
		if ((pto->dev_ht) != 0 && !((pto->dev_ht)->rc.ref_count += -1)) {
		    (*(pto->dev_ht)->rc.free) ((pto->dev_ht)->rc.memory, (void *) (pto->dev_ht), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->dev_ht) != 0)
		    (pfrom->dev_ht)->rc.ref_count++;
	    } while (0);
	}
    } while (0);
    do {
	if ((pto->halftone) != (pfrom->halftone)) {
	    do {
		if ((pto->halftone) != 0 && !((pto->halftone)->rc.ref_count += -1)) {
		    (*(pto->halftone)->rc.free) ((pto->halftone)->rc.memory, (void *) (pto->halftone), cname);
		    do {
		    } while (0);
		}
	    } while (0);
	    do {
		if ((pfrom->halftone) != 0)
		    (pfrom->halftone)->rc.ref_count++;
	    } while (0);
	}
    } while (0); {
	struct gx_pattern_cache_s *pcache = pto->pattern_cache;
	void *pdata = pto->client_data;
	gs_memory_t *mem = pto->memory;
	gs_state *saved = pto->saved;
	float *pattern = pto->line_params.dash.pattern;
	*pto = *pfrom;
	pto->client_data = pdata;
	pto->memory = mem;
	pto->saved = saved;
	pto->line_params.dash.pattern = pattern;
	if (pto->pattern_cache == 0)
	    pto->pattern_cache = pcache;
	if (pfrom->client_data != 0) {
	    gstate_copy_client_data((gs_state *) pfrom, pdata, pfrom->client_data, reason);
	}
    }
    gstate_set_contents(pto, cto);
    pto->color_space = csto;
    pto->show_gstate = (pfrom->show_gstate == pfrom ? pto : 0);
    return 0;
}
