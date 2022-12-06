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
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
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
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
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
int gs_initmatrix(gs_state *), gs_defaultmatrix(const gs_state *, gs_matrix *), gs_currentmatrix(const gs_state *, gs_matrix *), gs_setmatrix(gs_state *, const gs_matrix *), gs_translate(gs_state *, floatp, floatp), gs_scale(gs_state *, floatp, floatp), gs_rotate(gs_state *, floatp), gs_concat(gs_state *, const gs_matrix *);
int gs_setdefaultmatrix(gs_state *, const gs_matrix *), gs_currentcharmatrix(gs_state *, gs_matrix *, bool), gs_setcharmatrix(gs_state *, const gs_matrix *), gs_settocharmatrix(gs_state *);
int gs_transform(gs_state *, floatp, floatp, gs_point *), gs_dtransform(gs_state *, floatp, floatp, gs_point *), gs_itransform(gs_state *, floatp, floatp, gs_point *), gs_idtransform(gs_state *, floatp, floatp, gs_point *);
int gs_imager_setmatrix(gs_imager_state *, const gs_matrix *);
int gs_imager_idtransform(const gs_imager_state *, floatp, floatp, gs_point *);
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
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
extern int gx_cpath_intersect_slow(gs_state *, gx_clip_path *, gx_path *, int);
static void gx_clip_list_from_rectangle(gx_clip_list *, gs_fixed_rect *);
static int gx_clip_list_add_to_path(gx_clip_list *, gx_path *);
static gs_ptr_type_t clip_rect_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gx_clip_rect *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gx_clip_rect *) vptr)->prev);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void clip_rect_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((gx_clip_rect *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const gx_clip_rect *) vptr)->next, gcst);
    ((gx_clip_rect *) vptr)->prev = gs_reloc_struct_ptr((const void *) ((const gx_clip_rect *) vptr)->prev, gcst);
} const gs_memory_struct_type_t st_clip_rect = { sizeof(gx_clip_rect), "clip_rect", 0, 0, clip_rect_enum_ptrs, clip_rect_reloc_ptrs, 0 };

static gs_ptr_type_t clip_list_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gx_clip_list *) vptr)->head);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((gx_clip_list *) vptr)->tail);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void clip_list_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((gx_clip_list *) vptr)->head = gs_reloc_struct_ptr((const void *) ((const gx_clip_list *) vptr)->head, gcst);
    ((gx_clip_list *) vptr)->tail = gs_reloc_struct_ptr((const void *) ((const gx_clip_list *) vptr)->tail, gcst);
} static const gs_memory_struct_type_t st_clip_list = { sizeof(gx_clip_list), "clip_list", 0, 0, clip_list_enum_ptrs, clip_list_reloc_ptrs, 0 };

static gs_ptr_type_t clip_path_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void clip_path_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
const gs_memory_struct_type_t st_clip_path = { sizeof(gx_clip_path), "clip_path", 0, 0, clip_path_enum_ptrs, clip_path_reloc_ptrs, 0 };

static gs_ptr_type_t device_clip_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void device_clip_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
const gs_memory_struct_type_t st_device_clip = { sizeof(gx_device_clip), "gx_device_clip", 0, 0, device_clip_enum_ptrs, device_clip_reloc_ptrs, 0 };

static gs_ptr_type_t clip_path_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:;
	if (index < 2) {
	    gs_ptr_type_t ret = clip_list_enum_ptrs(&((gx_clip_path *) vptr)->list, sizeof(((gx_clip_path *) vptr)->list), index, pep);
	    if (ret == 0)
		ret = (&ptr_struct_procs), *pep = 0;
	    return ret;
	}
	return (*st_path.enum_ptrs) (&((gx_clip_path *) vptr)->path, sizeof(((gx_clip_path *) vptr)->path), index - 2, pep);
    }
}

static void clip_path_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	clip_list_reloc_ptrs(&((gx_clip_path *) vptr)->list, sizeof(gx_clip_list), gcst);
	(*st_path.reloc_ptrs) (&((gx_clip_path *) vptr)->path, sizeof(gx_path), gcst);
}
}

static gs_ptr_type_t device_clip_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:{
	    if (index < 2 + 1)
		return clip_list_enum_ptrs(&((gx_device_clip *) vptr)->list, sizeof(gx_clip_list), index - 1, pep);
	    return (*st_device_forward.enum_ptrs) (vptr, sizeof(gx_device_forward), index - (2 + 1), pep);
	}
    case 0:
	do {
	    *pep = (const void *) ((((gx_device_clip *) vptr)->current == &((gx_device_clip *) vptr)->list.single ? ((void *) 0) : (void *) ((gx_device_clip *) vptr)->current));
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void device_clip_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	if (((gx_device_clip *) vptr)->current == &((gx_device_clip *) vptr)->list.single)
	    ((gx_device_clip *) vptr)->current = &((gx_device_clip *) gs_reloc_struct_ptr(vptr, gcst))->list.single;
	else
	    ((gx_device_clip *) vptr)->current = gs_reloc_struct_ptr((const void *) ((const gx_device_clip *) vptr)->current, gcst);
	clip_list_reloc_ptrs(&((gx_device_clip *) vptr)->list, sizeof(gx_clip_list), gcst);
	(*st_device_forward.reloc_ptrs) (vptr, sizeof(gx_device_forward), gcst);
}
}
static const gx_clip_list clip_list_empty = { {0, 0, (-1 << ((1 << 2) * 8 - 1)), (~(-1 << ((1 << 2) * 8 - 1))), 0, 0}, 0, 0, 0, 0 };

int gx_cpath_path(gx_clip_path * pcpath, gx_path * ppath)
{
    if (!pcpath->segments_valid) {
	int code = gx_clip_list_add_to_path(&pcpath->list, &pcpath->path);
	if (code < 0)
	    return code;
	pcpath->segments_valid = 1;
    }
    *ppath = pcpath->path;
    return 0;
}

bool gx_cpath_inner_box(const gx_clip_path * pcpath, gs_fixed_rect * pbox)
{
    if (pcpath->list.outside) {
	pbox->p.x = pbox->p.y = pbox->q.x = pbox->q.y = 0;
	return ((bool) 0);
    } else {
	*pbox = pcpath->inner_box;
	return ((&pcpath->list)->count <= 1);
    }
}

bool gx_cpath_outer_box(const gx_clip_path * pcpath, gs_fixed_rect * pbox)
{
    if (pcpath->list.outside) {
	pbox->p.x = pbox->p.y = (-1L << ((1 << 2) * 8 - 1));
	pbox->q.x = pbox->q.y = (~(-1L << ((1 << 2) * 8 - 1)));
	return ((bool) 0);
    } else {
	*pbox = pcpath->outer_box;
	return ((&pcpath->list)->count <= 1);
    }
}

int gx_cpath_includes_rectangle(register const gx_clip_path * pcpath, fixed x0, fixed y0, fixed x1, fixed y1)
{
    return (x0 <= x1 ? (pcpath->inner_box.p.x <= x0 && x1 <= pcpath->inner_box.q.x) : (pcpath->inner_box.p.x <= x1 && x0 <= pcpath->inner_box.q.x)) && (y0 <= y1 ? (pcpath->inner_box.p.y <= y0 && y1 <= pcpath->inner_box.q.y) : (pcpath->inner_box.p.y <= y1 && y0 <= pcpath->inner_box.q.y));
}

int gx_cpath_set_outside(gx_clip_path * pcpath, bool outside)
{
    if (outside != pcpath->list.outside) {
	pcpath->id = gs_next_ids(1);
	pcpath->list.outside = outside;
    }
    return 0;
}

int gx_cpath_is_outside(const gx_clip_path * pcpath)
{
    return pcpath->list.outside;
}

void gx_cpath_release(gx_clip_path * pcpath)
{
    if (!pcpath->shares_list)
	gx_clip_list_free(&pcpath->list, pcpath->path.memory);
    gx_path_release(&pcpath->path);
}

void gx_cpath_share(gx_clip_path * pcpath)
{
    gx_path_share(&pcpath->path);
    pcpath->shares_list = 1;
} void gx_cpath_set_outer_box(gx_clip_path * pcpath)
{
    pcpath->outer_box.p.x = ((pcpath->path.bbox.p.x) & (-1L << 12));
    pcpath->outer_box.p.y = ((pcpath->path.bbox.p.y) & (-1L << 12));
    pcpath->outer_box.q.x = (((pcpath->path.bbox.q.x) + ((1 << 12) - 1)) & (-1L << 12));
    pcpath->outer_box.q.y = (((pcpath->path.bbox.q.y) + ((1 << 12) - 1)) & (-1L << 12));
} int gx_cpath_init(gx_clip_path * pcpath, gs_memory_t * mem)
{
    static gs_fixed_rect null_rect = { {0, 0}, {0, 0} };
    return gx_cpath_from_rectangle(pcpath, &null_rect, mem);
}

int gx_cpath_from_rectangle(gx_clip_path * pcpath, gs_fixed_rect * pbox, gs_memory_t * mem)
{
    gx_clip_list_from_rectangle(&pcpath->list, pbox);
    pcpath->inner_box = *pbox;
    pcpath->segments_valid = 0;
    pcpath->shares_list = 0;
    gx_path_init(&pcpath->path, mem);
    pcpath->path.bbox = *pbox;
    gx_cpath_set_outer_box(pcpath);
    pcpath->id = gs_next_ids(1);
    return 0;
}

int gx_cpath_intersect(gs_state * pgs, gx_clip_path * pcpath, gx_path * ppath, int rule)
{
    gs_fixed_rect old_box, new_box;
    int code;
    if (gx_cpath_inner_box(pcpath, &old_box) && ((code = gx_path_is_rectangle(ppath, &new_box)) || gx_path_is_void(ppath))) {
	bool changed = ((bool) 0);
	bool outside = pcpath->list.outside;
	if (!code) {
	    if (gx_path_current_point(ppath, &new_box.p) < 0) {
		gs_point origin;
		gs_transform(pgs, 0.0, 0.0, &origin);
		new_box.p.x = ((fixed) ((origin.x) * (float) (1 << 12)));
		new_box.p.y = ((fixed) ((origin.y) * (float) (1 << 12)));
		gx_path_add_point(ppath, new_box.p.x, new_box.p.y);
	    }
	    new_box.q = new_box.p;
	} else {
	    if (old_box.p.x > new_box.p.x)
		new_box.p.x = old_box.p.x, changed = ((bool) 1);
	    if (old_box.p.y > new_box.p.y)
		new_box.p.y = old_box.p.y, changed = ((bool) 1);
	    if (old_box.q.x < new_box.q.x)
		new_box.q.x = old_box.q.x, changed = ((bool) 1);
	    if (old_box.q.y < new_box.q.y)
		new_box.q.y = old_box.q.y, changed = ((bool) 1);
	    if (new_box.q.x < new_box.p.x)
		new_box.q.x = new_box.p.x;
	    if (new_box.q.y < new_box.p.y)
		new_box.q.y = new_box.p.y;
	    if (changed) {
		register segment *pseg = (segment *) ppath->first_subpath;
		pseg->pt.x = new_box.p.x, pseg->pt.y = new_box.p.y;
		pseg = pseg->next;
		pseg->pt.x = new_box.q.x, pseg->pt.y = new_box.p.y;
		pseg = pseg->next;
		pseg->pt.x = new_box.q.x, pseg->pt.y = new_box.q.y;
		pseg = pseg->next;
		pseg->pt.x = new_box.p.x, pseg->pt.y = new_box.q.y;
		pseg = pseg->next;
		if (pseg != 0)
		    pseg->pt.x = new_box.p.x, pseg->pt.y = new_box.p.y;
	    }
	}
	ppath->bbox = new_box;
	gx_cpath_release(pcpath);
	gx_clip_list_from_rectangle(&pcpath->list, &new_box);
	pcpath->list.outside = outside;
	pcpath->inner_box = new_box;
	pcpath->path = *ppath;
	gx_cpath_set_outer_box(pcpath);
	pcpath->segments_valid = 1;
	pcpath->shares_list = 0;
	code = 1;
	pcpath->id = gs_next_ids(1);
    } else {
	code = gx_cpath_intersect_slow(pgs, pcpath, ppath, rule);
    }
    return code;
}

int gx_cpath_scale_exp2(gx_clip_path * pcpath, int log2_scale_x, int log2_scale_y)
{
    int code = gx_path_scale_exp2(&pcpath->path, log2_scale_x, log2_scale_y);
    gx_clip_rect *pr;
    if (code < 0)
	return code;
    gx_rect_scale_exp2(&pcpath->inner_box, log2_scale_x, log2_scale_y);
    gx_rect_scale_exp2(&pcpath->outer_box, log2_scale_x, log2_scale_y);
    pr = pcpath->list.head;
    if (pr == 0)
	pr = &pcpath->list.single;
    for (; pr != 0; pr = pr->next)
	if (pr != pcpath->list.head && pr != pcpath->list.tail) {
	    if (pr->xmin != (-1 << ((1 << 2) * 8 - 1)) && pr->xmin != (~(-1 << ((1 << 2) * 8 - 1))))
		pr->xmin = (log2_scale_x >= 0 ? pr->xmin << log2_scale_x : pr->xmin >> -log2_scale_x);
	    if (pr->xmax != (-1 << ((1 << 2) * 8 - 1)) && pr->xmax != (~(-1 << ((1 << 2) * 8 - 1))))
		pr->xmax = (log2_scale_x >= 0 ? pr->xmax << log2_scale_x : pr->xmax >> -log2_scale_x);
	    if (pr->ymin != (-1 << ((1 << 2) * 8 - 1)) && pr->ymin != (~(-1 << ((1 << 2) * 8 - 1))))
		pr->ymin = (log2_scale_y >= 0 ? pr->ymin << log2_scale_y : pr->ymin >> -log2_scale_y);
	    if (pr->ymax != (-1 << ((1 << 2) * 8 - 1)) && pr->ymax != (~(-1 << ((1 << 2) * 8 - 1))))
		pr->ymax = (log2_scale_y >= 0 ? pr->ymax << log2_scale_y : pr->ymax >> -log2_scale_y);
	}
    pcpath->id = gs_next_ids(1);
    return 0;
}

void gx_clip_list_init(gx_clip_list * clp)
{
    *clp = clip_list_empty;
} static void gx_clip_list_from_rectangle(register gx_clip_list * clp, register gs_fixed_rect * rp)
{
    gx_clip_list_init(clp);
    if (rp->p.x > rp->q.x) {
	fixed t = rp->p.x;
	rp->p.x = rp->q.x;
	rp->q.x = t;
    }
    if (rp->p.y > rp->q.y) {
	fixed t = rp->p.y;
	rp->p.y = rp->q.y;
	rp->q.y = t;
    }
    clp->single.xmin = ((int) ((rp->p.x) >> (12)));
    clp->single.ymin = ((int) ((rp->p.y) >> (12)));
    clp->single.xmax = ((int) (((rp->q.x) + ((1 << 12) - 1)) >> (12)));
    clp->single.ymax = ((int) (((rp->q.y) + ((1 << 12) - 1)) >> (12)));
    clp->count = 1;
    clp->outside = ((bool) 0);
} static int gx_clip_list_add_to_path(gx_clip_list * clp, gx_path * ppath)
{
    gx_clip_rect *rp;
    int code = -1;
    gx_clip_rect *head = (clp->count <= 1 ? &clp->single : clp->head);
    gx_clip_rect *visit;
    gx_clip_rect *look;
    enum { visit_left = 1, visit_right = 2 } first_visit;
    for (rp = head; rp != 0; rp = rp->next)
	if (rp->xmin < rp->xmax && rp->ymin < rp->ymax)
	    rp->to_visit = visit_left | visit_right;
    for (visit = head; visit != 0; visit = visit->next) {
	if (!visit->to_visit)
	    continue;
	rp = visit;
	if (visit->to_visit & visit_left) {
	    code = gx_path_add_point(ppath, ((fixed) (visit->xmin) << 12), ((fixed) (visit->ymax) << 12));
	    if (code < 0)
		return code;
	    first_visit = visit_left;
	    goto left;
	} else {
	    code = gx_path_add_point(ppath, ((fixed) (visit->xmax) << 12), ((fixed) (visit->ymin) << 12));
	    if (code < 0)
		return code;
	    first_visit = visit_right;
	    goto right;
	}
      left:rp->to_visit &= ~visit_left;
	for (look = rp; (look = look->next) != 0 && (look->ymin == rp->ymin || (look->ymin == rp->ymax && look->xmax <= rp->xmin)););
	if (look == 0 || look->ymin > rp->ymax || look->xmin >= rp->xmax) {
	    code = gx_path_add_line_notes(ppath, ((fixed) (rp->xmax) << 12), ((fixed) (rp->ymax) << 12), sn_none);
	    if (code < 0)
		return code;
	    if (rp == visit && first_visit == visit_right)
		goto close;
	    goto right1;
	}
	{
	    gx_clip_rect *prev = rp->prev;
	    if (prev->ymax == rp->ymax && look->xmin < prev->xmax) {
		code = gx_path_add_line_notes(ppath, ((fixed) (prev->xmax) << 12), ((fixed) (rp->ymax) << 12), sn_none);
		if (code < 0)
		    return code;
		rp = prev;
		if (rp == visit && first_visit == visit_right)
		    goto close;
		goto right1;
	    }
	}
	code = gx_path_add_line_notes(ppath, ((fixed) (look->xmin) << 12), ((fixed) (look->ymin) << 12), sn_none);
	if (code < 0)
	    return code;
	rp = look;
	if (rp == visit && first_visit == visit_left)
	    goto close;
      left1:code = gx_path_add_line_notes(ppath, ((fixed) (rp->xmin) << 12), ((fixed) (rp->ymax) << 12), sn_none);
	if (code < 0)
	    return code;
	goto left;
      right:rp->to_visit &= ~visit_right;
	for (look = rp; (look = look->prev) != 0 && (look->ymax == rp->ymax || (look->ymax == rp->ymin && look->xmin >= rp->xmax)););
	if (look == 0 || look->ymax < rp->ymin || look->xmax <= rp->xmin) {
	    code = gx_path_add_line_notes(ppath, ((fixed) (rp->xmin) << 12), ((fixed) (rp->ymin) << 12), sn_none);
	    if (code < 0)
		return code;
	    if (rp == visit && first_visit == visit_left)
		goto close;
	    goto left1;
	}
	{
	    gx_clip_rect *next = rp->next;
	    if (next->ymin == rp->ymin && look->xmax > next->xmin) {
		code = gx_path_add_line_notes(ppath, ((fixed) (next->xmin) << 12), ((fixed) (rp->ymin) << 12), sn_none);
		if (code < 0)
		    return code;
		rp = next;
		if (rp == visit && first_visit == visit_left)
		    goto close;
		goto left1;
	    }
	}
	code = gx_path_add_line_notes(ppath, ((fixed) (look->xmax) << 12), ((fixed) (look->ymax) << 12), sn_none);
	if (code < 0)
	    return code;
	rp = look;
	if (rp == visit && first_visit == visit_right)
	    goto close;
      right1:code = gx_path_add_line_notes(ppath, ((fixed) (rp->xmax) << 12), ((fixed) (rp->ymin) << 12), sn_none);
	if (code < 0)
	    return code;
	goto right;
      close:code = gx_path_close_subpath_notes(ppath, sn_none);
	if (code < 0)
	    return code;
    }
    if (code < 0) {
	code = gx_path_add_point(ppath, 0L, 0L);
    }
    return code;
}

void gx_clip_list_free(gx_clip_list * clp, gs_memory_t * mem)
{
    gx_clip_rect *rp = clp->tail;
    while (rp != 0) {
	gx_clip_rect *prev = rp->prev;
	(*(mem)->procs.free_object) (mem, rp, "gx_clip_list_free");
	rp = prev;
    }
    gx_clip_list_init(clp);
}

static int clip_open(gx_device * dev);
static int clip_fill_rectangle(gx_device * dev, int x, int y, int width, int height, gx_color_index color);
static int clip_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
static int clip_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
static int clip_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
static int clip_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
static int clip_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
static int clip_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
static int clip_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
static void clip_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
static const gx_device_clip gs_clip_device = { sizeof(gx_device_clip), 0, "clipper", 0, 0, 0, 0, {(1 == 32 ? 4 : 1 > 1 ? 3 : 1), ((1 > 1) & (1 < 8) ? 8 : 1), (1 >= 8 ? 255 : 1), (1 >= 8 ? 255 : 1 > 1 ? 1 : 0), (1 >= 8 ? 5 : 2), (1 >= 8 ? 5 : 1 > 1 ? 2 : 0)}
, 0, 0, {(((0) * 72.0 + 0.5) - 0.5) / (1), (((0) * 72.0 + 0.5) - 0.5) / (1)}
, {0, 0, 0, 0}
, 0, {1, 1}
, {1, 1}
, {0, 0}
, {0, 0, 0, 0}
, 0, 0, 0, {gx_default_install, gx_default_begin_page, gx_default_end_page}
, {clip_open, gx_forward_get_initial_matrix, gx_default_sync_output, gx_default_output_page, gx_default_close_device, gx_forward_map_rgb_color, gx_forward_map_color_rgb, clip_fill_rectangle, gx_default_tile_rectangle, clip_copy_mono, clip_copy_color, gx_default_draw_line, clip_get_bits, gx_forward_get_params, gx_forward_put_params, gx_forward_map_cmyk_color, gx_forward_get_xfont_procs, gx_forward_get_xfont_device, gx_forward_map_rgb_alpha_color, gx_forward_get_page_device, gx_forward_get_alpha_bits, clip_copy_alpha, gx_forward_get_band, gx_default_copy_rop, gx_default_fill_path, gx_default_stroke_path, clip_fill_mask, gx_default_fill_trapezoid, gx_default_fill_parallelogram, gx_default_fill_triangle, gx_default_draw_thin_line, gx_default_begin_image, gx_default_image_data, gx_default_end_image, clip_strip_tile_rectangle, clip_strip_copy_rop, clip_get_clipping_box}
};

void gx_make_clip_translate_device(gx_device_clip * dev, void *container, const gx_clip_list * list, int tx, int ty)
{
    *dev = gs_clip_device;
    dev->list = *list;
    dev->translation.x = tx;
    dev->translation.y = ty;
} void gx_make_clip_path_device(gx_device_clip * dev, const gx_clip_path * pcpath)
{
    gx_make_clip_translate_device(dev, ((void *) 0), &pcpath->list, 0, 0);
} static int clip_open(register gx_device * dev)
{
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    ((gx_device_clip *) dev)->current = (((gx_device_clip *) dev)->list.head == 0 ? &((gx_device_clip *) dev)->list.single : ((gx_device_clip *) dev)->list.head);
    ((gx_device_clip *) dev)->color_info = tdev->color_info;
    ((gx_device_clip *) dev)->width = tdev->width;
    ((gx_device_clip *) dev)->height = tdev->height;
    return 0;
}

static int clip_fill_rectangle(gx_device * dev, int x, int y, int w, int h, gx_color_index color)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*fill) (gx_device * dev, int x, int y, int width, int height, gx_color_index color) = ((tdev)->std_procs.fill_rectangle);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*fill) (tdev, x, y, w, h, color);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*fill) (tdev, xc, yc, xec - xc, yec - yc, color)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    do {
		    } while (0);
		    xec = xe;
		    code = (*fill) (tdev, xc, yc, xec - xc, yec - yc, color);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    do {
		    } while (0);
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*fill) (tdev, xc, yc, xec - xc, yec - yc, color);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*fill) (tdev, xc, yc, xec - xc, yec - yc, color);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*fill) (tdev, xc, yc, xec - xc, yec - yc, color);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    do {
		    } while (0);
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*fill) (tdev, xc, yc, xec - xc, yec - yc, color);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_copy_mono(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index color0, gx_color_index color1)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*copy) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1) = ((tdev)->std_procs.copy_mono);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*copy) (tdev, data, sourcex, raster, id, x, y, w, h, color0, color1);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    data += (yc - yp) * raster;
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    data += (yc - yp) * raster;
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    data += (yc - yp) * raster;
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color0, color1);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_copy_color(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*copy) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height) = ((tdev)->std_procs.copy_color);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*copy) (tdev, data, sourcex, raster, id, x, y, w, h);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    data += (yc - yp) * raster;
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    data += (yc - yp) * raster;
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    data += (yc - yp) * raster;
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_copy_alpha(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index color, int depth)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*copy) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth) = ((tdev)->std_procs.copy_alpha);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*copy) (tdev, data, sourcex, raster, id, x, y, w, h, color, depth);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    data += (yc - yp) * raster;
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    data += (yc - yp) * raster;
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    data += (yc - yp) * raster;
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*copy) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, color, depth);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_fill_mask(gx_device * dev, const byte * data, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*fill) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath) = ((tdev)->std_procs.fill_mask);
    if (pcpath != 0)
	return gx_default_fill_mask(dev, data, sourcex, raster, id, x, y, w, h, pdcolor, depth, lop, pcpath);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*fill) (tdev, data, sourcex, raster, id, x, y, w, h, pdcolor, depth, lop, ((void *) 0));
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0))) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    data += (yc - yp) * raster;
		    xec = xe;
		    code = (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0));
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    data += (yc - yp) * raster;
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0));
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0));
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0));
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    data += (yc - yp) * raster;
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*fill) (tdev, data, sourcex + xc - x, raster, 0L, xc, yc, xec - xc, yec - yc, pdcolor, depth, lop, ((void *) 0));
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data)
{
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    return (*((tdev)->std_procs.get_bits)) (tdev, y - ((gx_device_clip *) dev)->translation.y, data, actual_data);
}

static int clip_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int w, int h, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*fill) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y) = ((tdev)->std_procs.strip_tile_rectangle);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*fill) (tdev, tiles, x, y, w, h, color0, color1, phase_x, phase_y);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    do {
		    } while (0);
		    xec = xe;
		    code = (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    do {
		    } while (0);
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    do {
		    } while (0);
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*fill) (tdev, tiles, xc, yc, xec - xc, yec - yc, color0, color1, phase_x, phase_y);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static int clip_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint raster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int w, int h, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    register gx_clip_rect *rptr = ((gx_device_clip *) dev)->current;
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    bool outside = ((gx_device_clip *) dev)->list.outside;
    int (*copy) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = ((tdev)->std_procs.strip_copy_rop);
    x += ((gx_device_clip *) dev)->translation.x;
    y += ((gx_device_clip *) dev)->translation.y;
    if ((!outside && y >= rptr->ymin && y + h <= rptr->ymax && x >= rptr->xmin && x + w <= rptr->xmax))
	return (*copy) (tdev, sdata, sourcex, raster, id, scolors, textures, tcolors, x, y, w, h, phase_x, phase_y, lop);
    if (w <= 0 || h <= 0)
	return 0;
    ((void) (0));
    do {
    } while (0); {
	const int xe = x + w, ye = y + h;
	int xc, xec, yc, yec, yp, yep;
	int code;
	if ((y) >= rptr->ymax) {
	    if ((rptr = rptr->next) != 0)
		while (((void) (0)), (y) >= rptr->ymax)
		    rptr = rptr->next;
	} else
	    while (rptr->prev != 0 && (y) < rptr->prev->ymax) {
		((void) (0));
		rptr = rptr->prev;
	    };
	if (rptr == 0 || (yc = rptr->ymin) >= ye) {
	    if (((gx_device_clip *) dev)->list.count > 1)
		((gx_device_clip *) dev)->current = (rptr != 0 ? rptr : y >= ((gx_device_clip *) dev)->current->ymax ? ((gx_device_clip *) dev)->list.tail : ((gx_device_clip *) dev)->list.head);
	    return (outside ? (xc = x, xec = xe, yc = y, yec = ye, (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop)) : 0);
	}
	((gx_device_clip *) dev)->current = rptr;
	if (yc < y)
	    yc = y;
	yp = y;
	if (outside) {
	    for (yep = y;;) {
		const int ymax = rptr->ymax;
		xc = x;
		if (yc > yep) {
		    yec = yc, yc = yep;
		    sdata += (yc - yp) * raster;
		    xec = xe;
		    code = (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop);
		    if (code < 0)
			return code;
		    yp = yep;
		    yc = yec;
		    sdata += (yc - yp) * raster;
		}
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		do {
		    xec = rptr->xmin;
		    if (xec > xc) {
			if (xec > xe)
			    xec = xe;
			code = (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop);
			if (code < 0)
			    return code;
			xc = rptr->xmax;
			if (xc >= xe)
			    xc = (~(-1 << ((1 << 2) * 8 - 1)));
		    } else {
			xec = rptr->xmax;
			if (xec > xc)
			    xc = xec;
		    }
		} while ((rptr = rptr->next) != 0 && rptr->ymax == ymax);
		if (xc < xe) {
		    xec = xe;
		    code = (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop);
		    if (code < 0)
			return code;
		}
		yp = yc;
		yep = yec;
		if (rptr == 0 || (yc = rptr->ymin) >= ye)
		    break;
	    }
	    if (yep < ye) {
		xc = x, xec = xe, yc = yep, yec = ye;
		code = (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop);
		if (code < 0)
		    return code;
	    }
	} else
	    for (;;) {
		const int ymax = rptr->ymax;
		gx_clip_rect *nptr;
		yec = (((ymax) < (ye)) ? (ymax) : (ye));
		if (yc > yp)
		    sdata += (yc - yp) * raster;
		do {
		} while (0);
		do {
		    xc = rptr->xmin;
		    xec = rptr->xmax;
		    if (xc < x)
			xc = x;
		    if (xec > xe)
			xec = xe;
		    if (xec > xc) {
			do {
			} while (0);
			do {
			} while (0);
			((void) (0));
			if (xec - xc == w) {
			    while ((nptr = rptr->next) != 0 && nptr->ymin == yec && nptr->ymax <= ye && nptr->xmin <= x && nptr->xmax >= xe)
				yec = nptr->ymax, rptr = nptr;
			} else
			    nptr = rptr->next;
			code = (*copy) (tdev, sdata, sourcex + xc - x, raster, 0L, scolors, textures, tcolors, xc, yc, xec - xc, yec - yc, phase_x, phase_y, lop);
			if (code < 0)
			    return code;
		    } else {
			((void) (0));
			nptr = rptr->next;
		}} while ((rptr = nptr) != 0 && rptr->ymax == ymax);
		if (rptr == 0 || (yec = rptr->ymin) >= ye)
		    break;
		yp = yc;
		yc = yec;
	    }
    }
    return 0;
}

static void clip_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox)
{
    gx_device *tdev = ((gx_device_clip *) dev)->target;
    gs_fixed_rect tbox, cbox;
    fixed tx = ((fixed) (((gx_device_clip *) dev)->translation.x) << 12), ty = ((fixed) (((gx_device_clip *) dev)->translation.y) << 12);
    (*((tdev)->std_procs.get_clipping_box)) (tdev, &tbox);
    if (((gx_device_clip *) dev)->list.outside || ((gx_device_clip *) dev)->list.count == 0) {
	cbox = tbox;
    } else if (((gx_device_clip *) dev)->list.count == 1) {
	cbox.p.x = ((fixed) (((gx_device_clip *) dev)->list.single.xmin) << 12);
	cbox.p.y = ((fixed) (((gx_device_clip *) dev)->list.single.ymin) << 12);
	cbox.q.x = ((fixed) (((gx_device_clip *) dev)->list.single.xmax) << 12);
	cbox.q.y = ((fixed) (((gx_device_clip *) dev)->list.single.ymax) << 12);
    } else {
	cbox.p.x = tbox.p.x;
	cbox.p.y = ((fixed) (((gx_device_clip *) dev)->list.head->next->ymin) << 12);
	cbox.q.x = tbox.q.x;
	cbox.q.y = ((fixed) (((gx_device_clip *) dev)->list.tail->prev->ymax) << 12);
    }
    {
	if (cbox.p.x > tbox.p.x)
	    tbox.p.x = cbox.p.x;
	if (cbox.q.x < tbox.q.x)
	    tbox.q.x = cbox.q.x;
	if (cbox.p.y > tbox.p.y)
	    tbox.p.y = cbox.p.y;
	if (cbox.q.y < tbox.q.y)
	    tbox.q.y = cbox.q.y;
    };
    if (tbox.p.x != (-1L << ((1 << 2) * 8 - 1)))
	tbox.p.x -= tx;
    if (tbox.p.y != (-1L << ((1 << 2) * 8 - 1)))
	tbox.p.y -= ty;
    if (tbox.q.x != (~(-1L << ((1 << 2) * 8 - 1))))
	tbox.q.x -= tx;
    if (tbox.q.y != (~(-1L << ((1 << 2) * 8 - 1))))
	tbox.q.y -= ty;
    *pbox = tbox;
}
