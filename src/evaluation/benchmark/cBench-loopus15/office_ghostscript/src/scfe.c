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
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
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
typedef struct stream_CF_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
} stream_CF_state;
typedef struct stream_CFE_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
    int max_line_bytes;
    int max_run2_bytes;
    int max_run3_bytes;
    int count;
    int run_count;
    int copy_count;
    bool new_line;
} stream_CFE_state;
extern const stream_template s_CFE_template;
typedef struct stream_CFD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
    int cbit;
    int rows_left;
    int rpos;
    int wpos;
    int eol_count;
    byte invert;
    int uncomp_run;
    int uncomp_left;
    int uncomp_exit;
} stream_CFD_state;
extern const stream_template s_CFD_template;
static gs_ptr_type_t cfe_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((stream_CFE_state *) vptr)->lbuf);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((stream_CFE_state *) vptr)->lprev);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void cfe_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((stream_CFE_state *) vptr)->lbuf = gs_reloc_struct_ptr((const void *) ((const stream_CFE_state *) vptr)->lbuf, gcst);
    ((stream_CFE_state *) vptr)->lprev = gs_reloc_struct_ptr((const void *) ((const stream_CFE_state *) vptr)->lprev, gcst);
} static const gs_memory_struct_type_t st_CFE_state = { sizeof(stream_CFE_state), "CCITTFaxEncode state", 0, 0, cfe_enum_ptrs, cfe_reloc_ptrs, 0 };

static void s_CFE_release(stream_state *);
static void s_CFE_set_defaults(register stream_state * st)
{
    ((((stream_CFE_state *) st))->Uncompressed = ((bool) 0), (((stream_CFE_state *) st))->K = 0, (((stream_CFE_state *) st))->EndOfLine = ((bool) 0), (((stream_CFE_state *) st))->EncodedByteAlign = ((bool) 0), (((stream_CFE_state *) st))->Columns = 1728, (((stream_CFE_state *) st))->Rows = 0, (((stream_CFE_state *) st))->EndOfBlock = ((bool) 1), (((stream_CFE_state *) st))->BlackIs1 = ((bool) 0), (((stream_CFE_state *) st))->DamagedRowsBeforeError = 0, (((stream_CFE_state *) st))->FirstBitLowOrder = ((bool) 0), (((stream_CFE_state *) st))->DecodedByteAlign = 1);
} static int s_CFE_init(register stream_state * st)
{
    int columns = ((stream_CFE_state *) st)->Columns;
    int raster = ((stream_CFE_state *) st)->raster = ((((stream_CFE_state *) st)->DecodedByteAlign) & ((((stream_CFE_state *) st)->DecodedByteAlign) - 1) ? (((columns + 7) >> 3) + ((((stream_CFE_state *) st)->DecodedByteAlign) - 1)) / (((stream_CFE_state *) st)->DecodedByteAlign) * (((stream_CFE_state *) st)->DecodedByteAlign) : (((columns + 7) >> 3) + ((((stream_CFE_state *) st)->DecodedByteAlign) - 1)) & -(((stream_CFE_state *) st)->DecodedByteAlign));
    ((((stream_CFE_state *) st))->bits = 0, (((stream_CFE_state *) st))->bits_left = ((1 << 2) * 8));
    ((stream_CFE_state *) st)->count = raster << 3;
    ((stream_CFE_state *) st)->lbuf = ((stream_CFE_state *) st)->lprev = 0;
    if (columns > (2560 * 32000 * 2 / 3))
	return ((int) (-2));
    ((stream_CFE_state *) st)->lbuf = (*(st->memory)->procs.alloc_bytes) (st->memory, raster + 4, "CFE lbuf");
    if (((stream_CFE_state *) st)->lbuf == 0) {
	s_CFE_release(st);
	return ((int) (-2));
    }
    if (((stream_CFE_state *) st)->K != 0) {
	((stream_CFE_state *) st)->lprev = (*(st->memory)->procs.alloc_bytes) (st->memory, raster + 4, "CFE lprev");
	if (((stream_CFE_state *) st)->lprev == 0) {
	    s_CFE_release(st);
	    return ((int) (-2));
	}
	memset(((stream_CFE_state *) st)->lprev, (((stream_CFE_state *) st)->BlackIs1 ? 0 : 0xff), raster);
	if (columns & 7)
	    ((stream_CFE_state *) st)->lprev[raster - 1] ^= 0x80 >> (columns & 7);
	else
	    ((stream_CFE_state *) st)->lprev[raster] = ~((stream_CFE_state *) st)->lprev[0];
    }
    ((stream_CFE_state *) st)->copy_count = raster;
    ((stream_CFE_state *) st)->new_line = ((bool) 1);
    ((stream_CFE_state *) st)->k_left = (((stream_CFE_state *) st)->K > 0 ? 1 : ((stream_CFE_state *) st)->K); {
	int max_bytes = ((columns) / 2560 * 3 / 2 + 5);
	((stream_CFE_state *) st)->max_line_bytes = max_bytes * 2 + 4;
	((stream_CFE_state *) st)->max_run2_bytes = max_bytes * 2;
	((stream_CFE_state *) st)->max_run3_bytes = max_bytes * 3;
    } return 0;
}

static void s_CFE_release(stream_state * st)
{
    (*(st->memory)->procs.free_object) (st->memory, ((stream_CFE_state *) st)->lprev, "CFE lprev(close)");
    (*(st->memory)->procs.free_object) (st->memory, ((stream_CFE_state *) st)->lbuf, "CFE lbuf(close)");
} static int cf_encode_1d(stream_CFE_state *, const byte *, stream_cursor_write *, uint);

static int cf_encode_2d(stream_CFE_state *, const byte *, stream_cursor_write *, uint, const byte *);
static int s_CFE_process(stream_state * st, stream_cursor_read * pr, stream_cursor_write * pw, bool last)
{
    const byte *rlimit = pr->limit;
    byte *wlimit = pw->limit;
    int raster = ((stream_CFE_state *) st)->raster;
    int initial_count = raster << 3;
    int end_count = -((stream_CFE_state *) st)->Columns & 7;
    byte end_mask = 1 << (-((stream_CFE_state *) st)->Columns & 7);
    int status = 0;
    register uint bits;
    register int bits_left;
    bits = ((stream_CFE_state *) st)->bits, bits_left = ((stream_CFE_state *) st)->bits_left;
    while (pr->ptr < rlimit || ((stream_CFE_state *) st)->count != initial_count) {
	byte *end = ((stream_CFE_state *) st)->lbuf + raster - 1;
	do {
	} while (0);
	if (((stream_CFE_state *) st)->copy_count != 0) {
	    int rcount = rlimit - pr->ptr;
	    int ccount = (((rcount) < (((stream_CFE_state *) st)->copy_count)) ? (rcount) : (((stream_CFE_state *) st)->copy_count));
	    memcpy(((stream_CFE_state *) st)->lbuf + raster - ((stream_CFE_state *) st)->copy_count, pr->ptr + 1, ccount);
	    pr->ptr += ccount;
	    if ((((stream_CFE_state *) st)->copy_count -= ccount) != 0)
		goto out; {
		byte end_bit = *end & end_mask;
		byte not_bit = end_bit ^ end_mask;
		*end &= -end_mask;
		if (end_mask == 1)
		    end[1] = (end_bit ? 0x40 : 0x80);
		else if (end_mask == 2)
		    *end |= not_bit >> 1, end[1] = end_bit << 7;
		else
		    *end |= (not_bit >> 1) | (end_bit >> 2);
		}
	}
	if (((stream_CFE_state *) st)->new_line) {
	    byte *q = pw->ptr;
	    if (wlimit - q < ((stream_CFE_state *) st)->max_line_bytes) {
		status = 1;
		break;
	    }
	    if (((stream_CFE_state *) st)->EndOfLine) {
		const cfe_run *rp = (((stream_CFE_state *) st)->K <= 0 ? &cf_run_eol : ((stream_CFE_state *) st)->k_left > 1 ? &cf2_run_eol_2d : &cf2_run_eol_1d);
		cfe_run run;
		if (((stream_CFE_state *) st)->EncodedByteAlign) {
		    run = *rp;
		    run.code_length += (bits_left - 12) & 7;
		    if (run.code_length > 16)
			bits_left -= run.code_length & 7, run.code_length = 16;
		    rp = &run;
		}
		(((bits_left -= ((rp)->code_length)) >= 0 ? (bits += ((rp)->code) << bits_left) : (hc_put_code_proc((((stream_CFE_state *) st))->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + (((rp)->code) >> -bits_left))), bits = ((rp)->code) << (bits_left += ((1 << 2) * 8)))));
		pw->ptr = q;
	    } else if (((stream_CFE_state *) st)->EncodedByteAlign)
		bits_left &= ~7;
	    ((stream_CFE_state *) st)->run_color = 0;
	    ((stream_CFE_state *) st)->new_line = ((bool) 0);
	}
	((stream_CFE_state *) st)->bits = bits, ((stream_CFE_state *) st)->bits_left = bits_left;
	if (((stream_CFE_state *) st)->K > 0) {
	    if (--(((stream_CFE_state *) st)->k_left)) {
		status = cf_encode_2d(((stream_CFE_state *) st), ((stream_CFE_state *) st)->lbuf, pw, end_count, ((stream_CFE_state *) st)->lprev);
		if (status) {
		    ((stream_CFE_state *) st)->k_left++;
		}
	    } else {
		status = cf_encode_1d(((stream_CFE_state *) st), ((stream_CFE_state *) st)->lbuf, pw, end_count);
		if (status) {
		    ((stream_CFE_state *) st)->k_left++;
		} else
		    ((stream_CFE_state *) st)->k_left = ((stream_CFE_state *) st)->K;
	    }
	} else {
	    status = (((stream_CFE_state *) st)->K == 0 ? cf_encode_1d(((stream_CFE_state *) st), ((stream_CFE_state *) st)->lbuf, pw, end_count) : cf_encode_2d(((stream_CFE_state *) st), ((stream_CFE_state *) st)->lbuf, pw, end_count, ((stream_CFE_state *) st)->lprev));
	}
	bits = ((stream_CFE_state *) st)->bits, bits_left = ((stream_CFE_state *) st)->bits_left;
	if (status)
	    break;
	if (((stream_CFE_state *) st)->count == end_count) {
	    ((stream_CFE_state *) st)->count = initial_count;
	    ((stream_CFE_state *) st)->new_line = ((bool) 1);
	    if (((stream_CFE_state *) st)->K != 0) {
		byte *temp = ((stream_CFE_state *) st)->lbuf;
		((stream_CFE_state *) st)->lbuf = ((stream_CFE_state *) st)->lprev;
		((stream_CFE_state *) st)->lprev = temp;
	    }
	    ((stream_CFE_state *) st)->copy_count = raster;
	}
    }
    if (last && status == 0) {
	const cfe_run *rp = (((stream_CFE_state *) st)->K > 0 ? &cf2_run_eol_1d : &cf_run_eol);
	int i = (!((stream_CFE_state *) st)->EndOfBlock ? 0 : ((stream_CFE_state *) st)->K < 0 ? 2 : 6);
	uint bits_to_write = ((1 << 2) * 8) - bits_left + i * rp->code_length;
	byte *q = pw->ptr;
	if (wlimit - q < (bits_to_write + 7) >> 3) {
	    status = 1;
	    goto out;
	}
	if (((stream_CFE_state *) st)->EncodedByteAlign)
	    bits_left &= ~7;
	while (--i >= 0)
	    (((bits_left -= ((rp)->code_length)) >= 0 ? (bits += ((rp)->code) << bits_left) : (hc_put_code_proc((((stream_CFE_state *) st))->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + (((rp)->code) >> -bits_left))), bits = ((rp)->code) << (bits_left += ((1 << 2) * 8)))));
	pw->ptr = q = hc_put_last_bits_proc((stream_hc_state *) ((stream_CFE_state *) st), q, bits, bits_left);
	goto ns;
    }
  out:((stream_CFE_state *) st)->bits = bits, ((stream_CFE_state *) st)->bits_left = bits_left;
  ns:do {
    } while (0);
    return status;
}

static int cf_encode_1d(stream_CFE_state * ss, const byte * lbuf, stream_cursor_write * pw, uint end_count)
{
    uint count = ss->count;
    byte *q = pw->ptr;
    byte *wlimit = pw->limit;
    int rlen;
    int status = 0;
    register uint bits;
    register int bits_left; {
	register const byte *p = lbuf + ss->raster - ((count + 7) >> 3);
	byte invert = (ss->BlackIs1 ? 0 : 0xff);
	register uint data = *p++ ^ invert;
	bits = ss->bits, bits_left = ss->bits_left;
	while (count != end_count) {
	    if (wlimit - q < ss->max_run2_bytes) {
		ss->run_color = 0;
		status = 1;
		goto out;
	    }; {
		if ((rlen = byte_bit_run_length_neg[count & 7][data ^ 0xff]) >= 8) {
		    if (invert == 0) {
			if (p[0]) {
			    data = p[0];
			    p += 1;
			    rlen -= 8;
			} else if (p[1]) {
			    data = p[1];
			    p += 2;
			} else {
			    while (!(p[2] | p[3] | p[4] | p[5]))
				p += 4, rlen += 32;
			    if (p[2]) {
				data = p[2];
				p += 3;
				rlen += 8;
			    } else if (p[3]) {
				data = p[3];
				p += 4;
				rlen += 16;
			    } else if (p[4]) {
				data = p[4];
				p += 5;
				rlen += 24;
			    } else {
				data = p[5];
				p += 6;
				rlen += 32;
			    }
			}
		    } else {
			if (p[0] != 0xff) {
			    data = (byte) ~ p[0];
			    p += 1;
			    rlen -= 8;
			} else if (p[1] != 0xff) {
			    data = (byte) ~ p[1];
			    p += 2;
			} else {
			    while ((p[2] & p[3] & p[4] & p[5]) == 0xff)
				p += 4, rlen += 32;
			    if (p[2] != 0xff) {
				data = (byte) ~ p[2];
				p += 3;
				rlen += 8;
			    } else if (p[3] != 0xff) {
				data = (byte) ~ p[3];
				p += 4;
				rlen += 16;
			    } else if (p[4] != 0xff) {
				data = (byte) ~ p[4];
				p += 5;
				rlen += 24;
			    } else {
				data = (byte) ~ p[5];
				p += 6;
				rlen += 32;
			    }
			}
		    }
		    rlen += byte_bit_run_length_0[data ^ 0xff];
		}
		count -= rlen;
	    }; {
		cfe_run rr;
		if (rlen >= 64) {
		    while (rlen >= 2560 + 64) {
			rr = cf_white_make_up[40];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			rlen -= 2560;
		    }
		    rr = cf_white_make_up[rlen >> 6];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		    rlen &= 63;
		}
		rr = cf_white_termination[rlen];
		do {
		} while (0);
		(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
	    };
	    if (count == end_count)
		break; {
		if ((rlen = byte_bit_run_length_neg[count & 7][data]) >= 8) {
		    if (invert == 0)
			for (;; p += 4, rlen += 32) {
			    if (p[0] != 0xff) {
				data = p[0];
				p += 1;
				rlen -= 8;
				break;
			    }
			    if (p[1] != 0xff) {
				data = p[1];
				p += 2;
				break;
			    }
			    if (p[2] != 0xff) {
				data = p[2];
				p += 3;
				rlen += 8;
				break;
			    }
			    if (p[3] != 0xff) {
				data = p[3];
				p += 4;
				rlen += 16;
				break;
			    }
		    } else
			for (;; p += 4, rlen += 32) {
			    if (p[0]) {
				data = (byte) ~ p[0];
				p += 1;
				rlen -= 8;
				break;
			    }
			    if (p[1]) {
				data = (byte) ~ p[1];
				p += 2;
				break;
			    }
			    if (p[2]) {
				data = (byte) ~ p[2];
				p += 3;
				rlen += 8;
				break;
			    }
			    if (p[3]) {
				data = (byte) ~ p[3];
				p += 4;
				rlen += 16;
				break;
			    }
			}
		    rlen += byte_bit_run_length_0[data];
		}
		count -= rlen;
		}; {
		    cfe_run rr;
		    if (rlen >= 64) {
			while (rlen >= 2560 + 64) {
			    rr = cf_black_make_up[40];
			    do {
			    } while (0);
			    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			    rlen -= 2560;
			}
			rr = cf_black_make_up[rlen >> 6];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			rlen &= 63;
		    }
		    rr = cf_black_termination[rlen];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		};
	}
    }
  out:ss->bits = bits, ss->bits_left = bits_left;
    pw->ptr = q;
    ss->count = count;
    return status;
}

static int cf_encode_2d(stream_CFE_state * ss, const byte * lbuf, stream_cursor_write * pw, uint end_count, const byte * lprev)
{
    byte invert_white = (ss->BlackIs1 ? 0 : 0xff);
    byte invert = (ss->run_color ? ~invert_white : invert_white);
    register uint count = ss->count;
    const byte *p = lbuf + ss->raster - ((count + 7) >> 3);
    byte *q = pw->ptr;
    byte *wlimit = pw->limit;
    register uint data = *p++ ^ invert;
    int status = 0;
    register uint bits;
    register int bits_left;
    static const byte initial_count_bit[8] = { 0, 1, 2, 4, 8, 0x10, 0x20, 0x40 };
    static const byte further_count_bit[8] = { 0x80, 1, 2, 4, 8, 0x10, 0x20, 0x40 };
    const byte *count_bit = (count == ss->raster << 3 ? initial_count_bit : further_count_bit);
    bits = ss->bits, bits_left = ss->bits_left;
    while (count != end_count) {
	uint a0 = count;
	uint a1;
	int diff;
	uint prev_count = count;
	const byte *prev_p = p - lbuf + lprev;
	byte prev_data = prev_p[-1] ^ invert;
	int rlen;
	if (wlimit - q < ss->max_run3_bytes) {
	    ss->run_color = invert != invert_white;
	    status = 1;
	    goto out;
	}; {
	    if ((rlen = byte_bit_run_length_neg[count & 7][data ^ 0xff]) >= 8) {
		if (invert == 0) {
		    if (p[0]) {
			data = p[0];
			p += 1;
			rlen -= 8;
		    } else if (p[1]) {
			data = p[1];
			p += 2;
		    } else {
			while (!(p[2] | p[3] | p[4] | p[5]))
			    p += 4, rlen += 32;
			if (p[2]) {
			    data = p[2];
			    p += 3;
			    rlen += 8;
			} else if (p[3]) {
			    data = p[3];
			    p += 4;
			    rlen += 16;
			} else if (p[4]) {
			    data = p[4];
			    p += 5;
			    rlen += 24;
			} else {
			    data = p[5];
			    p += 6;
			    rlen += 32;
			}
		    }
		} else {
		    if (p[0] != 0xff) {
			data = (byte) ~ p[0];
			p += 1;
			rlen -= 8;
		    } else if (p[1] != 0xff) {
			data = (byte) ~ p[1];
			p += 2;
		    } else {
			while ((p[2] & p[3] & p[4] & p[5]) == 0xff)
			    p += 4, rlen += 32;
			if (p[2] != 0xff) {
			    data = (byte) ~ p[2];
			    p += 3;
			    rlen += 8;
			} else if (p[3] != 0xff) {
			    data = (byte) ~ p[3];
			    p += 4;
			    rlen += 16;
			} else if (p[4] != 0xff) {
			    data = (byte) ~ p[4];
			    p += 5;
			    rlen += 24;
			} else {
			    data = (byte) ~ p[5];
			    p += 6;
			    rlen += 32;
			}
		    }
		}
		rlen += byte_bit_run_length_0[data ^ 0xff];
	    }
	    count -= rlen;
	};
	a1 = count;
	if ((prev_data & count_bit[prev_count & 7])) { {
		if ((rlen = byte_bit_run_length_neg[prev_count & 7][prev_data]) >= 8) {
		    if (invert == 0)
			for (;; prev_p += 4, rlen += 32) {
			    if (prev_p[0] != 0xff) {
				prev_data = prev_p[0];
				prev_p += 1;
				rlen -= 8;
				break;
			    }
			    if (prev_p[1] != 0xff) {
				prev_data = prev_p[1];
				prev_p += 2;
				break;
			    }
			    if (prev_p[2] != 0xff) {
				prev_data = prev_p[2];
				prev_p += 3;
				rlen += 8;
				break;
			    }
			    if (prev_p[3] != 0xff) {
				prev_data = prev_p[3];
				prev_p += 4;
				rlen += 16;
				break;
			    }
		    } else
			for (;; prev_p += 4, rlen += 32) {
			    if (prev_p[0]) {
				prev_data = (byte) ~ prev_p[0];
				prev_p += 1;
				rlen -= 8;
				break;
			    }
			    if (prev_p[1]) {
				prev_data = (byte) ~ prev_p[1];
				prev_p += 2;
				break;
			    }
			    if (prev_p[2]) {
				prev_data = (byte) ~ prev_p[2];
				prev_p += 3;
				rlen += 8;
				break;
			    }
			    if (prev_p[3]) {
				prev_data = (byte) ~ prev_p[3];
				prev_p += 4;
				rlen += 16;
				break;
			    }
			}
		    rlen += byte_bit_run_length_0[prev_data];
		}
		prev_count -= rlen;
	};
	}
	count_bit = further_count_bit;
      pass:if (prev_count != end_count) { {
		if ((rlen = byte_bit_run_length_neg[prev_count & 7][prev_data ^ 0xff]) >= 8) {
		    if (invert == 0) {
			if (prev_p[0]) {
			    prev_data = prev_p[0];
			    prev_p += 1;
			    rlen -= 8;
			} else if (prev_p[1]) {
			    prev_data = prev_p[1];
			    prev_p += 2;
			} else {
			    while (!(prev_p[2] | prev_p[3] | prev_p[4] | prev_p[5]))
				prev_p += 4, rlen += 32;
			    if (prev_p[2]) {
				prev_data = prev_p[2];
				prev_p += 3;
				rlen += 8;
			    } else if (prev_p[3]) {
				prev_data = prev_p[3];
				prev_p += 4;
				rlen += 16;
			    } else if (prev_p[4]) {
				prev_data = prev_p[4];
				prev_p += 5;
				rlen += 24;
			    } else {
				prev_data = prev_p[5];
				prev_p += 6;
				rlen += 32;
			    }
			}
		    } else {
			if (prev_p[0] != 0xff) {
			    prev_data = (byte) ~ prev_p[0];
			    prev_p += 1;
			    rlen -= 8;
			} else if (prev_p[1] != 0xff) {
			    prev_data = (byte) ~ prev_p[1];
			    prev_p += 2;
			} else {
			    while ((prev_p[2] & prev_p[3] & prev_p[4] & prev_p[5]) == 0xff)
				prev_p += 4, rlen += 32;
			    if (prev_p[2] != 0xff) {
				prev_data = (byte) ~ prev_p[2];
				prev_p += 3;
				rlen += 8;
			    } else if (prev_p[3] != 0xff) {
				prev_data = (byte) ~ prev_p[3];
				prev_p += 4;
				rlen += 16;
			    } else if (prev_p[4] != 0xff) {
				prev_data = (byte) ~ prev_p[4];
				prev_p += 5;
				rlen += 24;
			    } else {
				prev_data = (byte) ~ prev_p[5];
				prev_p += 6;
				rlen += 32;
			    }
			}
		    }
		    rlen += byte_bit_run_length_0[prev_data ^ 0xff];
		}
		prev_count -= rlen;
	};
	}
	diff = a1 - prev_count;
	if (diff <= -2) {
	    if (prev_count != end_count) { {
		    if ((rlen = byte_bit_run_length_neg[prev_count & 7][prev_data]) >= 8) {
			if (invert == 0)
			    for (;; prev_p += 4, rlen += 32) {
				if (prev_p[0] != 0xff) {
				    prev_data = prev_p[0];
				    prev_p += 1;
				    rlen -= 8;
				    break;
				}
				if (prev_p[1] != 0xff) {
				    prev_data = prev_p[1];
				    prev_p += 2;
				    break;
				}
				if (prev_p[2] != 0xff) {
				    prev_data = prev_p[2];
				    prev_p += 3;
				    rlen += 8;
				    break;
				}
				if (prev_p[3] != 0xff) {
				    prev_data = prev_p[3];
				    prev_p += 4;
				    rlen += 16;
				    break;
				}
			} else
			    for (;; prev_p += 4, rlen += 32) {
				if (prev_p[0]) {
				    prev_data = (byte) ~ prev_p[0];
				    prev_p += 1;
				    rlen -= 8;
				    break;
				}
				if (prev_p[1]) {
				    prev_data = (byte) ~ prev_p[1];
				    prev_p += 2;
				    break;
				}
				if (prev_p[2]) {
				    prev_data = (byte) ~ prev_p[2];
				    prev_p += 3;
				    rlen += 8;
				    break;
				}
				if (prev_p[3]) {
				    prev_data = (byte) ~ prev_p[3];
				    prev_p += 4;
				    rlen += 16;
				    break;
				}
			    }
			rlen += byte_bit_run_length_0[prev_data];
		    }
		    prev_count -= rlen;
	    };
	    }
	    if (prev_count > a1) {
		do {
		} while (0);
		(((bits_left -= (4)) >= 0 ? (bits += (0x1) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((0x1) >> -bits_left))), bits = (0x1) << (bits_left += ((1 << 2) * 8)))));
		if (wlimit - q < ss->max_run3_bytes) {
		    ss->run_color = invert != invert_white;
		    status = 1;
		    goto pass_out;
		};
		a0 = prev_count;
		goto pass;
	      pass_out:count = prev_count;
		break;
	    }
	}
	if (diff <= 3 && diff >= -3) {
	    const cfe_run *cp;
	    do {
	    } while (0);
	    cp = &cf2_run_vertical[diff + 3];
	    (((bits_left -= ((cp)->code_length)) >= 0 ? (bits += ((cp)->code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + (((cp)->code) >> -bits_left))), bits = ((cp)->code) << (bits_left += ((1 << 2) * 8)))));
	    invert = ~invert;
	    data ^= 0xff;
	    continue;
	}
	if (count != end_count) { {
		if ((rlen = byte_bit_run_length_neg[count & 7][data]) >= 8) {
		    if (invert == 0)
			for (;; p += 4, rlen += 32) {
			    if (p[0] != 0xff) {
				data = p[0];
				p += 1;
				rlen -= 8;
				break;
			    }
			    if (p[1] != 0xff) {
				data = p[1];
				p += 2;
				break;
			    }
			    if (p[2] != 0xff) {
				data = p[2];
				p += 3;
				rlen += 8;
				break;
			    }
			    if (p[3] != 0xff) {
				data = p[3];
				p += 4;
				rlen += 16;
				break;
			    }
		    } else
			for (;; p += 4, rlen += 32) {
			    if (p[0]) {
				data = (byte) ~ p[0];
				p += 1;
				rlen -= 8;
				break;
			    }
			    if (p[1]) {
				data = (byte) ~ p[1];
				p += 2;
				break;
			    }
			    if (p[2]) {
				data = (byte) ~ p[2];
				p += 3;
				rlen += 8;
				break;
			    }
			    if (p[3]) {
				data = (byte) ~ p[3];
				p += 4;
				rlen += 16;
				break;
			    }
			}
		    rlen += byte_bit_run_length_0[data];
		}
		count -= rlen;
	};
	}
	(((bits_left -= (3)) >= 0 ? (bits += (1) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((1) >> -bits_left))), bits = (1) << (bits_left += ((1 << 2) * 8)))));
	a0 -= a1;
	a1 -= count;
	if (invert == invert_white) {
	    do {
	    } while (0); {
		cfe_run rr;
		if (a0 >= 64) {
		    while (a0 >= 2560 + 64) {
			rr = cf_white_make_up[40];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			a0 -= 2560;
		    }
		    rr = cf_white_make_up[a0 >> 6];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		    a0 &= 63;
		}
		rr = cf_white_termination[a0];
		do {
		} while (0);
		(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
	    }; {
		cfe_run rr;
		if (a1 >= 64) {
		    while (a1 >= 2560 + 64) {
			rr = cf_black_make_up[40];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			a1 -= 2560;
		    }
		    rr = cf_black_make_up[a1 >> 6];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		    a1 &= 63;
		}
		rr = cf_black_termination[a1];
		do {
		} while (0);
		(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
	    };
	} else {
	    do {
	    } while (0); {
		cfe_run rr;
		if (a0 >= 64) {
		    while (a0 >= 2560 + 64) {
			rr = cf_black_make_up[40];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			a0 -= 2560;
		    }
		    rr = cf_black_make_up[a0 >> 6];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		    a0 &= 63;
		}
		rr = cf_black_termination[a0];
		do {
		} while (0);
		(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
	    }; {
		cfe_run rr;
		if (a1 >= 64) {
		    while (a1 >= 2560 + 64) {
			rr = cf_white_make_up[40];
			do {
			} while (0);
			(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
			a1 -= 2560;
		    }
		    rr = cf_white_make_up[a1 >> 6];
		    do {
		    } while (0);
		    (((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
		    a1 &= 63;
		}
		rr = cf_white_termination[a1];
		do {
		} while (0);
		(((bits_left -= (rr.code_length)) >= 0 ? (bits += (rr.code) << bits_left) : (hc_put_code_proc((ss)->FirstBitLowOrder, q += ((1 << 2) * 8) >> 3, (bits + ((rr.code) >> -bits_left))), bits = (rr.code) << (bits_left += ((1 << 2) * 8)))));
	    };
	}
    }
  out:ss->bits = bits, ss->bits_left = bits_left;
    pw->ptr = q;
    ss->count = count;
    return status;
}
const stream_template s_CFE_template = { &st_CFE_state, s_CFE_init, s_CFE_process, 2, 15, s_CFE_release, s_CFE_set_defaults };
