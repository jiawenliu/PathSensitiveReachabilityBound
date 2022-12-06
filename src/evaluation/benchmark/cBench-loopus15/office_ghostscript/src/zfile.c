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
void gp_init(void);
void gp_exit(int exit_status, int code);
void gp_do_exit(int exit_status);
const char *gp_strerror(int);
void gp_get_realtime(long ptm[2]);
void gp_get_usertime(long ptm[2]);
void gp_init_console(void);
void gp_console_puts(const char *, uint);
int gp_make_console_current(gx_device *);
int gp_make_graphics_current(gx_device *);
const char *gp_getenv_display(void);
FILE *gp_open_printer(char *fname, int binary_mode);
void gp_close_printer(FILE * pfile, const char *fname);
extern const char gp_file_name_list_separator;
extern const char gp_scratch_file_name_prefix[];
extern const char gp_null_file_name[];
extern const char gp_current_directory_name[];
extern const char gp_fmode_binary_suffix[];
extern const char gp_fmode_rb[];
extern const char gp_fmode_wb[];
FILE *gp_open_scratch_file(const char *prefix, char *fname, const char *mode);
FILE *gp_fopen(const char *fname, const char *mode);
bool gp_file_name_is_absolute(const char *fname, uint len);
const char *gp_file_name_concat_string(const char *prefix, uint plen, const char *fname, uint len);
struct file_enum_s;
typedef struct file_enum_s file_enum;
file_enum *gp_enumerate_files_init(const char *pat, uint patlen, gs_memory_t * memory);
uint gp_enumerate_files_next(file_enum * pfen, char *ptr, uint maxlen);
void gp_enumerate_files_close(file_enum * pfen);
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
typedef s_ptr os_ptr;
typedef const_s_ptr const_os_ptr;
extern ref_stack o_stack;
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
typedef struct gs_matrix_s gs_matrix;
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
int check_type_failed(const ref *);
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
extern ref ref_language_level;
void initial_enter_name(const char *, const ref *);
void initial_remove_name(const char *);
extern const int gs_interp_max_op_num_args;
extern const int gs_interp_num_special_ops;
void gs_interp_make_oper(ref * opref, op_proc_p, int index);
int gs_errorname(int, ref *);
int gs_errorinfo_put_string(const char *);
void gs_interp_init(void);
void gs_interp_reset(void);
typedef struct alloc_save_s alloc_save_t;
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
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
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
struct stat {
    __dev_t st_dev;
    unsigned short int __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __unused4;
    unsigned long int __unused5;
};
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int fstat(int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int chmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int lchmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchmod(int __fd, __mode_t __mode) __attribute__ ((__nothrow__));
extern int fchmodat(int __fd, __const char *__file, __mode_t __mode, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __mode_t umask(__mode_t __mask) __attribute__ ((__nothrow__));
extern int mkdir(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkdirat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mknod(__const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mknodat(int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mkfifo(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkfifoat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int utimensat(int __fd, __const char *__path, __const struct timespec __times[2], int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int futimens(int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern int __xmknod(int __ver, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int __xmknodat(int __ver, int __fd, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 5)));
typedef struct gx_io_device_s gx_io_device;
typedef struct gx_io_device_procs_s gx_io_device_procs;
typedef struct gs_param_list_s gs_param_list;
struct gx_io_device_procs_s {
    int (*init) (gx_io_device * iodev, gs_memory_t * mem);
    int (*open_device) (gx_io_device * iodev, const char *access, stream ** ps, gs_memory_t * mem);
    int (*open_file) (gx_io_device * iodev, const char *fname, uint namelen, const char *access, stream ** ps, gs_memory_t * mem);
    int (*fopen) (gx_io_device * iodev, const char *fname, const char *access, FILE ** pfile, char *rfname, uint rnamelen);
    int (*fclose) (gx_io_device * iodev, FILE * file);
    int (*delete_file) (gx_io_device * iodev, const char *fname);
    int (*rename_file) (gx_io_device * iodev, const char *from, const char *to);
    int (*file_status) (gx_io_device * iodev, const char *fname, struct stat * pstat);
    file_enum *(*enumerate_files) (gx_io_device * iodev, const char *pat, uint patlen, gs_memory_t * mem);
    uint(*enumerate_next) (file_enum * pfen, char *ptr, uint maxlen);
    void (*enumerate_close) (file_enum * pfen);
    int (*get_params) (gx_io_device * iodev, gs_param_list * plist);
    int (*put_params) (gx_io_device * iodev, gs_param_list * plist);
};
typedef int (*iodev_proc_fopen_t) (gx_io_device * iodev, const char *fname, const char *access, FILE ** pfile, char *rfname, uint rnamelen);
int iodev_no_init(gx_io_device * iodev, gs_memory_t * mem);
int iodev_no_open_device(gx_io_device * iodev, const char *access, stream ** ps, gs_memory_t * mem);
int iodev_no_open_file(gx_io_device * iodev, const char *fname, uint namelen, const char *access, stream ** ps, gs_memory_t * mem);
int iodev_no_fopen(gx_io_device * iodev, const char *fname, const char *access, FILE ** pfile, char *rfname, uint rnamelen);
int iodev_no_fclose(gx_io_device * iodev, FILE * file);
int iodev_no_delete_file(gx_io_device * iodev, const char *fname);
int iodev_no_rename_file(gx_io_device * iodev, const char *from, const char *to);
int iodev_no_file_status(gx_io_device * iodev, const char *fname, struct stat *pstat);
file_enum *iodev_no_enumerate_files(gx_io_device * iodev, const char *pat, uint patlen, gs_memory_t * mem);
int iodev_no_get_params(gx_io_device * iodev, gs_param_list * plist);
int iodev_no_put_params(gx_io_device * iodev, gs_param_list * plist);
int iodev_os_fopen(gx_io_device * iodev, const char *fname, const char *access, FILE ** pfile, char *rfname, uint rnamelen);
int iodev_os_fclose(gx_io_device * iodev, FILE * file);
gx_io_device *gs_getiodevice(int);
gx_io_device *gs_findiodevice(const byte *, uint);
int gs_getdevparams(gx_io_device *, gs_param_list *);
int gs_putdevparams(gx_io_device *, gs_param_list *);
int gs_fopen_errno_to_code(int);
struct gx_io_device_s {
    const char *dname;
    const char *dtype;
    gx_io_device_procs procs;
};
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
int file_open_stream(const char *, uint, const char *, uint, stream **, iodev_proc_fopen_t);
int filter_open(const char *, uint, ref *, const stream_procs *, const stream_template *, const stream_state *);
void make_stream_file(ref *, stream *, const char *);
int file_close_finish(stream *);
int file_close_disable(stream *);
int file_close_file(stream *);
int file_close(ref *);
stream *file_alloc_stream(gs_memory_t *, client_name_t);
void file_save(void);
int zreadline_from(stream *, byte *, uint, uint *, bool *);
typedef struct parsed_file_name_s {
    gx_io_device *iodev;
    const char *fname;
    uint len;
} parsed_file_name;
int parse_file_name(const ref *, parsed_file_name *);
int parse_real_file_name(const ref *, parsed_file_name *, client_name_t);
int terminate_file_name(parsed_file_name *, client_name_t);
void free_file_name(parsed_file_name *, client_name_t);
void gs_exit_with_code(int exit_status, int code);
void gs_exit(int exit_status);
extern int gs_exit_status;
typedef struct gs_main_instance_s gs_main_instance;
gs_main_instance *gs_main_instance_default(void);
void gs_get_real_stdio(FILE * stdfiles[3]);
void gs_main_init0(gs_main_instance * minst, FILE * in, FILE * out, FILE * err, int max_lib_paths);
void gs_main_init1(gs_main_instance * minst);
void gs_main_init2(gs_main_instance * minst);
void gs_main_add_lib_path(gs_main_instance * minst, const char *path);
void gs_main_set_lib_paths(gs_main_instance * minst);
int gs_main_lib_open(gs_main_instance * minst, const char *fname, ref * pfile);
int gs_main_run_file(gs_main_instance * minst, const char *fname, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string(gs_main_instance * minst, const char *str, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_with_length(gs_main_instance * minst, const char *str, uint length, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_file_open(gs_main_instance * minst, const char *file_name, ref * pfref);
int gs_main_run_string_begin(gs_main_instance * minst, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_continue(gs_main_instance * minst, const char *str, uint length, int user_errors, int *pexit_code, ref * perror_object);
int gs_main_run_string_end(gs_main_instance * minst, int user_errors, int *pexit_code, ref * perror_object);
int gs_push_boolean(gs_main_instance * minst, bool value);
int gs_push_integer(gs_main_instance * minst, long value);
int gs_push_real(gs_main_instance * minst, floatp value);
int gs_push_string(gs_main_instance * minst, byte * chars, uint length, bool read_only);
int gs_pop_boolean(gs_main_instance * minst, bool * result);
int gs_pop_integer(gs_main_instance * minst, long *result);
int gs_pop_real(gs_main_instance * minst, float *result);
int gs_pop_string(gs_main_instance * minst, gs_string * result);
void gs_debug_dump_stack(int code, ref * perror_object);
void gs_main_finit(gs_main_instance * minst, int exit_status, int code);
int gs_interpret(ref * pref, int user_errors, int *pexit_code, ref * perror_object);
typedef struct gs_file_path_s {
    ref container;
    ref list;
    const char *env;
    const char *final;
    uint count;
} gs_file_path;
struct gs_main_instance_s {
    FILE *fstdin;
    FILE *fstdout;
    FILE *fstderr;
    uint memory_chunk_size;
    ulong name_table_size;
    int init_done;
    int user_errors;
    bool search_here_first;
    bool run_start;
    gs_file_path lib_path;
};
extern const gs_main_instance gs_main_instance_init_values;
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
extern int iodev_os_open_file(gx_io_device * iodev, const char *fname, uint namelen, const char *access, stream ** ps, gs_memory_t * mem);
int file_open(const byte *, uint, const char *, uint, ref *, stream **);
static int execfile_finish(os_ptr);
static int execfile_cleanup(os_ptr);
static int filter_report_error(stream_state *, const char *);
static stream *file_list;
static gs_gc_root_t file_list_root;
const uint file_default_buffer_size = 512;
stream *invalid_file_entry;
static gs_gc_root_t invalid_file_root;
static void zfile_init(void)
{
    stream *s = s_alloc(((gs_memory_t *) (gs_imemory.spaces.named.system)), "zfile_init");
    sread_string(s, ((void *) 0), 0);
    s->next = s->prev = 0;
    s->save_count = 0;
    ((s)->read_id = (s)->write_id = 0);
    invalid_file_entry = s;
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.register_root) (((gs_memory_t *) (gs_imemory.current)), &invalid_file_root, (&ptr_struct_procs), (void **) &invalid_file_entry, "invalid_file_entry");
    file_list = 0;
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.register_root) (((gs_memory_t *) (gs_imemory.current)), &file_list_root, (&ptr_struct_procs), (void **) &file_list, "file_list");
} void make_invalid_file(ref * fp)
{
    ((fp)->value.pfile = (invalid_file_entry), ((fp)->tas.type_attrs = ((t_file) << 8) + (avm_system)), ((fp)->tas.rsize = (~0)));
} int zfile(register os_ptr op)
{
    char file_access[3];
    parsed_file_name pname;
    const byte *astr;
    int code;
    stream *s;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_string) << 8) + (0x20))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&*op) : (-7)));
    astr = op->value.const_bytes;
    switch (((op)->tas.rsize)) {
    case 2:
	if (astr[1] != '+')
	    return ((-9));
	file_access[1] = '+';
	file_access[2] = 0;
	break;
    case 1:
	file_access[1] = 0;
	break;
    default:
	return ((-9));
    }
    switch (astr[0]) {
    case 'r':
    case 'w':
    case 'a':
	break;
    default:
	return ((-9));
    }
    file_access[0] = astr[0];
    code = parse_file_name(op - 1, &pname);
    if (code < 0)
	return code;
    if (pname.iodev == ((void *) 0))
	pname.iodev = (gs_getiodevice(0));
    if (pname.fname == ((void *) 0))
	code = (*pname.iodev->procs.open_device) (pname.iodev, file_access, &s, ((gs_memory_t *) (gs_imemory.current)));
    else {
	int (*open_file) (gx_io_device * iodev, const char *fname, uint namelen, const char *access, stream ** ps, gs_memory_t * mem) = pname.iodev->procs.open_file;
	if (open_file == 0)
	    open_file = iodev_os_open_file;
	code = (*open_file) (pname.iodev, pname.fname, pname.len, file_access, &s, ((gs_memory_t *) (gs_imemory.current)));
    }
    if (code < 0)
	return code;
    make_stream_file(op - 1, s, file_access);
    ((o_stack.p) -= (1));
    return code;
}

static int zdeletefile(register os_ptr op)
{
    parsed_file_name pname;
    int code = parse_real_file_name(op, &pname, "deletefile");
    if (code < 0)
	return code;
    code = (*pname.iodev->procs.delete_file) (pname.iodev, pname.fname);
    free_file_name(&pname, "deletefile");
    if (code < 0)
	return code;
    ((o_stack.p) -= (1));
    return 0;
}

static int file_continue(os_ptr);
static int file_cleanup(os_ptr);
static int zfilenameforall(register os_ptr op)
{
    file_enum *pfen;
    int code;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x10))) == (((t_string) << 8) + (0x10))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&*op) : (-7)));
    if (!(((&op[-1])->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&op[-1]));;
    if (!(((&op[-2])->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_string) << 8) + (0x20))))
	return ((!((((const byte *) &((&op[-2])->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&op[-2]) : (-7)));
    if ((e_stack.p) > (e_stack.top) - (7)) {
	int es_code_ = ref_stack_extend(&e_stack, 7);
	if (es_code_ < 0)
	    return es_code_;
    };
    pfen = gp_enumerate_files_init((char *) op[-2].value.bytes, ((op - 2)->tas.rsize), ((gs_memory_t *) (gs_imemory.current)));
    if (pfen == 0)
	return ((-25));
    (++(e_stack.p), (((e_stack.p))->value.opproc = (file_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (2))));
    *++(e_stack.p) = op[-2];
    *++(e_stack.p) = *op;
    ++(e_stack.p);
    (((e_stack.p))->value.pstruct = ((obj_header_t *) (pfen)), (((e_stack.p))->tas.type_attrs = ((t_struct) << 8) + ((0) | (((&gs_imemory))->current_space))));
    *++(e_stack.p) = op[-1];
    ((o_stack.p) -= (3));
    op -= 3;
    code = file_continue(op);
    return (code == 14 ? 5 : code);
}

static int file_continue(register os_ptr op)
{
    es_ptr pscratch = (e_stack.p) - 2;
    file_enum *pfen = ((file_enum *) (((e_stack.p) - 1)->value.pstruct));
    uint len = ((pscratch)->tas.rsize);
    uint code = gp_enumerate_files_next(pfen, (char *) pscratch->value.bytes, len);
    if (code == ~(uint) 0) {
	(e_stack.p) -= 4;
	return 14;
    } else if (code > len)
	return ((-15));
    else {
	do {
	    if ((op += (1)) > (o_stack.top)) {
		o_stack.requested = (1);
		return ((-16));
	    } else
		(o_stack.p) = op;
	} while (0);
	(*(op) = *(pscratch));
	((op)->tas.rsize = (code));
	(++(e_stack.p), (((e_stack.p))->value.opproc = (file_continue), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
	*++(e_stack.p) = pscratch[2];
	return 5;
    }
}

static int file_cleanup(os_ptr op)
{
    gp_enumerate_files_close(((file_enum *) (((e_stack.p) + 4)->value.pstruct)));
    return 0;
}

static int zrenamefile(register os_ptr op)
{
    parsed_file_name pname1, pname2;
    int code = parse_real_file_name(op - 1, &pname1, "renamefile(from)");
    if (code < 0)
	return code;
    pname2.fname = 0;
    code = parse_real_file_name(op, &pname2, "renamefile(to)");
    if (code < 0 || pname1.iodev != pname2.iodev || (code = (*pname1.iodev->procs.rename_file) (pname1.iodev, pname1.fname, pname2.fname)) < 0) {
	if (code >= 0)
	    code = ((-9));
    }
    free_file_name(&pname2, "renamefile(to)");
    free_file_name(&pname1, "renamefile(from)");
    if (code < 0)
	return code;
    ((o_stack.p) -= (2));
    return 0;
}

static int zstatus(register os_ptr op)
{
    switch ((((const byte *) &((op)->tas.type_attrs))[1])) {
    case t_file:{
	    stream *s;
	    ((op)->value.boolval = (((s = (op)->value.pfile, (s->read_id | s->write_id) == ((op)->tas.rsize)) ? 1 : 0)), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	}
	return 0;
    case t_string:{
	    parsed_file_name pname;
	    struct stat fstat;
	    int code = parse_file_name(op, &pname);
	    if (code < 0)
		return code;
	    code = terminate_file_name(&pname, "status");
	    if (code < 0)
		return code;
	    code = (*pname.iodev->procs.file_status) (pname.iodev, pname.fname, &fstat);
	    switch (code) {
	    case 0:
		do {
		    if ((op += (4)) > (o_stack.top)) {
			o_stack.requested = (4);
			return ((-16));
		    } else
			(o_stack.p) = op;
		} while (0);
		((op - 4)->value.intval = (((&fstat)->st_blocks)), ((op - 4)->tas.type_attrs = ((t_integer) << 8) + (0)));
		((op - 3)->value.intval = (fstat.st_size), ((op - 3)->tas.type_attrs = ((t_integer) << 8) + (0)));
		((op - 2)->value.intval = (fstat.st_mtim.tv_sec), ((op - 2)->tas.type_attrs = ((t_integer) << 8) + (0)));
		((op - 1)->value.intval = (fstat.st_ctim.tv_sec), ((op - 1)->tas.type_attrs = ((t_integer) << 8) + (0)));
		((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
		break;
	    case (-22):
		((op)->value.boolval = (0), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
		code = 0;
	    }
	    free_file_name(&pname, "status");
	    return code;
	}
    default:
	return (check_type_failed(op));
    }
}

static int zexecfile(register os_ptr op)
{
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80 | 0x20 | 0x40))) == (((t_file) << 8) + (0x80 | 0x20 | 0x40))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_file)) ? check_type_failed(&*op) : (-7)));
    if ((e_stack.p) > (e_stack.top) - (4)) {
	int es_code_ = ref_stack_extend(&e_stack, 4);
	if (es_code_ < 0)
	    return es_code_;
    };
    (++(e_stack.p), (((e_stack.p))->value.opproc = (execfile_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
    *++(e_stack.p) = *op;
    (++(e_stack.p), (((e_stack.p))->value.opproc = (execfile_finish), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
    return zexec(op);
}

static int execfile_finish(os_ptr op)
{
    if ((o_stack.top) - (o_stack.p) < (1)) {
	o_stack.requested = (1);
	return ((-16));
    };
    (e_stack.p) -= 2;
    execfile_cleanup(op);
    return 14;
}

static int execfile_cleanup(os_ptr op)
{
    if ((o_stack.top) - (o_stack.p) < (1)) {
	o_stack.requested = (1);
	return ((-16));
    };
    *++(o_stack.p) = (e_stack.p)[2];
    return zclosefile((o_stack.p));
}

int zfilenamedirseparator(os_ptr op)
{
    const char *sepr;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_string) << 8) + (0x20))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&*op) : (-7)));
    if (!(((&op[-1])->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_string) << 8) + (0x20))))
	return ((!((((const byte *) &((&op[-1])->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&op[-1]) : (-7)));
    sepr = gp_file_name_concat_string((const char *) op[-1].value.const_bytes, ((op - 1)->tas.rsize), (const char *) op->value.const_bytes, ((op)->tas.rsize));
    ((op - 1)->value.const_bytes = ((const byte *) sepr), ((op - 1)->tas.type_attrs = ((t_string) << 8) + (avm_foreign | (0x20 + 0x40))), ((op - 1)->tas.rsize = (strlen(sepr))));
    ((o_stack.p) -= (1));
    return 0;
}

int zfilenamelistseparator(os_ptr op)
{
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    ((op)->value.const_bytes = ((const byte *) &gp_file_name_list_separator), ((op)->tas.type_attrs = ((t_string) << 8) + (avm_foreign | (0x20 + 0x40))), ((op)->tas.rsize = (1)));
    return 0;
}

int zfilenamesplit(os_ptr op)
{
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x20))) == (((t_string) << 8) + (0x20))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_string)) ? check_type_failed(&*op) : (-7)));
    return ((-21));
}

int zfindlibfile(register os_ptr op)
{
    int code;
    byte cname[200];
    uint clen;
    parsed_file_name pname;
    stream *s;
    if ((o_stack.top) - (o_stack.p) < (2)) {
	o_stack.requested = (2);
	return ((-16));
    };
    code = parse_file_name(op, &pname);
    if (code < 0)
	return code;
    if (pname.iodev == ((void *) 0))
	pname.iodev = (gs_getiodevice(0));
    if (pname.iodev != (gs_getiodevice(0))) {
	code = (pname.fname == ((void *) 0) ? (*pname.iodev->procs.open_device) (pname.iodev, "r", &s, ((gs_memory_t *) (gs_imemory.current))) : (*pname.iodev->procs.open_file) (pname.iodev, pname.fname, pname.len, "r", &s, ((gs_memory_t *) (gs_imemory.current))));
	if (code < 0) {
	    do {
		if ((op += (1)) > (o_stack.top)) {
		    o_stack.requested = (1);
		    return ((-16));
		} else
		    (o_stack.p) = op;
	    } while (0);
	    ((op)->value.boolval = (0), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	    return 0;
	}
	make_stream_file(op + 1, s, "r");
    } else {
	byte *cstr;
	code = lib_file_open(pname.fname, pname.len, cname, 200, &clen, op + 1);
	if (code == (-25))
	    return code;
	if (code < 0) {
	    do {
		if ((op += (1)) > (o_stack.top)) {
		    o_stack.requested = (1);
		    return ((-16));
		} else
		    (o_stack.p) = op;
	    } while (0);
	    ((op)->value.boolval = (0), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	    return 0;
	}
	cstr = (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_string) (((gs_memory_t *) (gs_imemory.current)), clen, "findlibfile");
	if (cstr == 0)
	    return ((-25));
	memcpy(cstr, cname, clen);
	((op)->value.bytes = (cstr), ((op)->tas.type_attrs = ((t_string) << 8) + ((0x10 + 0x20 + 0x40) | (((&gs_imemory))->current_space))), ((op)->tas.rsize = (clen)));
    }
    do {
	if ((op += (2)) > (o_stack.top)) {
	    o_stack.requested = (2);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    ((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    return 0;
}

const op_def *zfile_op_defs(void)
{
    static const op_def op_defs_[] = { {"1deletefile", zdeletefile}, {"1.execfile", zexecfile}, {"2file", zfile}, {"3filenameforall", zfilenameforall}, {"2.filenamedirseparator", zfilenamedirseparator}, {"0.filenamelistseparator", zfilenamelistseparator}, {"1.filenamesplit", zfilenamesplit}, {"1findlibfile", zfindlibfile}, {"2renamefile", zrenamefile}, {"1status", zstatus}, {"0%file_continue", file_continue}, {"0%execfile_finish", execfile_finish}, {(char *) 0, (op_proc_p) zfile_init} };
    return op_defs_;
}

void make_stream_file(ref * pfile, stream * s, const char *access)
{
    uint attrs = (access[1] == '+' ? 0x10 + 0x20 + 0x40 : 0) | imemory_space((gs_ref_memory_t *) s->memory);
    if (access[0] == 'r') {
	((pfile)->value.pfile = (s), ((pfile)->tas.type_attrs = ((t_file) << 8) + (attrs | (0x20 | 0x40))), ((pfile)->tas.rsize = (s->read_id)));
	s->write_id = 0;
    } else {
	((pfile)->value.pfile = (s), ((pfile)->tas.type_attrs = ((t_file) << 8) + (attrs | 0x10)), ((pfile)->tas.rsize = (s->write_id)));
	s->read_id = 0;
    }
}

static int lib_file_fopen(gx_io_device * iodev, const char *bname, const char *ignore_access, FILE ** pfile, char *rfname, uint rnamelen)
{
    char fmode[3];
    int len = strlen(bname);
    const gs_file_path *pfpath = &(gs_main_instance_default()->lib_path);
    uint pi;
    strcpy(fmode, "r");
    strcat(fmode, gp_fmode_binary_suffix);
    if (gp_file_name_is_absolute(bname, len))
	return (*iodev->procs.fopen) (iodev, bname, fmode, pfile, rfname, rnamelen);
    for (pi = 0; pi < ((&pfpath->list)->tas.rsize); ++pi) {
	const ref *prdir = pfpath->list.value.refs + pi;
	const char *pstr = (const char *) prdir->value.const_bytes;
	uint plen = ((prdir)->tas.rsize);
	const char *cstr = gp_file_name_concat_string(pstr, plen, bname, len);
	int up, i;
	int code;
	up = plen + strlen(cstr);
	if (up + len + 1 > rnamelen)
	    return ((-13));
	for (i = len + 1; --i >= 0;)
	    rfname[i + up] = bname[i];
	memcpy(rfname, pstr, plen);
	memcpy(rfname + plen, cstr, strlen(cstr));
	code = (*iodev->procs.fopen) (iodev, rfname, fmode, pfile, rfname, rnamelen);
	if (code >= 0)
	    return code;
	if (rfname == bname)
	    for (i = 0; (rfname[i] = rfname[i + up]) != 0; i++);
    }
    return ((-22));
}

FILE *lib_fopen(const char *bname)
{
    FILE *file = ((void *) 0);
    char buffer[129];
    int code = lib_file_fopen((gs_getiodevice(0)), bname, "r", &file, buffer, 129);
    return (code < 0 ? ((void *) 0) : file);
} int lib_file_open(const char *fname, uint len, byte * cname, uint max_clen, uint * pclen, ref * pfile)
{
    stream *s;
    int code = file_open_stream(fname, len, "r", 512, &s, lib_file_fopen);
    char *bname;
    uint blen;
    if (code < 0)
	return code;
    bname = (char *) s->cbuf;
    blen = strlen(bname);
    if (blen > max_clen) {
	sclose(s);
	return ((-13));
    }
    memcpy(cname, bname, blen);
    *pclen = blen;
    make_stream_file(pfile, s, "r");
    return 0;
}

int file_read_string(const byte * str, uint len, ref * pfile)
{
    stream *s = file_alloc_stream(((gs_memory_t *) (gs_imemory.current)), "file_read_string");
    int space;
    if (s == 0)
	return ((-25));
    space = (((&gs_imemory))->current_space);
    sread_string(s, str, len);
    s->foreign = 1;
    s->write_id = 0;
    ((pfile)->value.pfile = (s), ((pfile)->tas.type_attrs = ((t_file) << 8) + ((0x20 + 0x40) | space)), ((pfile)->tas.rsize = (s->read_id)));
    s->save_close = s->procs.close;
    s->procs.close = file_close_disable;
    return 0;
}

int file_open_stream(const char *fname, uint len, const char *file_access, uint buffer_size, stream ** ps, iodev_proc_fopen_t fopen_proc)
{
    byte *buffer;
    register stream *s;
    if (buffer_size == 0)
	buffer_size = 512;
    if (len >= buffer_size)
	return ((-13));
    s = file_alloc_stream(((gs_memory_t *) (gs_imemory.current)), "file_open_stream");
    if (s == 0)
	return ((-25));
    buffer = (*(((gs_memory_t *) (gs_imemory.current)))->procs.alloc_bytes) (((gs_memory_t *) (gs_imemory.current)), buffer_size, "file_open(buffer)");
    if (buffer == 0)
	return ((-25));
    if (fname != 0) {
	char *file_name = (char *) buffer;
	char fmode[4];
	FILE *file;
	int code;
	memcpy(file_name, fname, len);
	file_name[len] = 0;
	strcpy(fmode, file_access);
	strcat(fmode, gp_fmode_binary_suffix);
	code = (*fopen_proc) ((gs_getiodevice(0)), file_name, fmode, &file, (char *) buffer, buffer_size);
	if (code < 0) {
	    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), buffer, "file_open(buffer)");
	    return code;
	}
	switch (fmode[0]) {
	case 'a':
	    sappend_file(s, file, buffer, buffer_size);
	    break;
	case 'r':
	    sread_file(s, file, buffer, buffer_size);
	    break;
	case 'w':
	    swrite_file(s, file, buffer, buffer_size);
	}
	if (fmode[1] == '+')
	    s->file_modes |= 1 | 2;
	s->save_close = s->procs.close;
	s->procs.close = file_close_file;
    } else {
	s->cbuf = buffer;
	s->bsize = s->cbsize = buffer_size;
    }
    *ps = s;
    return 0;
}

int filter_open(const char *file_access, uint buffer_size, ref * pfile, const stream_procs * procs, const stream_template * template, const stream_state * st)
{
    stream *s;
    uint ssize = gs_struct_type_size(template->stype);
    stream_state *sst = 0;
    int code;
    if (template->stype != &st_stream_state) {
	sst = s_alloc_state(((gs_memory_t *) (gs_imemory.current)), template->stype, "filter_open(stream_state)");
	if (sst == 0)
	    return ((-25));
    }
    code = file_open_stream((char *) 0, 0, file_access, buffer_size, &s, (iodev_proc_fopen_t) 0);
    if (code < 0) {
	(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), sst, "filter_open(stream_state)");
	return code;
    }
    s_std_init(s, s->cbuf, s->bsize, procs, (*file_access == 'r' ? 1 : 2));
    s->procs.process = template->process;
    s->save_close = s->procs.close;
    s->procs.close = file_close_file;
    if (sst == 0) {
	sst = (stream_state *) s;
    } else if (st != 0)
	memcpy(sst, st, ssize);
    s->state = sst;
    sst->template = template;
    sst->memory = ((gs_memory_t *) (gs_imemory.current));
    sst->report_error = filter_report_error;
    if (template->init != 0) {
	code = (*template->init) (sst);
	if (code < 0) {
	    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), sst, "filter_open(stream_state)");
	    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), s->cbuf, "filter_open(buffer)");
	    return code;
	}
    }
    make_stream_file(pfile, s, file_access);
    return 0;
}

static int filter_report_error(stream_state * st, const char *str)
{
    do {
    } while (0);
    return gs_errorinfo_put_string(str);
}

stream *file_alloc_stream(gs_memory_t * mem, client_name_t cname)
{
    stream *s;
    s = file_list;
    while (s != 0 && s->save_count == 0) {
	if (!((s)->modes != 0) && s->read_id != 0 && s->memory == mem) {
	    s->is_temp = 0;
	    return s;
	}
	s = s->next;
    }
    s = s_alloc(mem, cname);
    if (s == 0)
	return 0;
    ((s)->read_id = (s)->write_id = 1);
    s->is_temp = 0;
    s_disable(s);
    if (file_list != 0)
	file_list->prev = s;
    s->next = file_list;
    s->prev = 0;
    s->save_count = 0;
    file_list = s;
    return s;
}

int file_close_finish(stream * s)
{
    return 0;
}

int file_close_disable(stream * s)
{
    int code = (*s->save_close) (s);
    if (code)
	return code;
    s->read_id = s->write_id = (s->read_id | s->write_id) + 1;
    return file_close_finish(s);
}

int file_close_file(stream * s)
{
    stream *stemp = s->strm;
    gs_memory_t *mem;
    int code = file_close_disable(s);
    if (code)
	return code;
    while (stemp != 0 && stemp->is_temp != 0) {
	stream *snext = stemp->strm;
	mem = stemp->memory;
	if (stemp->is_temp > 1)
	    (*(mem)->procs.free_object) (mem, stemp->cbuf, "file_close(temp stream buffer)");
	s_disable(stemp);
	stemp = snext;
    }
    mem = s->memory;
    (*(mem)->procs.free_object) (mem, s->cbuf, "file_close(buffer)");
    return 0;
}

int file_close(ref * pfile)
{
    stream *s;
    if ((s = (pfile)->value.pfile, (s->read_id | s->write_id) == ((pfile)->tas.rsize))) {
	if (sclose(s))
	    return ((-12));
    }
    return 0;
}

void file_save(void)
{
    do {
    } while (0);
    if (file_list != 0)
	file_list->save_count++;
}

void file_restore(const alloc_save_t * save, const gs_memory_t * mem)
{
    stream *prev = 0;
    stream *s;
    stream **ps;
    for (ps = &file_list; (s = *ps) != 0 && s->save_count == 0;)
	if (s->memory == mem) {
	    if ((*ps = s->next) != 0)
		(*ps)->prev = prev;
	} else
	    prev = s, ps = &s->next;
    if (s != 0)
	s->save_count--;
    do {
    } while (0);
}

void file_forget_save(const alloc_save_t * save)
{
    stream *s;
    for (s = file_list; s != 0 && s->save_count == 0;)
	s = s->next;
    if (s != 0)
	s->save_count--;
    do {
    } while (0);
}

void file_gc_prepare(void)
{
    while (file_list != 0) {
	stream *s = file_list;
	file_list = s->next;
	s->prev = s->next = 0;
    }
}
