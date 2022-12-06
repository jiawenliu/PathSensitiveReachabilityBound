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
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
int imod(int m, int n);
int igcd(int x, int y);
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
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
int gs_erasepage(gs_state *), gs_fillpage(gs_state *), gs_fill(gs_state *), gs_eofill(gs_state *), gs_stroke(gs_state *);
int gs_imagepath(gs_state *, int, int, const byte *);
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
typedef struct gs_color_space_s gs_color_space;
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
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef ulong gx_xglyph;
struct gx_xfont_procs_s;
typedef struct gx_xfont_procs_s gx_xfont_procs;
struct gx_xfont_s;
typedef struct gx_xfont_s gx_xfont;
typedef unsigned short gx_color_value;
typedef struct gx_device_s gx_device;
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
typedef struct gs_param_list_s gs_param_list;
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
typedef struct gx_device_memory_s gx_device_memory;
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
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef struct rc_header_s rc_header;
struct rc_header_s {
    long ref_count;
    gs_memory_t *memory;
    void (*free) (gs_memory_t *, void *, client_name_t);
};
void rc_free_struct_only(gs_memory_t *, void *, client_name_t);
typedef short frac;
typedef short signed_frac;
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
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
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef struct gs_path_enum_s gs_path_enum;
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
struct gx_device_memory_s {
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
    gs_matrix initial_matrix;
    uint raster;
    bool foreign_bits;
    byte *base;
    byte **line_ptrs;
    gs_memory_t *bitmap_memory;
    gs_const_string palette;
    struct _c24 {
	gx_color_index rgb;
	bits32 rgbr, gbrg, brgb;
    } color24;
    gs_log2_scale_point log2_scale;
    int log2_alpha_bits;
    int mapped_x;
    int mapped_y;
    int mapped_height;
    int mapped_start;
    gx_color_index save_color;
};
extern const gs_memory_struct_type_t st_device_memory;
ulong gdev_mem_data_size(const gx_device_memory *, int, int);
int gdev_mem_max_height(const gx_device_memory *, int, ulong);
const gx_device_memory *gdev_mem_device_for_bits(int);
const gx_device_memory *gdev_mem_word_device_for_bits(int);
void gs_make_mem_mono_device(gx_device_memory * mdev, gs_memory_t * mem, gx_device * target);
void gs_make_mem_device(gx_device_memory * mdev, const gx_device_memory * mdproto, gs_memory_t * mem, int page_device, gx_device * target);
void gs_make_mem_abuf_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, const gs_log2_scale_point * pscale, int alpha_bits, int mapped_x);
void gs_make_mem_alpha_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, int alpha_bits);
void gdev_mem_mono_set_inverted(gx_device_memory * mdev, bool black_is_1);
bool gs_device_is_memory(const gx_device *);
bool gs_device_is_abuf(const gx_device *);
extern const bits16 mono_copy_masks[17];
extern const bits32 mono_fill_masks[33];
void bits_fill_rectangle(byte * dest, int dest_bit, uint raster, uint pattern, int width_bits, int height);
void bits_replicate_horizontally(byte * data, uint width, uint height, uint raster, uint replicated_width, uint replicated_raster);
void bits_replicate_vertically(byte * data, uint height, uint raster, uint replicated_height);
void bits_bounding_box(const byte * data, uint height, uint raster, gs_int_rect * pbox);
void bits_compress_scaled(const byte * src, int srcx, uint width, uint height, uint sraster, byte * dest, uint draster, const gs_log2_scale_point * plog2_scale, int log2_out_bits);
void bytes_fill_rectangle(byte * dest, uint raster, byte value, int width_bytes, int height);
void bytes_copy_rectangle(byte * dest, uint dest_raster, const byte * src, uint src_raster, int width_bytes, int height);
void mem_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int mem_close(gx_device * dev);
int mem_open(gx_device * dev);
int mem_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int mem_word_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
gx_color_index mem_mapped_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int mem_mapped_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
void mem_swap_byte_rect(byte *, uint, int, int, int, bool);
extern const gx_device_memory mem_mono_device;
extern const gx_device_memory mem_mapped2_device;
extern const gx_device_memory mem_mapped4_device;
extern const gx_device_memory mem_mapped8_device;
extern const gx_device_memory mem_true16_device;
extern const gx_device_memory mem_true24_device;
extern const gx_device_memory mem_true32_device;
extern const gx_device_memory mem_planar_device;
extern const gx_device_memory mem_mono_word_device;
extern const gx_device_memory mem_mapped2_word_device;
extern const gx_device_memory mem_mapped4_word_device;
extern const gx_device_memory mem_mapped8_word_device;
extern const gx_device_memory mem_true24_word_device;
extern const gx_device_memory mem_true32_word_device;
extern const gs_const_string mem_mono_b_w_palette;
extern const gs_const_string mem_mono_w_b_palette;
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
typedef enum { gs_color_space_index_DeviceGray = 0, gs_color_space_index_DeviceRGB, gs_color_space_index_DeviceCMYK, gs_color_space_index_CIEDEFG, gs_color_space_index_CIEDEF, gs_color_space_index_CIEABC, gs_color_space_index_CIEA, gs_color_space_index_Separation, gs_color_space_index_Indexed, gs_color_space_index_Pattern } gs_color_space_index;
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
struct stream_template_s {
    gs_memory_type_ptr_t stype;
    int (*init) (stream_state *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    uint min_in_size;
    uint min_out_size;
    void (*release) (stream_state *);
    void (*set_defaults) (stream_state *);
    int (*reinit) (stream_state *);
};
int stream_move(stream_cursor_read *, stream_cursor_write *);
typedef enum { hex_ignore_garbage = 0, hex_ignore_whitespace = 1, hex_ignore_leading_whitespace = 2 } hex_syntax;
int s_hex_process(stream_cursor_read *, stream_cursor_write *, int *, hex_syntax);
typedef float PixelWeight;
typedef double AccumTmp;
typedef byte PixelTmp;
typedef int PixelTmp2;
typedef struct {
    PixelWeight weight;
} CONTRIB;
typedef struct {
    int index;
    int n;
    int first_pixel;
} CLIST;
typedef struct stream_IScale_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int Colors;
    int BitsPerComponentIn;
    uint MaxValueIn;
    int WidthIn, HeightIn;
    int BitsPerComponentOut;
    uint MaxValueOut;
    int WidthOut, HeightOut;
    int sizeofPixelIn;
    int sizeofPixelOut;
    double xscale, yscale;
    void *src;
    void *dst;
    PixelTmp *tmp;
    CLIST *contrib;
    CONTRIB *items;
    int src_y;
    uint src_offset, src_size;
    int dst_y;
    uint dst_offset, dst_size;
    CLIST dst_next_list;
    int dst_last_index;
    CONTRIB dst_items[(1 << 3)];
} stream_IScale_state;
extern const gs_memory_struct_type_t st_IScale_state;
extern const stream_template s_IScale_template;
typedef struct _a {
    fixed Q;
    uint R;
} gx_dda_state_fixed;
typedef struct _e {
    fixed dQ;
    uint dR, NdR;
} gx_dda_step_fixed;
typedef struct gx_dda_fixed_s {
    gx_dda_state_fixed state;
    gx_dda_step_fixed step;
} gx_dda_fixed;
typedef struct gx_dda_fixed_point_s {
    gx_dda_fixed x, y;
} gx_dda_fixed_point;
typedef union sample_lookup_s {
    bits32 lookup4x1to32[16];
    bits16 lookup2x2to16[16];
    byte lookup8[256];
} sample_lookup_t;
extern const bits32 lookup4x1to32_identity[16];
extern const bits32 lookup4x1to32_inverted[16];
const byte *sample_unpack_copy(byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
const byte *sample_unpack_1(byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
const byte *sample_unpack_2(byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
const byte *sample_unpack_4(byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
const byte *sample_unpack_8(byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
typedef struct gx_image_enum_s gx_image_enum;
typedef enum { sd_none, sd_lookup, sd_compute } sample_decoding;
typedef struct sample_map_s {
    sample_lookup_t table;
    float decode_lookup[16];
    double decode_factor;
    sample_decoding decoding;
} sample_map;
extern const byte *(*sample_unpack_12_proc) (byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
typedef int (*irender_proc_t) (gx_image_enum * penum, const byte * buffer, int data_x, uint w, int h, gx_device * dev);
typedef irender_proc_t(*image_strategy_proc_t) (gx_image_enum * penum);
typedef struct gx_image_strategies_s {
    image_strategy_proc_t interpolate;
    image_strategy_proc_t simple;
    image_strategy_proc_t fracs;
    image_strategy_proc_t mono;
    image_strategy_proc_t color;
} gx_image_strategies_t;
extern gx_image_strategies_t image_strategies;
typedef enum { image_portrait = 0, image_landscape, image_skewed } image_posture;
typedef struct gx_image_clue_s {
    gx_device_color dev_color;
    bits32 key;
} gx_image_clue;
typedef struct gx_device_rop_texture_s gx_device_rop_texture;
struct gx_image_enum_s {
    byte bps;
    byte unpack_bps;
    byte log2_xbytes;
    byte spp;
    byte num_planes;
    byte spread;
    byte masked;
    byte interpolate;
    gs_matrix matrix;
    struct r_ {
	int x, y, w, h;
    } rect;
    gs_fixed_point x_extent, y_extent;
    const byte *(*unpack) (byte * bptr, int *pdata_x, const byte * data, int data_x, uint dsize, const sample_lookup_t * ptab, int spread);
    int (*render) (gx_image_enum * penum, const byte * buffer, int data_x, uint w, int h, gx_device * dev);
    const gs_imager_state *pis;
    const gs_color_space *pcs;
    gs_memory_t *memory;
    gx_device *dev;
    byte *buffer;
    uint buffer_size;
    byte *line;
    uint line_size;
    uint line_width;
    image_posture posture;
    byte use_rop;
    byte clip_image;
    byte slow_loop;
    byte device_color;
    gs_fixed_rect clip_outer;
    gs_fixed_rect clip_inner;
    gs_logical_operation_t log_op;
    fixed adjust;
    fixed dxx, dxy;
    gx_device_clip *clip_dev;
    gx_device_rop_texture *rop_dev;
    stream_IScale_state *scaler;
    int y;
    gs_fixed_point cur, prev;
    struct dd_ {
	gx_dda_fixed_point row;
	gx_dda_fixed_point pixel0;
    } dda;
    int line_xy;
    int xi_next;
    gs_int_point xyi;
    int yci, hci;
    int xci, wci;
    sample_map map[4];
    gx_image_clue clues[256];
};
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
static int image_render_mono(gx_image_enum * penum, const byte * buffer, int data_x, uint w, int h, gx_device * dev);
static irender_proc_t image_strategy_mono(gx_image_enum * penum)
{
    penum->slow_loop = (penum->masked && !((&penum->clues[255].dev_color)->type == (&gx_dc_procs_pure))) || penum->use_rop;
    if (penum->spp == 1) {
	if (!(penum->slow_loop || penum->posture != image_portrait))
	    penum->clip_image &= ~(1 | 2);
	do {
	} while (0);
	penum->dxx = ((fixed) ((penum->matrix.xx + ((1L) * (1.0 / (1 << 12))) / 2) * (float) (1 << 12)));
	return image_render_mono;
    }
    return 0;
}

void gs_gximage2_init(gs_memory_t * mem)
{
    image_strategies.mono = image_strategy_mono;
} static int image_render_mono(gx_image_enum * penum, const byte * buffer, int data_x, uint w, int h, gx_device * dev)
{
    const gs_imager_state *pis = penum->pis;
    gs_logical_operation_t lop = penum->log_op;
    const int masked = penum->masked;
    const gs_color_space *pcs;
    int (*remap_color) (const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    gs_client_color cc;
    const gx_color_map_procs *cmap_procs = gx_device_cmap_procs(dev);
    void (*map_gray) (frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t) = cmap_procs->map_gray;
    gx_device_color *pdevc = &penum->clues[255].dev_color;
    int tiles_fit = gx_check_tile_cache(pis);
    gx_dda_fixed_point next;
    gx_dda_step_fixed dxx2, dxx3, dxx4;
    register const byte *psrc = buffer + data_x;
    const byte *endp = psrc + w;
    const byte *stop = endp;
    fixed xrun;
    register byte run;
    int htrun = (masked ? 255 : -2);
    int code = 0;
    if (h == 0)
	return 0;
    next = penum->dda.pixel0;
    xrun = ((next.x).state).Q;
    if (!masked) {
	pcs = penum->pcs;
	remap_color = pcs->type->remap_color;
    }
    run = *psrc; {
	byte last = stop[-1];
	while (stop > psrc && stop[-1] == last)
	    --stop;
    }
    if (penum->slow_loop || penum->posture != image_portrait) {
	fixed yrun;
	const fixed pdyx = ((penum->dda.row.x).state).Q - penum->cur.x;
	const fixed pdyy = ((penum->dda.row.y).state).Q - penum->cur.y;
	int (*fill_pgram) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop) = ((dev)->std_procs.fill_parallelogram);
	yrun = ((next.y).state).Q;
	if (masked) {
	    pdevc = &penum->clues[255].dev_color;
	    code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_texture);
	    if (code < 0)
		return code;
	    if (stop <= psrc)
		goto last;
	    if (penum->posture == image_portrait) {
		dxx2 = next.x.step;
		(dxx2).dQ += ((dxx2).dR < (next.x.step).NdR ? ((dxx2).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx2).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
		dxx3 = dxx2;
		(dxx3).dQ += ((dxx3).dR < (next.x.step).NdR ? ((dxx3).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx3).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
		dxx4 = dxx3;
		(dxx4).dQ += ((dxx4).dR < (next.x.step).NdR ? ((dxx4).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx4).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
		for (;;) {
		    while (!psrc[0])
			if (!psrc[1]) {
			    if (!psrc[2]) {
				if (!psrc[3]) {
				    psrc += 4;
				    (next.x.state).Q += ((next.x.state).R >= (dxx4).dR ? ((next.x.state).R -= (dxx4).dR, (dxx4).dQ) : ((next.x.state).R += (dxx4).NdR, (dxx4).dQ + 1));
				    continue;
				}
				psrc += 3;
				(next.x.state).Q += ((next.x.state).R >= (dxx3).dR ? ((next.x.state).R -= (dxx3).dR, (dxx3).dQ) : ((next.x.state).R += (dxx3).NdR, (dxx3).dQ + 1));
				break;
			    }
			    psrc += 2;
			    (next.x.state).Q += ((next.x.state).R >= (dxx2).dR ? ((next.x.state).R -= (dxx2).dR, (dxx2).dQ) : ((next.x.state).R += (dxx2).NdR, (dxx2).dQ + 1));
			    break;
			} else {
			    ++psrc;
			    ((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
			    break;
			}
		    xrun = ((next.x).state).Q;
		    if (psrc >= stop)
			break;
		    for (; *psrc; ++psrc)
			((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
		    code = (*fill_pgram) (dev, xrun, yrun, ((next.x).state).Q - xrun, 0L, 0L, pdyy, pdevc, lop);
		    if (code < 0)
			return code;
		    if (psrc >= stop)
			break;
		}
	    } else
		for (;;) {
		    for (; !*psrc; ++psrc) {
			((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
			((next.y).state).Q += (((next.y).state).R >= ((next.y).step).dR ? (((next.y).state).R -= ((next.y).step).dR, ((next.y).step).dQ) : (((next.y).state).R += ((next.y).step).NdR, ((next.y).step).dQ + 1));
		    }
		    yrun = ((next.y).state).Q;
		    xrun = ((next.x).state).Q;
		    if (psrc >= stop)
			break;
		    for (; *psrc; ++psrc) {
			((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
			((next.y).state).Q += (((next.y).state).R >= ((next.y).step).dR ? (((next.y).state).R -= ((next.y).step).dR, ((next.y).step).dQ) : (((next.y).state).R += ((next.y).step).NdR, ((next.y).step).dQ + 1));
		    }
		    code = (*fill_pgram) (dev, xrun, yrun, ((next.x).state).Q - xrun, ((next.y).state).Q - yrun, pdyx, pdyy, pdevc, lop);
		    if (code < 0)
			return code;
		    if (psrc >= stop)
			break;
		}
	} else if (penum->posture == image_portrait || penum->posture == image_landscape) {
	    if (stop <= psrc)
		goto last;
	    for (;;) {
		if (*psrc != run) {
		    if (run != htrun) {
			htrun = run; {
			    pdevc = &penum->clues[run].dev_color;
			    if (!((pdevc)->type != (&gx_dc_procs_none))) {
				if (penum->device_color)
				    (*map_gray) (((frac) (((frac) (run) << (15 - (8))) + ((run) >> ((8) * 2 - 15)) - ((run) >> ((8) - 3)))), pdevc, pis, dev, gs_color_select_source);
				else {
				    switch (penum->map[0].decoding) {
				    case sd_none:
					cc.paint.values[0] = (run) * (1.0 / 255.0);
					break;
				    case sd_lookup:
					cc.paint.values[0] = penum->map[0].decode_lookup[(run) >> 4];
					break;
				    case sd_compute:
					cc.paint.values[0] = penum->map[0].decode_lookup[0] + (run) * penum->map[0].decode_factor;
				    };
				    (*remap_color) (&cc, pcs, pdevc, pis, dev, gs_color_select_source);
				}
			    } else if (!((pdevc)->type == (&gx_dc_procs_pure))) {
				if (!tiles_fit) {
				    code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_source);
				    if (code < 0)
					return code;
				}
			    }
			};
		    }
		    code = (*fill_pgram) (dev, xrun, yrun, ((next.x).state).Q - xrun, ((next.y).state).Q - yrun, pdyx, pdyy, pdevc, lop);
		    if (code < 0)
			return code;
		    yrun = ((next.y).state).Q;
		    xrun = ((next.x).state).Q;
		    if (psrc >= stop)
			break;
		    run = *psrc;
		}
		psrc++;
		((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
		((next.y).state).Q += (((next.y).state).R >= ((next.y).step).dR ? (((next.y).state).R -= ((next.y).step).dR, ((next.y).step).dQ) : (((next.y).state).R += ((next.y).step).NdR, ((next.y).step).dQ + 1));
	    }
	} else {
	    stop = endp;
	    for (;;) {
		psrc++;
		if (run != htrun) {
		    htrun = run; {
			pdevc = &penum->clues[run].dev_color;
			if (!((pdevc)->type != (&gx_dc_procs_none))) {
			    if (penum->device_color)
				(*map_gray) (((frac) (((frac) (run) << (15 - (8))) + ((run) >> ((8) * 2 - 15)) - ((run) >> ((8) - 3)))), pdevc, pis, dev, gs_color_select_source);
			    else {
				switch (penum->map[0].decoding) {
				case sd_none:
				    cc.paint.values[0] = (run) * (1.0 / 255.0);
				    break;
				case sd_lookup:
				    cc.paint.values[0] = penum->map[0].decode_lookup[(run) >> 4];
				    break;
				case sd_compute:
				    cc.paint.values[0] = penum->map[0].decode_lookup[0] + (run) * penum->map[0].decode_factor;
				};
				(*remap_color) (&cc, pcs, pdevc, pis, dev, gs_color_select_source);
			    }
			} else if (!((pdevc)->type == (&gx_dc_procs_pure))) {
			    if (!tiles_fit) {
				code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_source);
				if (code < 0)
				    return code;
			    }
			}
		    };
		}
		code = (*fill_pgram) (dev, xrun, yrun, ((next.x).state).Q - xrun, ((next.y).state).Q - yrun, pdyx, pdyy, pdevc, lop);
		if (code < 0)
		    return code;
		yrun = ((next.y).state).Q;
		xrun = ((next.x).state).Q;
		if (psrc > stop) {
		    --psrc;
		    break;
		}
		run = psrc[-1];
		((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
		((next.y).state).Q += (((next.y).state).R >= ((next.y).step).dR ? (((next.y).state).R -= ((next.y).step).dR, ((next.y).step).dQ) : (((next.y).state).R += ((next.y).step).NdR, ((next.y).step).dQ + 1));
	    }
	}
      last:if (stop < endp && (*stop || !masked)) {
	    if (!masked) { {
		    pdevc = &penum->clues[*stop].dev_color;
		    if (!((pdevc)->type != (&gx_dc_procs_none))) {
			if (penum->device_color)
			    (*map_gray) (((frac) (((frac) (*stop) << (15 - (8))) + ((*stop) >> ((8) * 2 - 15)) - ((*stop) >> ((8) - 3)))), pdevc, pis, dev, gs_color_select_source);
			else {
			    switch (penum->map[0].decoding) {
			    case sd_none:
				cc.paint.values[0] = (*stop) * (1.0 / 255.0);
				break;
			    case sd_lookup:
				cc.paint.values[0] = penum->map[0].decode_lookup[(*stop) >> 4];
				break;
			    case sd_compute:
				cc.paint.values[0] = penum->map[0].decode_lookup[0] + (*stop) * penum->map[0].decode_factor;
			    };
			    (*remap_color) (&cc, pcs, pdevc, pis, dev, gs_color_select_source);
			}
		    } else if (!((pdevc)->type == (&gx_dc_procs_pure))) {
			if (!tiles_fit) {
			    code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_source);
			    if (code < 0)
				return code;
			}
		    }
	    };
	    }
	    do {
		uint n_ = (endp - stop);
		((next.x).state).Q += ((next.x).step).dQ * (endp - stop);
		while (n_--)
		    if (((next.x).state).R >= ((next.x).step).dR)
			((next.x).state).R -= ((next.x).step).dR;
		    else
			((next.x).state).R += ((next.x).step).NdR, ((next.x).state).Q++;
	    } while (0);
	    do {
		uint n_ = (endp - stop);
		((next.y).state).Q += ((next.y).step).dQ * (endp - stop);
		while (n_--)
		    if (((next.y).state).R >= ((next.y).step).dR)
			((next.y).state).R -= ((next.y).step).dR;
		    else
			((next.y).state).R += ((next.y).step).NdR, ((next.y).state).Q++;
	    } while (0);
	    code = (*fill_pgram) (dev, xrun, yrun, ((next.x).state).Q - xrun, ((next.y).state).Q - yrun, pdyx, pdyy, pdevc, lop);
	}
    } else {
	const fixed adjust = penum->adjust;
	const fixed dxx = penum->dxx;
	fixed xa = (dxx >= 0 ? adjust : -adjust);
	const int yt = penum->yci, iht = penum->hci;
	int (*fill_proc) (gx_device * dev, int x, int y, int width, int height, gx_color_index color) = ((dev)->std_procs.fill_rectangle);
	int (*tile_proc) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y) = ((dev)->std_procs.strip_tile_rectangle);
	int (*copy_mono_proc) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1) = ((dev)->std_procs.copy_mono);
	int bstart;
	int phase_x;
	int tile_offset = ((*((dev)->std_procs.get_band)) (dev, yt, &bstart) == 0 ? gx_check_tile_size(pis, ((int) (((((dxx) < 0 ? -(dxx) : (dxx)) + (xa << 1)) + ((1 << 12) - 1)) >> (12))), yt, iht, gs_color_select_source, &phase_x) : -1);
	int xmin = ((int) ((((penum->clip_outer.p.x) + (((1 << 12) >> 1) - 1L))) >> (12)));
	int xmax = ((int) ((((penum->clip_outer.q.x) + (((1 << 12) >> 1) - 1L))) >> (12)));
	xrun = xrun - xa + (((1L << 12) >> 1) - 1L);
	(((next.x).state).Q += (xa + (((1L << 12) >> 1) - 1L)));
	xa <<= 1;
	dxx2 = next.x.step;
	(dxx2).dQ += ((dxx2).dR < (next.x.step).NdR ? ((dxx2).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx2).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
	dxx3 = dxx2;
	(dxx3).dQ += ((dxx3).dR < (next.x.step).NdR ? ((dxx3).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx3).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
	dxx4 = dxx3;
	(dxx4).dQ += ((dxx4).dR < (next.x.step).NdR ? ((dxx4).dR += (next.x.step).dR, (next.x.step).dQ) : ((dxx4).dR -= (next.x.step).NdR, (next.x.step).dQ + 1));
	if (stop > psrc)
	    for (;;) {
	      skf:if (psrc[0] == run) {
		    if (psrc[1] == run) {
			if (psrc[2] == run) {
			    if (psrc[3] == run) {
				psrc += 4;
				(next.x.state).Q += ((next.x.state).R >= (dxx4).dR ? ((next.x.state).R -= (dxx4).dR, (dxx4).dQ) : ((next.x.state).R += (dxx4).NdR, (dxx4).dQ + 1));
				goto skf;
			    } else {
				psrc += 4;
				(next.x.state).Q += ((next.x.state).R >= (dxx3).dR ? ((next.x.state).R -= (dxx3).dR, (dxx3).dQ) : ((next.x.state).R += (dxx3).NdR, (dxx3).dQ + 1));
			    }
			} else {
			    psrc += 3;
			    (next.x.state).Q += ((next.x.state).R >= (dxx2).dR ? ((next.x.state).R -= (dxx2).dR, (dxx2).dQ) : ((next.x.state).R += (dxx2).NdR, (dxx2).dQ + 1));
			}
		    } else {
			psrc += 2;
			((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
		    }
		} else
		    psrc++; {
		    int xi = ((int) ((xrun) >> (12)));
		    int wi = ((int) ((((next.x).state).Q) >> (12))) - xi;
		    int xei, tsx;
		    const gx_strip_bitmap *tile;
		    if (wi <= 0) {
			if (wi == 0)
			    goto mt;
			xi += wi, wi = -wi;
		    }
		    if ((xei = xi + wi) > xmax || xi < xmin) {
			if (xi < xmin)
			    wi -= xmin - xi, xi = xmin;
			if (xei > xmax)
			    wi -= xei - xmax;
			if (wi <= 0)
			    goto mt;
		    }
		    switch (run) {
		    case 0:
			if (masked)
			    goto mt;
			if (!((&penum->clues[0].dev_color)->type == (&gx_dc_procs_pure)))
			    goto ht;
			code = (*fill_proc) (dev, xi, yt, wi, iht, penum->clues[0].dev_color.colors.pure);
			break;
		    case 255:
			if (!((&penum->clues[255].dev_color)->type == (&gx_dc_procs_pure)))
			    goto ht;
			code = (*fill_proc) (dev, xi, yt, wi, iht, penum->clues[255].dev_color.colors.pure);
			break;
		    default:
		      ht:if (run != htrun) { {
				pdevc = &penum->clues[run].dev_color;
				if (!((pdevc)->type != (&gx_dc_procs_none))) {
				    if (penum->device_color)
					(*map_gray) (((frac) (((frac) (run) << (15 - (8))) + ((run) >> ((8) * 2 - 15)) - ((run) >> ((8) - 3)))), pdevc, pis, dev, gs_color_select_source);
				    else {
					switch (penum->map[0].decoding) {
					case sd_none:
					    cc.paint.values[0] = (run) * (1.0 / 255.0);
					    break;
					case sd_lookup:
					    cc.paint.values[0] = penum->map[0].decode_lookup[(run) >> 4];
					    break;
					case sd_compute:
					    cc.paint.values[0] = penum->map[0].decode_lookup[0] + (run) * penum->map[0].decode_factor;
					};
					(*remap_color) (&cc, pcs, pdevc, pis, dev, gs_color_select_source);
				    }
				} else if (!((pdevc)->type == (&gx_dc_procs_pure))) {
				    if (!tiles_fit) {
					code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_source);
					if (code < 0)
					    return code;
				    }
				}
			};
			htrun = run;
			}
			if (((pdevc)->type == (&gx_dc_procs_pure))) {
			    code = (*fill_proc) (dev, xi, yt, wi, iht, pdevc->colors.pure);
			} else if (!((pdevc)->type == (&gx_dc_procs_ht_binary))) {
			    code = (*(pdevc)->type->fill_rectangle) (pdevc, xi, yt, wi, iht, dev, lop, ((void *) 0));
			} else if (tile_offset >= 0 && (tile = &pdevc->colors.binary.b_tile->tiles, (tsx = (xi + phase_x) % tile->rep_width) + wi <= tile->size.x)) {
			    byte *row = tile->data + tile_offset;
			    code = (*copy_mono_proc) (dev, row, tsx, tile->raster, 0L, xi, yt, wi, iht, pdevc->colors.binary.color[0], pdevc->colors.binary.color[1]);
			} else {
			    code = (*tile_proc) (dev, &pdevc->colors.binary.b_tile->tiles, xi, yt, wi, iht, pdevc->colors.binary.color[0], pdevc->colors.binary.color[1], pdevc->phase.x, pdevc->phase.y);
			}
		    }
		    if (code < 0)
			return code;
		  mt:xrun = ((next.x).state).Q - xa;
		    if (psrc > stop) {
			--psrc;
			break;
		    }
		    run = psrc[-1];
		    }
		    ((next.x).state).Q += (((next.x).state).R >= ((next.x).step).dR ? (((next.x).state).R -= ((next.x).step).dR, ((next.x).step).dQ) : (((next.x).state).R += ((next.x).step).NdR, ((next.x).step).dQ + 1));
	    }
	if (*stop != 0 || !masked) {
	    int xi = ((int) ((xrun) >> (12)));
	    int wi, xei;
	    do {
		uint n_ = (endp - stop);
		((next.x).state).Q += ((next.x).step).dQ * (endp - stop);
		while (n_--)
		    if (((next.x).state).R >= ((next.x).step).dR)
			((next.x).state).R -= ((next.x).step).dR;
		    else
			((next.x).state).R += ((next.x).step).NdR, ((next.x).state).Q++;
	    } while (0);
	    wi = ((int) ((((next.x).state).Q) >> (12))) - xi;
	    if (wi <= 0) {
		if (wi == 0)
		    goto lmt;
		xi += wi, wi = -wi;
	    }
	    if ((xei = xi + wi) > xmax || xi < xmin) {
		if (xi < xmin)
		    wi -= xmin - xi, xi = xmin;
		if (xei > xmax)
		    wi -= xei - xmax;
		if (wi <= 0)
		    goto lmt;
	    }
	    {
		pdevc = &penum->clues[*stop].dev_color;
		if (!((pdevc)->type != (&gx_dc_procs_none))) {
		    if (penum->device_color)
			(*map_gray) (((frac) (((frac) (*stop) << (15 - (8))) + ((*stop) >> ((8) * 2 - 15)) - ((*stop) >> ((8) - 3)))), pdevc, pis, dev, gs_color_select_source);
		    else {
			switch (penum->map[0].decoding) {
			case sd_none:
			    cc.paint.values[0] = (*stop) * (1.0 / 255.0);
			    break;
			case sd_lookup:
			    cc.paint.values[0] = penum->map[0].decode_lookup[(*stop) >> 4];
			    break;
			case sd_compute:
			    cc.paint.values[0] = penum->map[0].decode_lookup[0] + (*stop) * penum->map[0].decode_factor;
			};
			(*remap_color) (&cc, pcs, pdevc, pis, dev, gs_color_select_source);
		    }
		} else if (!((pdevc)->type == (&gx_dc_procs_pure))) {
		    if (!tiles_fit) {
			code = (*(pdevc)->type->load) (pdevc, pis, dev, gs_color_select_source);
			if (code < 0)
			    return code;
		    }
		}
	    };
	    code = (*(pdevc)->type->fill_rectangle) (pdevc, xi, yt, wi, iht, dev, lop, ((void *) 0));
	  lmt:;
	}
    } return (code < 0 ? code : 1);
}
