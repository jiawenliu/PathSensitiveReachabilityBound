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
typedef struct ref_s ref;
typedef ushort ref_packed;
typedef enum { t__invalid, t_boolean, t_dictionary, t_file, t_array, t_mixedarray, t_shortarray, t_unused_array_, t_struct, t_astruct, t_fontID, t_integer, t_mark, t_name, t_null, t_operator, t_real, t_save, t_string, t_device, t_oparray, t_next_index } ref_type;
typedef struct attr_print_mask_s {
    ushort mask;
    ushort value;
    char print;
} attr_print_mask;
typedef struct dict_s dict;
typedef struct name_s name;
typedef struct stream_s stream;
typedef struct gx_device_s gx_device;
typedef struct obj_header_s obj_header_t;
typedef int (*op_proc_p) (ref *);
struct tas_s {
    ushort type_attrs;
    ushort rsize;
};
struct ref_s {
    struct tas_s tas;
    union v {
	long intval;
	ushort boolval;
	float realval;
	ulong saveid;
	byte *bytes;
	const byte *const_bytes;
	ref *refs;
	const ref *const_refs;
	name *pname;
	const name *const_pname;
	dict *pdict;
	const dict *const_pdict;
	const ref_packed *packed;
	op_proc_p opproc;
	struct stream_s *pfile;
	struct gx_device_s *pdevice;
	obj_header_t *pstruct;
    } value;
};
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
typedef struct {
    int (*available) (stream *, long *);
    int (*seek) (stream *, long);
    void (*reset) (stream *);
    int (*flush) (stream *);
    int (*close) (stream *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    int (*switch_mode) (stream *, bool);
} stream_procs;
struct stream_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    stream_cursor cursor;
    byte *cbuf;
    uint bsize;
    uint cbsize;
    short end_status;
    byte foreign;
    byte modes;
    gs_string cbuf_string;
    long position;
    stream_procs procs;
    stream *strm;
    int is_temp;
    int inline_temp;
    stream_state *state;
    ushort read_id;
    ushort write_id;
    stream *prev, *next;
    int save_count;
    FILE *file;
    uint file_modes;
    int (*save_close) (stream *);
};
int savailable(stream *, long *);
int sclose(stream *);
int sswitch(stream *, bool);
int spgetcc(stream *, bool);
int sgets(stream *, byte *, uint, uint *);
int sungetc(stream *, byte);
int spskip(stream *, long, long *);
int s_process_read_buf(stream *);
int spputc(stream *, byte);
int sputs(stream *, const byte *, uint, uint *);
int s_process_write_buf(stream *, bool);
long stell(stream *);
int spseek(stream *, long);
stream *s_alloc(gs_memory_t *, client_name_t);
stream_state *s_alloc_state(gs_memory_t *, gs_memory_type_ptr_t, client_name_t);
void sread_string(stream *, const byte *, uint), swrite_string(stream *, byte *, uint);
void sread_file(stream *, FILE *, byte *, uint), swrite_file(stream *, FILE *, byte *, uint), sappend_file(stream *, FILE *, byte *, uint);
void s_std_init(stream *, byte *, uint, const stream_procs *, int);
void s_disable(stream *);
int s_std_null(stream *);
void s_std_read_reset(stream *), s_std_write_reset(stream *);
int s_std_read_flush(stream *), s_std_write_flush(stream *), s_std_noavailable(stream *, long *), s_std_noseek(stream *, long), s_std_close(stream *), s_std_switch_mode(stream *, bool);
int s_filter_write_flush(stream *), s_filter_close(stream *);
extern const char *gs_error_names[];
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef ref *s_ptr;
typedef const ref *const_s_ptr;
typedef struct ref_stack_block_s {
    ref next;
    ref used;
} ref_stack_block;
typedef struct ref_stack_s ref_stack;
struct ref_stack_s {
    s_ptr p;
    s_ptr bot;
    s_ptr top;
    ref current;
    uint extension_size;
    uint extension_used;
    ref max_stack;
    uint requested;
    uint bot_guard;
    uint top_guard;
    uint block_size;
    uint body_size;
    ref guard_value;
    int underflow_error;
    int overflow_error;
    bool allow_expansion;
    gs_ref_memory_t *memory;
};
void ref_stack_init(ref_stack *, ref *, uint, uint, ref *, gs_ref_memory_t *);
int ref_stack_set_max_count(ref_stack *, long);
uint ref_stack_count(const ref_stack *);
ref *ref_stack_index(const ref_stack *, long);
uint ref_stack_counttomark(const ref_stack *);
int ref_stack_store(const ref_stack *, ref *, uint, uint, int, bool, client_name_t);
void ref_stack_pop(ref_stack *, uint);
int ref_stack_pop_block(ref_stack *);
int ref_stack_extend(ref_stack *, uint);
int ref_stack_push(ref_stack *, uint);
void ref_stack_cleanup(ref_stack *);
typedef s_ptr es_ptr;
typedef const_s_ptr const_es_ptr;
extern ref_stack e_stack;
extern ref *esfile;
void pop_estack(uint);
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
typedef union vm_spaces_s {
    gs_ref_memory_t *indexed[4];
    struct _ssn {
	gs_ref_memory_t *foreign;
	gs_ref_memory_t *system;
	gs_ref_memory_t *global;
	gs_ref_memory_t *local;
    } named;
} vm_spaces;
void gs_reclaim(vm_spaces * pspaces, bool global);
typedef enum { avm_foreign = (i_vm_foreign << 2), avm_system = (i_vm_system << 2), avm_global = (i_vm_global << 2), avm_local = (i_vm_local << 2), avm_max = avm_local } avm_space;
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
int gs_alloc_ref_array(gs_ref_memory_t * mem, ref * paref, uint attrs, uint num_refs, client_name_t cname);
int gs_resize_ref_array(gs_ref_memory_t * mem, ref * paref, uint new_num_refs, client_name_t cname);
void gs_free_ref_array(gs_ref_memory_t * mem, ref * paref, client_name_t cname);
int gs_alloc_string_ref(gs_ref_memory_t * mem, ref * psref, uint attrs, uint nbytes, client_name_t cname);
extern const gs_ptr_procs_t ptr_ref_procs;
typedef struct gs_dual_memory_s gs_dual_memory_t;
struct gs_dual_memory_s {
    gs_ref_memory_t *current;
    vm_spaces spaces;
    uint current_space;
    int save_level;
    int (*reclaim) (gs_dual_memory_t *, int);
    uint test_mask;
    uint new_mask;
};
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
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
typedef struct name_table_s name_table;
extern const uint name_max_string;
name_table *name_init(ulong, gs_memory_t *);
const name_table *the_name_table(void);
gs_memory_t *name_memory(void);
int name_ref(const byte * ptr, uint size, ref * pnref, int enterflag);
void name_string_ref(const ref * pnref, ref * psref);
int name_enter_string(const char *str, ref * pnref);
int name_from_string(const ref * psref, ref * pnref);
void name_invalidate_value_cache(const ref *);
uint name_index(const ref *);
name *name_index_ptr(uint nidx);
void name_index_ref(uint nidx, ref * pnref);
uint name_next_valid_index(uint);
bool name_mark_index(uint);
void *name_ref_sub_table(const ref *);
void *name_index_ptr_sub_table(uint, name *);
struct name_s {
    ushort next_index;
    unsigned foreign_string:1;
    unsigned mark:1;
    unsigned string_size:(14 - 0);
    const byte *string_bytes;
    ref *pvalue;
};
typedef struct name_sub_table_s {
    name names[(1 << (7 + (0 / 2)))];
} name_sub_table;
struct name_table_s {
    uint free;
    uint sub_next;
    uint sub_count;
    uint max_sub_count;
    gs_memory_t *memory;
    uint hash[(1024 << (0 / 2))];
    name_sub_table *sub_tables[(uint) ((0x10000 << 0) - 1) / (1 << (7 + (0 / 2))) + 1];
};
void name_unmark_all(void);
void name_trace_finish(gc_state_t *);
typedef struct alloc_save_s alloc_save_t;
void name_restore(alloc_save_t *);
void initial_enter_name(const char *, const ref *);
void initial_remove_name(const char *);
extern const int gs_interp_max_op_num_args;
extern const int gs_interp_num_special_ops;
void gs_interp_make_oper(ref * opref, op_proc_p, int index);
int gs_errorname(int, ref *);
int gs_errorinfo_put_string(const char *);
void gs_interp_init(void);
void gs_interp_reset(void);
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
typedef s_ptr os_ptr;
typedef const_s_ptr const_os_ptr;
extern ref_stack o_stack;
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
extern const stream_template s_BCPE_template;
extern const stream_template s_TBCPE_template;
typedef struct stream_BCPD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int (*signal_interrupt) (stream_state *);
    int (*request_status) (stream_state *);
    bool escaped;
    int matched;
    int copy_count;
    const byte *copy_ptr;
} stream_BCPD_state;
extern const stream_template s_BCPD_template;
extern const stream_template s_TBCPD_template;
typedef struct stream_exE_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    ushort cstate;
} stream_exE_state;
extern const stream_template s_exE_template;
typedef struct stream_PFBD_state_s stream_PFBD_state;
typedef struct stream_exD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    ushort cstate;
    stream_PFBD_state *pfb_state;
    int binary;
    int lenIV;
    int odd;
    long record_left;
    int skip;
} stream_exD_state;
extern const stream_template s_exD_template;
extern const stream_template s_Null_template;
struct stream_PFBD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int binary_to_hex;
    int record_type;
    ulong record_left;
};
extern const stream_template s_PFBD_template;
typedef struct stream_SFD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    long count;
    gs_const_string eod;
    uint match;
    uint copy_count;
    uint copy_ptr;
} stream_SFD_state;
extern const stream_template s_SFD_template;
extern const stream_template s_A85E_template;
typedef struct stream_A85D_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int odd;
    ulong word;
} stream_A85D_state;
extern const stream_template s_A85D_template;
extern const stream_template s_AXE_template;
typedef struct stream_AXD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int odd;
} stream_AXD_state;
extern const stream_template s_AXD_template;
typedef struct stream_PSSD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool from_string;
    int depth;
} stream_PSSD_state;
extern const stream_template s_PSSD_template;
extern const stream_template s_PSSE_template;
typedef struct scanner_state_s scanner_state;
typedef struct dynamic_area_s {
    gs_string str;
    byte *base;
    byte *next;
    byte *limit;
    bool is_dynamic;
    byte buf[(255 + 2)];
    gs_memory_t *memory;
} dynamic_area;
typedef dynamic_area *da_ptr;
typedef struct scan_binary_state_s {
    int num_format;
    int (*cont) (stream *, ref *, scanner_state *);
    ref bin_array;
    uint index;
    uint max_array_index;
    uint min_string_index;
    uint top_size;
    uint size;
} scan_binary_state;
struct scanner_state_s {
    uint s_pstack;
    uint s_pdepth;
    bool s_from_string;
    enum { scanning_none, scanning_binary, scanning_comment, scanning_name, scanning_string } s_scan_type;
    dynamic_area s_da;
    union sss_ {
	scan_binary_state binary;
	struct sns_ {
	    int s_name_type;
	    bool s_try_number;
	} s_name;
	stream_state st;
	stream_A85D_state a85d;
	stream_AXD_state axd;
	stream_PSSD_state pssd;
    } s_ss;
};
extern const gs_memory_struct_type_t st_scanner_state;
int scan_token(stream * s, ref * pref, scanner_state * pstate);
int scan_string_token(ref * pstr, ref * pref);
int scan_handle_refill(const ref * fop, scanner_state * pstate, bool save, bool push_file, int (*cont) (os_ptr));
extern int (*scan_dsc_proc) (const byte *, uint);
extern int (*scan_comment_proc) (const byte *, uint);
struct dict_s {
    ref values;
    ref keys;
    ref count;
    ref maxlength;
};
extern const uint dict_max_size;
extern bool dict_auto_expand;
int dict_create(uint maxlength, ref * pdref);
int dict_find(const ref * pdref, const ref * key, ref ** ppvalue);
int dict_find_string(const ref * pdref, const char *kstr, ref ** ppvalue);
int dict_put(ref * pdref, const ref * key, const ref * pvalue);
int dict_put_string(ref * pdref, const char *kstr, const ref * pvalue);
int dict_undef(ref * pdref, const ref * key);
uint dict_length(const ref * pdref);
uint dict_maxlength(const ref * pdref);
uint dict_max_index(const ref * pdref);
int dict_copy_entries(const ref * dfrom, ref * dto, bool new_only);
int dict_resize(ref * pdref, uint newmaxlength);
int dict_grow(ref * pdref);
int dict_unpack(ref * pdref);
int dict_first(const ref * pdref);
int dict_next(const ref * pdref, int index, ref * eltp);
int dict_value_index(const ref * pdref, const ref * pvalue);
int dict_index_entry(const ref * pdref, int index, ref * eltp);
uint dict_round_size_small(uint rsize);
uint dict_round_size_large(uint rsize);
extern void alloc_save_init(gs_dual_memory_t *);
alloc_save_t *alloc_find_save(const gs_dual_memory_t *, ulong);
ulong alloc_save_state(gs_dual_memory_t *, void *);
void *alloc_save_client_data(const alloc_save_t *);
int alloc_save_level(const gs_dual_memory_t *);
alloc_save_t *alloc_save_current(const gs_dual_memory_t *);
bool alloc_is_since_save(const void *, const alloc_save_t *);
bool alloc_name_is_since_save(const ref *, const alloc_save_t *);
bool alloc_name_index_is_since_save(uint, const alloc_save_t *);
bool alloc_any_names_since_save(const alloc_save_t *);
bool alloc_restore_state_step(alloc_save_t *);
void alloc_forget_save(alloc_save_t *);
void alloc_restore_all(gs_dual_memory_t *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
typedef struct gs_matrix_s gs_matrix;
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
extern ref_stack d_stack;
extern ref ref_systemdict;
typedef s_ptr ds_ptr;
typedef const_s_ptr const_ds_ptr;
bool dict_is_permanent_on_dstack(const ref *);
extern uint min_dstack_size;
extern int dsspace;
extern const ref_packed *dtop_keys;
extern uint dtop_npairs;
extern ref *dtop_values;
void dict_set_top(void);
ref *dict_find_name_by_index(uint nidx);
int zget_stdin(stream **);
int zget_stdout(stream **);
int zget_stderr(stream **);
extern bool gs_stdin_is_interactive;
extern stream *invalid_file_entry;
int file_switch_to_read(const ref *);
int file_switch_to_write(const ref *);
extern const uint file_default_buffer_size;
FILE *lib_fopen(const char *);
int lib_file_open(const char *, uint, byte *, uint, uint *, ref *);
int file_read_string(const byte *, uint, ref *);
int filter_open(const char *, uint, ref *, const stream_procs *, const stream_template *, const stream_state *);
void make_stream_file(ref *, stream *, const char *);
int file_close_finish(stream *);
int file_close_disable(stream *);
int file_close_file(stream *);
int file_close(ref *);
stream *file_alloc_stream(gs_memory_t *, client_name_t);
void file_save(void);
int zreadline_from(stream *, byte *, uint, uint *, bool *);
typedef struct {
    const char *oname;
    op_proc_p proc;
} op_def;
typedef const op_def *op_def_ptr;
ushort op_find_index(const ref *);
extern const op_def **op_def_table;
extern uint op_def_count;
typedef struct op_array_table_s {
    ref table;
    ushort *nx_table;
    uint count;
    uint base_index;
    uint attrs;
    ref *root_p;
} op_array_table;
extern op_array_table op_array_table_global, op_array_table_local;
void op_index_ref(uint, ref *);
int zadd(os_ptr);
int zdef(os_ptr);
int zdup(os_ptr);
int zexch(os_ptr);
int zif(os_ptr);
int zifelse(os_ptr);
int zindex(os_ptr);
int zpop(os_ptr);
int zroll(os_ptr);
int zsub(os_ptr);
int zflush(os_ptr);
int zflushpage(os_ptr);
int zsave(os_ptr);
int zrestore(os_ptr);
int zgsave(os_ptr);
int zgrestore(os_ptr);
int zcopy_gstate(os_ptr);
int zcurrentgstate(os_ptr);
int zgrestoreall(os_ptr);
int zgstate(os_ptr);
int zreadonly(os_ptr);
int zsetdevice(os_ptr);
int zsetgstate(os_ptr);
int zimage(os_ptr);
int zimagemask(os_ptr);
int zwhere(os_ptr);
int zarray(os_ptr);
int zdict(os_ptr);
int zpackedarray(os_ptr);
int zstring(os_ptr);
int zclosepath(os_ptr);
int zcurveto(os_ptr);
int zlineto(os_ptr);
int zmoveto(os_ptr);
int zrcurveto(os_ptr);
int zrlineto(os_ptr);
int zrmoveto(os_ptr);
int zcvx(os_ptr);
int zexec(os_ptr);
int zfor(os_ptr);
int zbegin(os_ptr);
int zcleartomark(os_ptr);
int zend(os_ptr);
int zclosefile(os_ptr);
int zsetfont(os_ptr);
int zcurrentdevice(os_ptr);
int ztoken(os_ptr);
int ztokenexec(os_ptr);
int zwrite(os_ptr);
int check_proc_failed(const ref *);
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
int check_type_failed(const ref *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
extern int zop_add(os_ptr);
extern int zop_def(os_ptr);
extern int zop_sub(os_ptr);
extern int ztokenexec_continue(os_ptr);
static int no_reschedule(void)
{
    return ((-27));
}

int (*gs_interp_reschedule_proc) (void) = no_reschedule;
int no_time_slice_proc(void)
{
    return 0;
}

int (*gs_interp_time_slice_proc) (void) = no_time_slice_proc;
int gs_interp_time_slice_ticks = 0x7fff;
static int estack_underflow(os_ptr);
static int interp(ref *, ref *);
static int interp_exit(os_ptr);
static void set_gc_signal(int *, int);
static int copy_stack(const ref_stack *, ref *);
static int oparray_pop(os_ptr);
static int oparray_cleanup(os_ptr);
const int gs_interp_max_op_num_args = 16;
uint min_dstack_size;
ref ref_systemdict;
ref ref_language_level;
ref_stack o_stack;
ref_stack e_stack;
ref_stack d_stack;
extern const gs_memory_struct_type_t st_ref_stack;
ref ref_static_stacks;
ref ref_ref_stacks[3];
ref *esfile;
static const op_proc_p special_ops[] = { zadd, zdef, zdup, zexch, zif, zifelse, zindex, zpop, zroll, zsub };
typedef enum { tx_op_add = t_next_index, tx_op_def, tx_op_dup, tx_op_exch, tx_op_if, tx_op_ifelse, tx_op_index, tx_op_pop, tx_op_roll, tx_op_sub, tx_next_op } special_op_types;
const int gs_interp_num_special_ops = ((int) tx_next_op - t_next_index);
const int tx_next_index = tx_next_op;
static ref null_proc;
void gs_interp_init(void)
{
    gs_ref_memory_t *smem = (gs_imemory.spaces.named.system);
    ref stk;
    ref euop;
    ref *next_body;
    uint refs_size_ostack, refs_size_estack, refs_size_dstack;
    if ((('+') >= 'a' && ('+') <= 'z' ? gs_debug['+'] | gs_debug[('+') ^ 32] : gs_debug['+']))
	refs_size_ostack = ((sizeof(ref_stack_block) / sizeof(ref)) + 10 + (16) + 10), refs_size_estack = ((sizeof(ref_stack_block) / sizeof(ref)) + 1 + (250) + 10), refs_size_dstack = ((sizeof(ref_stack_block) / sizeof(ref)) + (3));
    else
	refs_size_ostack = ((sizeof(ref_stack_block) / sizeof(ref)) + 10 + (800) + 10), refs_size_estack = ((sizeof(ref_stack_block) / sizeof(ref)) + 1 + (250) + 10), refs_size_dstack = ((sizeof(ref_stack_block) / sizeof(ref)) + (20));
    ((&ref_static_stacks)->value.refs = ((ref *) ((void *) 0)), ((&ref_static_stacks)->tas.type_attrs = ((t_array) << 8) + (0)), ((&ref_static_stacks)->tas.rsize = (0))); {
	ref sdata;
	gs_alloc_ref_array(smem, &sdata, 0, refs_size_ostack + refs_size_estack + refs_size_dstack, "interp_init");
	next_body = sdata.value.refs;
    } ((&stk)->value.refs = (next_body), ((&stk)->tas.type_attrs = ((t_array) << 8) + (avm_system)), ((&stk)->tas.rsize = (refs_size_ostack))), next_body += (refs_size_ostack), ((&ref_ref_stacks[0])->value.pstruct = ((obj_header_t *) ((ref_stack *) (*((gs_memory_t *) smem)->procs.alloc_struct) ((gs_memory_t *) smem, &st_ref_stack, "alloc_init_stack"))), ((&ref_ref_stacks[0])->tas.type_attrs = ((t_struct) << 8) + (avm_system)));
    ref_stack_init(&o_stack, &stk, 10, 10, ((void *) 0), smem);
    o_stack.underflow_error = (-17);
    o_stack.overflow_error = (-16);
    ref_stack_set_max_count(&o_stack, 800);
    ((&stk)->value.refs = (next_body), ((&stk)->tas.type_attrs = ((t_array) << 8) + (avm_system)), ((&stk)->tas.rsize = (refs_size_estack))), next_body += (refs_size_estack), ((&ref_ref_stacks[1])->value.pstruct = ((obj_header_t *) ((ref_stack *) (*((gs_memory_t *) smem)->procs.alloc_struct) ((gs_memory_t *) smem, &st_ref_stack, "alloc_init_stack"))), ((&ref_ref_stacks[1])->tas.type_attrs = ((t_struct) << 8) + (avm_system)));
    ((&euop)->value.opproc = (estack_underflow), ((&euop)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((&euop)->tas.rsize = (0)));
    ref_stack_init(&e_stack, &stk, 1, 10, &euop, smem);
    e_stack.underflow_error = (-104);
    e_stack.overflow_error = (-5);
    e_stack.allow_expansion = ((bool) 0);
    (esfile = 0);
    ref_stack_set_max_count(&e_stack, 250);
    ((&stk)->value.refs = (next_body), ((&stk)->tas.type_attrs = ((t_array) << 8) + (avm_system)), ((&stk)->tas.rsize = (refs_size_dstack))), next_body += (refs_size_dstack), ((&ref_ref_stacks[2])->value.pstruct = ((obj_header_t *) ((ref_stack *) (*((gs_memory_t *) smem)->procs.alloc_struct) ((gs_memory_t *) smem, &st_ref_stack, "alloc_init_stack"))), ((&ref_ref_stacks[2])->tas.type_attrs = ((t_struct) << 8) + (avm_system)));
    ref_stack_init(&d_stack, &stk, 0, 0, ((void *) 0), smem);
    d_stack.underflow_error = (-4);
    d_stack.overflow_error = (-3);
    ref_stack_set_max_count(&d_stack, 20);
} void gs_interp_reset(void)
{
    ref_stack_pop(&o_stack, ref_stack_count(&o_stack));
    ref_stack_pop(&e_stack, ref_stack_count(&e_stack));
    (e_stack.p)++;
    (((e_stack.p))->value.opproc = (interp_exit), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0)));
    ref_stack_pop(&d_stack, ref_stack_count(&d_stack) - (min_dstack_size));
    dict_set_top();
} static int estack_underflow(os_ptr op)
{
    return (-104);
}

void gs_interp_make_oper(ref * opref, op_proc_p proc, int idx)
{
    register int i = ((int) tx_next_op - t_next_index);
    while (--i >= 0 && proc != special_ops[i]);
    if (i >= 0)
	((opref)->value.opproc = (proc), ((opref)->tas.type_attrs = ((t_next_index + i) << 8) + (0x80)), ((opref)->tas.rsize = (i + 1)));
    else
	((opref)->value.opproc = (proc), ((opref)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((opref)->tas.rsize = (idx)));
}

static int gs_call_interp(ref *, int, int *, ref *);
int gs_interpret(ref * pref, int user_errors, int *pexit_code, ref * perror_object)
{
    gs_gc_root_t error_root;
    int code;
    (*(((gs_memory_t *) (gs_imemory.spaces.named.system)))->procs.register_root) (((gs_memory_t *) (gs_imemory.spaces.named.system)), &error_root, (&ptr_ref_procs), (void **) &perror_object, "gs_interpret");
    (((perror_object)->tas.type_attrs = ((t_null) << 8) + (0)));
    code = gs_call_interp(pref, user_errors, pexit_code, perror_object);
    (*(((gs_memory_t *) (gs_imemory.spaces.named.system)))->procs.unregister_root) (((gs_memory_t *) (gs_imemory.spaces.named.system)), &error_root, "gs_interpret");
    set_gc_signal(((void *) 0), 0);
    return code;
}

static int gs_call_interp(ref * pref, int user_errors, int *pexit_code, ref * perror_object)
{
    ref *epref = pref;
    ref doref;
    ref *perrordict;
    ref error_name;
    int code, ccode;
    ref saref;
    int gc_signal = 0;
    *pexit_code = 0;
    ialloc_reset_requested((&gs_imemory));
  again:o_stack.requested = e_stack.requested = d_stack.requested = 0;
    while (gc_signal) {
	gc_signal = 0;
	code = (*(&gs_imemory)->reclaim) ((&gs_imemory), -1);
	if (code < 0)
	    return code;
    }
    code = interp(epref, perror_object);
    set_gc_signal(&gc_signal, 1);
    if ((e_stack.p) < (e_stack.bot))
	(e_stack.p) = (e_stack.bot);
    switch (code) {
    case (-100):
	*pexit_code = 255;
	return code;
    case (-101):
	*perror_object = (o_stack.p)[-1];
	*pexit_code = code = (o_stack.p)->value.intval;
	(o_stack.p) -= 2;
	return (code == 0 ? (-101) : code < 0 && code > -100 ? code : (-100));
    case (-102):
	return 0;
    case (-104):
	ref_stack_pop_block(&e_stack);
	doref = *perror_object;
	epref = &doref;
	goto again;
    case (-105):
	code = (*(&gs_imemory)->reclaim) ((&gs_imemory), ((o_stack.p)->value.intval == 2 ? avm_global : avm_local));
	((&doref)->value.opproc = (zpop), ((&doref)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((&doref)->tas.rsize = (0)));
	epref = &doref;
	goto again;
    case (-106):
	return code;
    }
    if ((o_stack.p) < (o_stack.bot) - 1)
	(o_stack.p) = (o_stack.bot) - 1;
    switch (code) {
    case (-3):
	if (ref_stack_extend(&d_stack, d_stack.requested) >= 0) {
	    dict_set_top();
	    doref = *perror_object;
	    epref = &doref;
	    goto again;
	}
	if ((o_stack.p) >= (o_stack.top)) {
	    if ((ccode = ref_stack_extend(&o_stack, 1)) < 0)
		return ccode;
	}
	ccode = copy_stack(&d_stack, &saref);
	if (ccode < 0)
	    return ccode;
	ref_stack_pop(&d_stack, ref_stack_count(&d_stack) - (min_dstack_size));
	dict_set_top();
	*++(o_stack.p) = saref;
	break;
    case (-4):
	if (ref_stack_pop_block(&d_stack) >= 0) {
	    dict_set_top();
	    doref = *perror_object;
	    epref = &doref;
	    goto again;
	}
	break;
    case (-5):
	if ((o_stack.p) >= (o_stack.top)) {
	    if ((ccode = ref_stack_extend(&o_stack, 1)) < 0)
		return ccode;
	}
	ccode = copy_stack(&e_stack, &saref);
	if (ccode < 0)
	    return ccode; {
	    uint count = ref_stack_count(&e_stack);
	    long limit = (uint) ((&e_stack)->max_stack.value.intval) - 10;
	    if (count > limit)
		pop_estack(count - limit);
	    }
	    *++(o_stack.p) = saref;
	    break;
    case (-16):
	    if (ref_stack_extend(&o_stack, o_stack.requested) >= 0) {
		doref = *perror_object;
		if ((((&doref)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) {
		    *++(o_stack.p) = doref;
		    ((&doref)->value.const_refs = ((const ref *) ((void *) 0)), ((&doref)->tas.type_attrs = ((t_array) << 8) + (0x80 + (0x20 + 0x40))), ((&doref)->tas.rsize = (0)));
		}
		epref = &doref;
		goto again;
	    }
	ccode = copy_stack(&o_stack, &saref);
	    if (ccode < 0)
		return ccode;
	ref_stack_pop(&o_stack, ref_stack_count(&o_stack));
	*++(o_stack.p) = saref;
	break;
    case (-17):
	if (ref_stack_pop_block(&o_stack) >= 0) {
	    doref = *perror_object;
	    epref = &doref;
	    goto again;
	}
	break;
    }
    if (user_errors < 0)
	return code;
    if (gs_errorname(code, &error_name) < 0)
	return code;
    if (dict_find_string((&ref_systemdict), "errordict", &perrordict) <= 0 || dict_find(perrordict, &error_name, &epref) <= 0)
	return code;
    doref = *epref;
    epref = &doref;
    if (!((code) == (-6) || (code) == (-19)))
	*++(o_stack.p) = *perror_object;
    goto again;
}

static int interp_exit(os_ptr op)
{
    return (-102);
}

static void set_gc_signal(int *psignal, int value)
{
    gs_memory_gc_status_t stat;
    int i;
    for (i = 0; i < (sizeof((&gs_imemory)->spaces.indexed) / sizeof(((&gs_imemory)->spaces.indexed)[0])); i++) {
	gs_ref_memory_t *mem = (&gs_imemory)->spaces.indexed[i];
	if (mem != 0) {
	    gs_memory_gc_status(mem, &stat);
	    stat.psignal = psignal;
	    stat.signal_value = value;
	    gs_memory_set_gc_status(mem, &stat);
	}
    }
}

static int copy_stack(const ref_stack * pstack, ref * arr)
{
    uint size = ref_stack_count(pstack);
    uint save_space = (((&gs_imemory))->current_space);
    int code;
    ialloc_set_space((&gs_imemory), avm_local);
    code = gs_alloc_ref_array((gs_imemory.current), arr, (0x10 + 0x20 + 0x40), size, "copy_stack");
    if (code >= 0)
	code = ref_stack_store(pstack, arr, size, 0, 1, ((bool) 1), "copy_stack");
    ialloc_set_space((&gs_imemory), save_space);
    return code;
}

int gs_errorname(int code, ref * perror_name)
{
    ref *perrordict, *pErrorNames;
    if (dict_find_string((&ref_systemdict), "errordict", &perrordict) <= 0 || dict_find_string((&ref_systemdict), "ErrorNames", &pErrorNames) <= 0)
	return ((-21));
    return array_get(pErrorNames, (long) (-code - 1), perror_name);
} int gs_errorinfo_put_string(const char *str)
{
    ref rstr;
    ref *pderror;
    int code = string_to_ref(str, &rstr, (gs_imemory.current), "gs_errorinfo_put_string");
    if (code < 0)
	return code;
    if (dict_find_string((&ref_systemdict), "$error", &pderror) <= 0 || !((((const byte *) &((pderror)->tas.type_attrs))[1]) == (t_dictionary)) || dict_put_string(pderror, "errorinfo", &rstr) < 0)
	return ((-100));
    return 0;
}

static int interp(ref * pref, ref * perror_object)
{
    register const ref *iref = pref;
    register int icount = 0;
    register os_ptr iosp = (o_stack.p);
    register es_ptr iesp = (e_stack.p);
    int code;
    ref token;
    register const ref *pvalue;
    os_ptr whichp;
    struct interp_error_s {
	int code;
	int line;
	const ref *obj;
	ref full;
    } ierror;
    const name_table *int_nt = the_name_table();
    int ticks_left = gs_interp_time_slice_ticks;
    set_gc_signal(&ticks_left, -100);
    (esfile = 0);
    if (iesp >= (e_stack.top)) { {
	    ierror.code = (-5);
	    ierror.line = 682;
    };
    ierror.obj = pref;
    goto rwe;
    };
    ++iesp;
    ((iesp)->value = (pref)->value, (iesp)->tas = (pref)->tas);
    goto bot;
  top:switch (((*(const ushort *) &(iref)->tas.type_attrs) >> (8 - 2))) {
    case ((((t__invalid) << 8) + (0)) >> (8 - 2)):
    case ((((t__invalid) << 8) + (0x80)) >> (8 - 2)):{ {
		ierror.code = (-100);
		ierror.line = 752;
	};
	goto rwei;
	};
    case ((((t_array) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_dictionary) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_file) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_string) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_mixedarray) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_shortarray) << 8) + (0x80)) >> (8 - 2)):{ {
		ierror.code = (-7);
		ierror.line = 758;
	};
	goto rwei;
	};
    case ((((t_array) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_array) << 8) + (0)) >> (8 - 2)):
    case ((((t_boolean) << 8) + (0)) >> (8 - 2)):
    case ((((t_boolean) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_dictionary) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_dictionary) << 8) + (0)) >> (8 - 2)):
    case ((((t_file) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_file) << 8) + (0)) >> (8 - 2)):
    case ((((t_fontID) << 8) + (0)) >> (8 - 2)):
    case ((((t_fontID) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_integer) << 8) + (0)) >> (8 - 2)):
    case ((((t_integer) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_mark) << 8) + (0)) >> (8 - 2)):
    case ((((t_mark) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_name) << 8) + (0)) >> (8 - 2)):
    case ((((t_null) << 8) + (0)) >> (8 - 2)):
    case ((((t_oparray) << 8) + (0)) >> (8 - 2)):
    case ((((t_operator) << 8) + (0)) >> (8 - 2)):
    case ((((t_real) << 8) + (0)) >> (8 - 2)):
    case ((((t_real) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_save) << 8) + (0)) >> (8 - 2)):
    case ((((t_save) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_string) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_string) << 8) + (0)) >> (8 - 2)):
    case ((((t_mixedarray) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_mixedarray) << 8) + (0)) >> (8 - 2)):
    case ((((t_shortarray) << 8) + (0x40)) >> (8 - 2)):
    case ((((t_shortarray) << 8) + (0)) >> (8 - 2)):
    case ((((t_device) << 8) + (0)) >> (8 - 2)):
    case ((((t_device) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_struct) << 8) + (0)) >> (8 - 2)):
    case ((((t_struct) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_astruct) << 8) + (0)) >> (8 - 2)):
    case ((((t_astruct) << 8) + (0x80)) >> (8 - 2)):
    case ((((t_array) << 8) + (0x40 + 0x80)) >> (8 - 2)):
    case ((((t_mixedarray) << 8) + (0x40 + 0x80)) >> (8 - 2)):
    case ((((t_shortarray) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	break;
    case ((((tx_op_add) << 8) + (0x80)) >> (8 - 2)):
      x_add:if ((code = zop_add(iosp)) < 0) {
	    ierror.line = 802;
	    goto rweci;
	};
	iosp--;
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_def) << 8) + (0x80)) >> (8 - 2)):
      x_def:if ((code = zop_def(iosp)) < 0) {
	    ierror.line = 807;
	    goto rweci;
	};
	iosp -= 2;
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_dup) << 8) + (0x80)) >> (8 - 2)):
      x_dup:if (iosp < (o_stack.bot)) { {
		ierror.code = (-17);
		ierror.line = 812;
	};
	goto rwei;
	};
	if (iosp >= (o_stack.top)) {
	    o_stack.requested = 1; { {
		    ierror.code = (-16);
		    ierror.line = 814;
	    };
	    goto rwei;
	    };
	};
	iosp++;
	((iosp)->value = (iosp - 1)->value, (iosp)->tas = (iosp - 1)->tas);
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_exch) << 8) + (0x80)) >> (8 - 2)):
      x_exch:if (iosp <= (o_stack.bot)) { {
		ierror.code = (-17);
		ierror.line = 820;
	};
	goto rwei;
	};
	((&token)->value = (iosp)->value, (&token)->tas = (iosp)->tas);
	((iosp)->value = (iosp - 1)->value, (iosp)->tas = (iosp - 1)->tas);
	((iosp - 1)->value = (&token)->value, (iosp - 1)->tas = (&token)->tas);
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_if) << 8) + (0x80)) >> (8 - 2)):
      x_if:if (!((((const byte *) &((iosp - 1)->tas.type_attrs))[1]) == (t_boolean))) { {
		ierror.code = (iosp <= (o_stack.bot) ? (-17) : (-20));
		ierror.line = 828;
	};
	goto rwei;
	};
	if (!(((iosp)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) { {
		ierror.code = check_proc_failed(iosp);
		ierror.line = 830;
	};
	goto rwei;
	};
	if (!iosp[-1].value.boolval) {
	    iosp -= 2;
	    if (--icount <= 0) {
		if (icount < 0)
		    goto up;
		iesp--;
	    }
	    iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	    goto top;
	}
	if (iesp >= (e_stack.top)) { {
		ierror.code = (-5);
		ierror.line = 836;
	};
	goto rwei;
	};
	(icount > 0 ? (iesp->value.const_refs = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
	whichp = iosp;
	iosp -= 2;
	goto ifup;
    case ((((tx_op_ifelse) << 8) + (0x80)) >> (8 - 2)):
      x_ifelse:if (!((((const byte *) &((iosp - 2)->tas.type_attrs))[1]) == (t_boolean))) { {
		ierror.code = (iosp < (o_stack.bot) + 2 ? (-17) : (-20));
		ierror.line = 844;
	};
	goto rwei;
	};
	if (!(((iosp - 1)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) { {
		ierror.code = check_proc_failed(iosp - 1);
		ierror.line = 846;
	};
	goto rwei;
	};
	if (!(((iosp)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) { {
		ierror.code = check_proc_failed(iosp);
		ierror.line = 848;
	};
	goto rwei;
	};
	if (iesp >= (e_stack.top)) { {
		ierror.code = (-5);
		ierror.line = 850;
	};
	goto rwei;
	};
	(icount > 0 ? (iesp->value.const_refs = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
	whichp = (iosp[-2].value.boolval ? iosp - 1 : iosp);
	iosp -= 3;
      ifup:if ((icount = ((whichp)->tas.rsize) - 1) <= 0) {
	    if (icount < 0)
		goto up;
	    iref = whichp->value.refs;
	    if (--ticks_left > 0)
		goto top;
	}
	++iesp;
	iesp->tas = whichp->tas;
	iref = iesp->value.refs = whichp->value.refs;
	if (--ticks_left > 0)
	    goto top;
	goto slice;
    case ((((tx_op_index) << 8) + (0x80)) >> (8 - 2)):
      x_index:(o_stack.p) = iosp;
	if ((code = zindex(iosp)) < 0) {
	    ierror.line = 871;
	    goto rweci;
	};
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_pop) << 8) + (0x80)) >> (8 - 2)):
      x_pop:if (iosp < (o_stack.bot)) { {
		ierror.code = (-17);
		ierror.line = 875;
	};
	goto rwei;
	};
	iosp--;
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_roll) << 8) + (0x80)) >> (8 - 2)):
      x_roll:(o_stack.p) = iosp;
	if ((code = zroll(iosp)) < 0) {
	    ierror.line = 881;
	    goto rweci;
	};
	iosp -= 2;
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((tx_op_sub) << 8) + (0x80)) >> (8 - 2)):
      x_sub:if ((code = zop_sub(iosp)) < 0) {
	    ierror.line = 886;
	    goto rweci;
	};
	iosp--;
	if (--icount <= 0) {
	    if (icount < 0)
		goto up;
	    iesp--;
	}
	iref = ((*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)) ? (const ref *) ((const ushort *) (iref) + 1) : (iref) + 1);
	goto top;
    case ((((t_null) << 8) + (0x80)) >> (8 - 2)):
	goto bot;
    case ((((t_oparray) << 8) + (0x80)) >> (8 - 2)):
	pvalue = (const ref *) iref->value.const_refs;
      opst:(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
      oppr:if (iesp >= (e_stack.top) - 3) { {
		ierror.code = (-5);
		ierror.line = 899;
	};
	goto rwei;
	};
	iesp += 4;
	(o_stack.p) = iosp;
	((iesp - 3)->value.opproc = (oparray_cleanup), ((iesp - 3)->tas.type_attrs = ((t_null) << 8) + (0x80)), ((iesp - 3)->tas.rsize = (0)));
	((iesp - 2)->value.intval = (((&o_stack)->p + 1 - (&o_stack)->bot + (&o_stack)->extension_used)), ((iesp - 2)->tas.type_attrs = ((t_integer) << 8) + (0)));
	((iesp - 1)->value.intval = (((&d_stack)->p + 1 - (&d_stack)->bot + (&d_stack)->extension_used)), ((iesp - 1)->tas.type_attrs = ((t_integer) << 8) + (0)));
	((iesp)->value.opproc = (oparray_pop), ((iesp)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((iesp)->tas.rsize = (0)));
	goto pr;
      prst:(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
      pr:if ((icount = ((pvalue)->tas.rsize) - 1) <= 0) {
	    if (icount < 0)
		goto up;
	    iref = pvalue->value.refs;
	    if (--ticks_left > 0)
		goto top;
	}
	if (iesp >= (e_stack.top)) { {
		ierror.code = (-5);
		ierror.line = 917;
	};
	goto rwei;
	};
	++iesp;
	iesp->tas = pvalue->tas;
	iref = iesp->value.refs = pvalue->value.refs;
	if (--ticks_left > 0)
	    goto top;
	goto slice;
    case ((((t_operator) << 8) + (0x80)) >> (8 - 2)):
	if (--ticks_left <= 0) {
	}
	(e_stack.p) = iesp;
	(o_stack.p) = iosp;
	switch (code = ((*(((iref)->value.opproc))) (iosp))) {
	case 0:
	case 1:
	    iosp = (o_stack.p);
	    if (--icount > 0) {
		iref++;
		goto top;
	    } else
		goto out;
	case 5:
	    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
	  opush:iosp = (o_stack.p);
	    iesp = (e_stack.p);
	    if (--ticks_left > 0)
		goto up;
	    goto slice;
	case 14:
	  opop:iosp = (o_stack.p);
	    if ((e_stack.p) == iesp)
		goto bot;
	    iesp = (e_stack.p);
	    goto up;
	case 22:
	    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
	    goto res;
	case (-103):
	    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
	  oeinsert:((iesp + 1)->value = (iref)->value, (iesp + 1)->tas = (iref)->tas);
	    iesp = (e_stack.p);
	    goto up;
	}
	iosp = (o_stack.p);
	iesp = (e_stack.p); {
	    ierror.line = 977;
	    goto rweci;
	};
    case ((((t_name) << 8) + (0x80)) >> (8 - 2)):
	pvalue = iref->value.pname->pvalue;
	if (!((unsigned long) (pvalue) > 1)) {
	    uint nidx = ((iref)->tas.rsize);
	    uint htemp;
	    if ((pvalue = (dtop_keys[htemp = (((nidx)) & ((dtop_npairs) - 1)) + 1] == ((ref_packed) (pt_literal_name) << 13) + (nidx) ? dtop_values + htemp : dict_find_name_by_index(nidx))) == 0) { {
		    ierror.code = (-21);
		    ierror.line = 984;
	    };
	    goto rwei;
	    };
	}
	switch (((*(const ushort *) &(pvalue)->tas.type_attrs) >> (8 - 2))) {
	case ((((t__invalid) << 8) + (0)) >> (8 - 2)):
	case ((((t__invalid) << 8) + (0x80)) >> (8 - 2)):{ {
		    ierror.code = (-100);
		    ierror.line = 991;
	    };
	    goto rwei;
	    };
	case ((((t_array) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_dictionary) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_file) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_string) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_mixedarray) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_shortarray) << 8) + (0x80)) >> (8 - 2)):{ {
		    ierror.code = (-7);
		    ierror.line = 993;
	    };
	    goto rwei;
	    };
	case ((((t_array) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_array) << 8) + (0)) >> (8 - 2)):
	case ((((t_boolean) << 8) + (0)) >> (8 - 2)):
	case ((((t_boolean) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_dictionary) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_dictionary) << 8) + (0)) >> (8 - 2)):
	case ((((t_file) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_file) << 8) + (0)) >> (8 - 2)):
	case ((((t_fontID) << 8) + (0)) >> (8 - 2)):
	case ((((t_fontID) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_integer) << 8) + (0)) >> (8 - 2)):
	case ((((t_integer) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_mark) << 8) + (0)) >> (8 - 2)):
	case ((((t_mark) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_name) << 8) + (0)) >> (8 - 2)):
	case ((((t_null) << 8) + (0)) >> (8 - 2)):
	case ((((t_oparray) << 8) + (0)) >> (8 - 2)):
	case ((((t_operator) << 8) + (0)) >> (8 - 2)):
	case ((((t_real) << 8) + (0)) >> (8 - 2)):
	case ((((t_real) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_save) << 8) + (0)) >> (8 - 2)):
	case ((((t_save) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_string) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_string) << 8) + (0)) >> (8 - 2)):
	case ((((t_mixedarray) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_mixedarray) << 8) + (0)) >> (8 - 2)):
	case ((((t_shortarray) << 8) + (0x40)) >> (8 - 2)):
	case ((((t_shortarray) << 8) + (0)) >> (8 - 2)):
	case ((((t_device) << 8) + (0)) >> (8 - 2)):
	case ((((t_device) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_struct) << 8) + (0)) >> (8 - 2)):
	case ((((t_struct) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_astruct) << 8) + (0)) >> (8 - 2)):
	case ((((t_astruct) << 8) + (0x80)) >> (8 - 2)):
	    if (iosp >= (o_stack.top)) {
		o_stack.requested = 1; { {
			ierror.code = (-16);
			ierror.line = 1001;
		};
		ierror.obj = pvalue;
		goto rwe;
		};
	    };
	    ++iosp;
	    ((iosp)->value = (pvalue)->value, (iosp)->tas = (pvalue)->tas);
	    if (--icount > 0) {
		iref++;
		goto top;
	    } else
		goto out;
	case ((((t_array) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	case ((((t_mixedarray) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	case ((((t_shortarray) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	    goto prst;
	case ((((tx_op_add) << 8) + (0x80)) >> (8 - 2)):
	    goto x_add;
	case ((((tx_op_def) << 8) + (0x80)) >> (8 - 2)):
	    goto x_def;
	case ((((tx_op_dup) << 8) + (0x80)) >> (8 - 2)):
	    goto x_dup;
	case ((((tx_op_exch) << 8) + (0x80)) >> (8 - 2)):
	    goto x_exch;
	case ((((tx_op_if) << 8) + (0x80)) >> (8 - 2)):
	    goto x_if;
	case ((((tx_op_ifelse) << 8) + (0x80)) >> (8 - 2)):
	    goto x_ifelse;
	case ((((tx_op_index) << 8) + (0x80)) >> (8 - 2)):
	    goto x_index;
	case ((((tx_op_pop) << 8) + (0x80)) >> (8 - 2)):
	    goto x_pop;
	case ((((tx_op_roll) << 8) + (0x80)) >> (8 - 2)):
	    goto x_roll;
	case ((((tx_op_sub) << 8) + (0x80)) >> (8 - 2)):
	    goto x_sub;
	case ((((t_null) << 8) + (0x80)) >> (8 - 2)):
	    goto bot;
	case ((((t_oparray) << 8) + (0x80)) >> (8 - 2)):
	    pvalue = (const ref *) pvalue->value.const_refs;
	    goto opst;
	case ((((t_operator) << 8) + (0x80)) >> (8 - 2)):{
		if (--ticks_left <= 0) {
		}
		(e_stack.p) = iesp;
		(o_stack.p) = iosp;
		switch (code = ((*(((pvalue)->value.opproc))) (iosp))) {
		case 0:
		case 1:
		    iosp = (o_stack.p);
		    if (--icount > 0) {
			iref++;
			goto top;
		    } else
			goto out;
		case 5:
		    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		    goto opush;
		case 14:
		    goto opop;
		case 22:
		    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		    goto res;
		case (-103):
		    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		    goto oeinsert;
		}
		iosp = (o_stack.p);
		iesp = (e_stack.p); { {
			ierror.code = code;
			ierror.line = 1055;
		};
		ierror.obj = pvalue;
		goto rwe;
		};
	    }
	case ((((t_name) << 8) + (0x80)) >> (8 - 2)):
	case ((((t_file) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	case ((((t_string) << 8) + (0x40 + 0x80)) >> (8 - 2)):
	default:
	    (icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
	    icount = 0;
	    iref = pvalue;
	    goto top;
	}
    case ((((t_file) << 8) + (0x40 + 0x80)) >> (8 - 2)):{
	    stream *s;
	    scanner_state sstate;
	    do {
		s = (iref)->value.pfile;
		if (s->read_id != ((iref)->tas.rsize)) {
		    if (s->read_id == 0 && s->write_id == ((iref)->tas.rsize)) {
			int fcode = file_switch_to_read(iref);
			if (fcode < 0) { {
				ierror.code = fcode;
				ierror.line = 1071;
			};
			goto rwei;
			};
		    } else
			do {
			    s = invalid_file_entry;
			} while (0);
		}
	    } while (0);
	  rt:if (iosp >= (o_stack.top)) {
		o_stack.requested = 1; { {
			ierror.code = (-16);
			ierror.line = 1073;
		};
		goto rwei;
		};
	    };
	    (o_stack.p) = iosp;
	    ((&sstate)->s_scan_type = scanning_none, (&sstate)->s_pstack = 0, (&sstate)->s_from_string = ((bool) 0));
	  again:code = scan_token(s, &token, &sstate);
	    iosp = (o_stack.p);
	    switch (code) {
	    case 0:
		if (!(((&token)->tas.type_attrs) & (0x80)) || (((&token)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0))) == (((t_array) << 8) + (0)))) {
		    iosp++;
		    ((iosp)->value = (&token)->value, (iosp)->tas = (&token)->tas);
		    goto rt;
		}
		(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		if (iesp >= (e_stack.top)) { {
			ierror.code = (-5);
			ierror.line = 1100;
		};
		goto rwei;
		};
		(esfile = (++iesp));
		((iesp)->value = (iref)->value, (iesp)->tas = (iref)->tas);
		iref = &token;
		icount = 0;
		goto top;
	    case 2:
		(esfile = 0);
		goto bot;
	    case 1:
		(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		if (iesp >= (e_stack.top)) { {
			ierror.code = (-5);
			ierror.line = 1115;
		};
		goto rwei;
		};
		(esfile = (++iesp));
		((iesp)->value = (iref)->value, (iesp)->tas = (iref)->tas);
		pvalue = &token;
		goto pr;
	    case 3:
		(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		((&token)->value = (iref)->value, (&token)->tas = (iref)->tas);
		if (iesp >= (e_stack.top)) { {
			ierror.code = (-5);
			ierror.line = 1127;
		};
		goto rwei;
		};
		++iesp;
		((iesp)->value = (&token)->value, (iesp)->tas = (&token)->tas);
		(e_stack.p) = iesp;
		(o_stack.p) = iosp;
		code = scan_handle_refill(&token, &sstate, ((bool) 1), ((bool) 1), ztokenexec_continue);
		iosp = (o_stack.p);
		iesp = (e_stack.p);
		switch (code) {
		case 0:
		    iesp--;
		    goto again;
		case 5:
		    (esfile = 0);
		    if (--ticks_left > 0)
			goto up;
		    goto slice;
		}
		iesp--;
	    default:{
		    ierror.line = 1150;
		    goto rweci;
		};
	    }
	}
    case ((((t_string) << 8) + (0x40 + 0x80)) >> (8 - 2)):{
	    stream ss;
	    scanner_state sstate;
	    ((&sstate)->s_scan_type = scanning_none, (&sstate)->s_pstack = 0, (&sstate)->s_from_string = ((bool) 1));
	    sread_string(&ss, iref->value.bytes, ((iref)->tas.rsize));
	    (o_stack.p) = iosp;
	    code = scan_token(&ss, &token, &sstate);
	    iosp = (o_stack.p);
	    switch (code) {
	    case 0:
	    case 1:
		(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
		if (iesp >= (e_stack.top)) { {
			ierror.code = (-5);
			ierror.line = 1169;
		};
		goto rwei;
		};
		++iesp;
		iesp->tas.type_attrs = iref->tas.type_attrs;
		iesp->value.const_bytes = ((&ss)->cursor.r.ptr + 1);
		((iesp)->tas.rsize = (((&ss)->cursor.r.limit - (&ss)->cursor.r.ptr)));
		if (code == 0) {
		    iref = &token;
		    icount = 0;
		    goto top;
		}
		pvalue = &token;
		goto pr;
	    case 2:
		goto bot;
	    case 3:
		code = ((-18));
	    default:{
		    ierror.line = 1187;
		    goto rweci;
		};
	    }
	}
    default:{
	    uint index;
	    switch (*(const ushort *) iref >> 13) {
	    case pt_full_ref:
	    case pt_full_ref + 1:
		if (iosp >= (o_stack.top)) {
		    o_stack.requested = 1; { {
			    ierror.code = (-16);
			    ierror.line = 1199;
		    };
		    goto rwei;
		    };
		};
		++iosp;
		((iosp)->value = (iref)->value, (iosp)->tas = (iref)->tas);
		if (--icount > 0) {
		    iref++;
		    goto top;
		} else
		    goto out;
	    case pt_executable_operator:
		index = *(const ushort *) iref & ((1 << 12) - 1);
		if (--ticks_left <= 0) {
		}
		if (!((index) < op_def_count)) {
		    (icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
		    index -= op_def_count;
		    pvalue = (const ref *) (index < ((&op_array_table_global.table)->tas.rsize) ? op_array_table_global.table.value.const_refs + index : op_array_table_local.table.value.const_refs + (index - ((&op_array_table_global.table)->tas.rsize)));
		    goto oppr;
		}
		switch (index) {
		case tx_op_add - t_next_index + 1:
		    goto x_add;
		case tx_op_def - t_next_index + 1:
		    goto x_def;
		case tx_op_dup - t_next_index + 1:
		    goto x_dup;
		case tx_op_exch - t_next_index + 1:
		    goto x_exch;
		case tx_op_if - t_next_index + 1:
		    goto x_if;
		case tx_op_ifelse - t_next_index + 1:
		    goto x_ifelse;
		case tx_op_index - t_next_index + 1:
		    goto x_index;
		case tx_op_pop - t_next_index + 1:
		    goto x_pop;
		case tx_op_roll - t_next_index + 1:
		    goto x_roll;
		case tx_op_sub - t_next_index + 1:
		    goto x_sub;
		case 0:
		default:;
		}
		(e_stack.p) = iesp;
		(o_stack.p) = iosp;
		switch (code = ((*((op_def_table[index]->proc))) (iosp))) {
		case 0:
		case 1:
		    iosp = (o_stack.p);
		    if (--icount <= 0) {
			if (icount < 0)
			    goto up;
			iesp--;
		    }
		    iref = (const ref *) ((const ushort *) (iref) + 1);
		    goto top;
		case 5:
		    (icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
		    goto opush;
		case 14:
		    iosp = (o_stack.p);
		    if ((e_stack.p) == iesp) {
			if (--icount <= 0) {
			    if (icount < 0)
				goto up;
			    iesp--;
			}
			iref = (const ref *) ((const ushort *) (iref) + 1);
			goto top;
		    }
		    iesp = (e_stack.p);
		    goto up;
		case 22:
		    (icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
		    goto res;
		case (-103):
		    (icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
		    packed_get((const ref_packed *) iref, iesp + 1);
		    iesp = (e_stack.p);
		    goto up;
		}
		iosp = (o_stack.p);
		iesp = (e_stack.p); {
		    ierror.line = 1280;
		    goto rweci;
		};
	    case pt_integer:
		if (iosp >= (o_stack.top)) {
		    o_stack.requested = 1; { {
			    ierror.code = (-16);
			    ierror.line = 1283;
		    };
		    goto rwei;
		    };
		};
		++iosp;
		((iosp)->value.intval = ((*(const short *) iref & ((1 << 12) - 1)) + (-(1 << (12 - 1)))), ((iosp)->tas.type_attrs = ((t_integer) << 8) + (0)));
		if (--icount <= 0) {
		    if (icount < 0)
			goto up;
		    iesp--;
		}
		iref = (const ref *) ((const ushort *) (iref) + 1);
		goto top;
	    case pt_literal_name:{
		    uint nidx = *(const ushort *) iref & ((1 << 12) - 1);
		    if (iosp >= (o_stack.top)) {
			o_stack.requested = 1; { {
				ierror.code = (-16);
				ierror.line = 1292;
			};
			goto rwei;
			};
		    };
		    ++iosp;
		    ((iosp)->value.pname = (((int_nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)))), ((iosp)->tas.type_attrs = ((t_name) << 8) + (avm_system)), ((iosp)->tas.rsize = ((ushort) (nidx))));;
		    if (--icount <= 0) {
			if (icount < 0)
			    goto up;
			iesp--;
		    }
		    iref = (const ref *) ((const ushort *) (iref) + 1);
		    goto top;
		}
	    case pt_executable_name:{
		    uint nidx = (uint) * (const ushort *) iref & ((1 << 12) - 1);
		    pvalue = ((int_nt)->sub_tables[(nidx) >> (7 + (0 / 2))]->names + ((nidx) & ((1 << (7 + (0 / 2))) - 1)))->pvalue;
		    if (!((unsigned long) (pvalue) > 1)) {
			uint htemp;
			if ((pvalue = (dtop_keys[htemp = (((nidx)) & ((dtop_npairs) - 1)) + 1] == ((ref_packed) (pt_literal_name) << 13) + (nidx) ? dtop_values + htemp : dict_find_name_by_index(nidx))) == 0) {
			    name_index_ref(nidx, &token); { {
				    ierror.code = (-21);
				    ierror.line = 1305;
			    };
			    ierror.obj = &token;
			    goto rwe;
			    };
			}
		    }
		    if (((((pvalue)->tas.type_attrs) & (0x40 + 0x80)) == (0x40))) {
			if (iosp >= (o_stack.top)) {
			    o_stack.requested = 1; { {
				    ierror.code = (-16);
				    ierror.line = 1311;
			    };
			    goto rwei;
			    };
			};
			++iosp;
			((iosp)->value = (pvalue)->value, (iosp)->tas = (pvalue)->tas);
			if (--icount <= 0) {
			    if (icount < 0)
				goto up;
			    iesp--;
			}
			iref = (const ref *) ((const ushort *) (iref) + 1);
			goto top;
		    }
		    if ((((pvalue)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) {
			(icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
			goto pr;
		    }
		    (icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
		    icount = 0;
		    iref = pvalue;
		    goto top;
		}
	    }
	}
    }
    if (iosp >= (o_stack.top)) {
	o_stack.requested = 1; { {
		ierror.code = (-16);
		ierror.line = 1334;
	};
	goto rwei;
	};
    };
    ++iosp;
    ((iosp)->value = (iref)->value, (iosp)->tas = (iref)->tas);
  bot:if (--icount > 0) {
	iref++;
	goto top;
    } else
	goto out;
  out:if (!icount) {
	iesp--;
	iref++;
	goto top;
    }
  up:if (--ticks_left < 0)
	goto slice;
    if (!(((iesp)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80)))) {
	iref = iesp--;
	icount = 0;
	goto top;
    }
    iref = iesp->value.refs;
    icount = ((iesp)->tas.rsize) - 1;
    if (icount <= 0) {
	iesp--;
	if (icount < 0)
	    goto up;
    }
    goto top;
  res:code = (*gs_interp_reschedule_proc) ();
  sched:if (code < 0) { {
	    ierror.code = code;
	    ierror.line = 1367;
    };
    ((&null_proc)->value.const_refs = ((const ref *) ((void *) 0)), ((&null_proc)->tas.type_attrs = ((t_array) << 8) + (0x80 + (0x20 + 0x40))), ((&null_proc)->tas.rsize = (0)));
    ierror.obj = iref = &null_proc;
    goto error_exit;
    }
    iosp = (o_stack.p);
    iesp = (e_stack.p);
    goto up;
  slice:(o_stack.p) = iosp;
    (e_stack.p) = iesp;
    if (ticks_left <= -100) {
	code = (*(&gs_imemory)->reclaim) ((&gs_imemory), -1);
    } else
	code = (*gs_interp_time_slice_proc) ();
    ticks_left = gs_interp_time_slice_ticks;
    goto sched;
  rweci:ierror.code = code;
  rwei:ierror.obj = iref;
  rwe:if (!(*(const ref_packed *) (iref) >= ((ref_packed) (2) << 13)))
	(icount > 0 ? (iesp->value.const_refs = iref + 1, ((iesp)->tas.rsize = (icount))) : 0);
    else {
	packed_get((const ref_packed *) ierror.obj, &ierror.full);
	(icount > 0 ? (iesp->value.const_refs = (const ref *) ((const ushort *) (iref) + 1), ((iesp)->tas.rsize = (icount))) : 0);
	if (iref == ierror.obj)
	    iref = &ierror.full;
	ierror.obj = &ierror.full;
    }
  error_exit:if (((ierror.code) == (-6) || (ierror.code) == (-19))) {
	if (iesp >= (e_stack.top))
	    code = (-5);
	else {
	    iesp++;
	    ((iesp)->value = (iref)->value, (iesp)->tas = (iref)->tas);
	}
    }
    (e_stack.p) = iesp;
    (o_stack.p) = iosp;
    ((perror_object)->value = (ierror.obj)->value, (perror_object)->tas = (ierror.obj)->tas);
    return (ierror.code);
}

static int oparray_pop(os_ptr op)
{
    (e_stack.p) -= 3;
    return 14;
}

static int oparray_cleanup(os_ptr op)
{
    es_ptr ep = (e_stack.p);
    uint ocount_old = (uint) ep[2].value.intval;
    uint dcount_old = (uint) ep[3].value.intval;
    uint ocount = ref_stack_count(&o_stack);
    uint dcount = ref_stack_count(&d_stack);
    if (ocount > ocount_old)
	ref_stack_pop(&o_stack, ocount - ocount_old);
    if (dcount > dcount_old)
	ref_stack_pop(&d_stack, dcount - dcount_old);
    return 0;
}

const op_def *interp_op_defs(void)
{
    static const op_def op_defs_[] = { {"0%interp_exit", interp_exit}, {"0%oparray_pop", oparray_pop}, {(char *) 0, (op_proc_p) 0} };
    return op_defs_;
}
