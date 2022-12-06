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
extern const char *gs_error_names[];
void gs_exit_with_code(int exit_status, int code);
void gs_exit(int exit_status);
extern int gs_exit_status;
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
extern const gs_memory_struct_type_t st_refs;
ref_packed *gs_reloc_ref_ptr(const ref_packed *, gc_state_t *);
void gs_reloc_refs(ref_packed * from, ref_packed * to, gc_state_t * gcst);
void ref_struct_clear_marks(void *pre, uint size);
gs_ptr_type_t ref_struct_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
void ref_struct_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
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
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
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
struct alloc_save_s {
    gs_ref_memory_t state;
    gs_dual_memory_t *dmem;
    bool restore_names;
    bool is_current;
    ulong id;
    void *client_data;
};
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
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
extern void file_save(void);
extern void file_restore(const alloc_save_t *, const gs_memory_t *);
extern void file_forget_save(const alloc_save_t *);
extern void font_restore(const alloc_save_t *);
static gs_ptr_type_t save_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return (*st_ref_memory.enum_ptrs) (vptr, size, index - (1), pep);
    case 0:
	do {
	    *pep = (const void *) (((alloc_save_t *) vptr)->client_data);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void save_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{
    (*st_ref_memory.reloc_ptrs) (vptr, size, gcst);
    ((alloc_save_t *) vptr)->client_data = gs_reloc_struct_ptr((const void *) ((const alloc_save_t *) vptr)->client_data, gcst);
} static const gs_memory_struct_type_t st_alloc_save = { sizeof(alloc_save_t), "alloc_save", 0, 0, save_enum_ptrs, save_reloc_ptrs, 0 };

static const long max_repeated_scan = 100000;
typedef struct alloc_change_s alloc_change_t;
struct alloc_change_s {
    alloc_change_t *next;
    ref_packed *where;
    ref contents;
    short offset;
};
static void change_clear_marks(void *vptr, uint size)
{
    if ((*(const ref_packed *) (&((alloc_change_t *) vptr)->contents) >= ((ref_packed) (2) << 13)))
	(*((ref_packed *) & ((alloc_change_t *) vptr)->contents) &= ~(1 << 12));
    else
	((&((alloc_change_t *) vptr)->contents)->tas.type_attrs &= ~(1));
}

static gs_ptr_type_t change_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((alloc_change_t *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	if (((alloc_change_t *) vptr)->offset >= 0) {
	    *pep = (byte *) ((alloc_change_t *) vptr)->where - ((alloc_change_t *) vptr)->offset;
	    return (&ptr_struct_procs);
	} else {
	    *pep = ((alloc_change_t *) vptr)->where;
	    return (&ptr_ref_procs);
	}
    case 2:
	*pep = &((alloc_change_t *) vptr)->contents;
	return (&ptr_ref_procs);
    }
}

static void change_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	((alloc_change_t *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const alloc_change_t *) vptr)->next, gcst);
	switch (((alloc_change_t *) vptr)->offset) {
	case (-2):
	    break;
	case (-1):
	    ((alloc_change_t *) vptr)->where = gs_reloc_ref_ptr(((alloc_change_t *) vptr)->where, gcst);
	    break;
	default:{
		byte *obj = (byte *) ((alloc_change_t *) vptr)->where - ((alloc_change_t *) vptr)->offset;
		byte *robj = gs_reloc_struct_ptr(obj, gcst);
		((alloc_change_t *) vptr)->where = (ref_packed *) (robj + ((alloc_change_t *) vptr)->offset);
	    }
	    break;
	}
	if ((*(const ref_packed *) (&((alloc_change_t *) vptr)->contents) >= ((ref_packed) (2) << 13)))
	    (*((ref_packed *) & ((alloc_change_t *) vptr)->contents) &= ~(1 << 12));
	else {
	    gs_reloc_refs((ref_packed *) & ((alloc_change_t *) vptr)->contents, (ref_packed *) (&((alloc_change_t *) vptr)->contents + 1), gcst);
	    ((&((alloc_change_t *) vptr)->contents)->tas.type_attrs &= ~(1));
	}
}
}
static const gs_memory_struct_type_t st_alloc_change = { sizeof(alloc_change_t), "alloc_change", 0, change_clear_marks, change_enum_ptrs, change_reloc_ptrs, 0 };

static void restore_resources(alloc_save_t *, gs_ref_memory_t *);
static void restore_free(gs_ref_memory_t *);
static long save_set_new(gs_ref_memory_t *, bool);
static void save_set_new_changes(gs_ref_memory_t *, bool);
void alloc_save_init(gs_dual_memory_t * dmem)
{
    dmem->save_level = 0;
    ((dmem)->test_mask = ~0, (dmem)->new_mask = 0);
} static alloc_save_t *alloc_save_space(gs_ref_memory_t *, gs_dual_memory_t *);

ulong alloc_save_state(gs_dual_memory_t * dmem, void *cdata)
{
    gs_ref_memory_t *lmem = dmem->spaces.named.local;
    gs_ref_memory_t *gmem = dmem->spaces.named.global;
    ulong sid = gs_next_ids(2);
    bool global = dmem->save_level == 0 && gmem != lmem && gmem->num_contexts == 1;
    alloc_save_t *gsave = (global ? alloc_save_space(gmem, dmem) : (alloc_save_t *) 0);
    alloc_save_t *lsave = alloc_save_space(lmem, dmem);
    if (lsave == 0 || (global &&gsave == 0)) {
	if (lsave != 0) {
	    chunk_t *inner = (lmem)->pcc;
	    (*((gs_memory_t *) (lmem))->procs.free_object) ((gs_memory_t *) (lmem), lsave, "alloc_save_state(local save)");
	    (*((lmem)->parent)->procs.free_object) ((lmem)->parent, inner, "alloc_save_state(local inner)");
	};
	if (gsave != 0) {
	    chunk_t *inner = (gmem)->pcc;
	    (*((gs_memory_t *) (gmem))->procs.free_object) ((gs_memory_t *) (gmem), gsave, "alloc_save_state(global save)");
	    (*((gmem)->parent)->procs.free_object) ((gmem)->parent, inner, "alloc_save_state(global inner)");
	};
	return 0;
    }
    if (gsave != 0) {
	gsave->id = sid + 1;
	gsave->client_data = 0;
	do {
	} while (0);;
	lsave->restore_names = gsave->restore_names;
	gsave->restore_names = ((bool) 0);
    }
    lsave->id = sid;
    lsave->client_data = cdata;
    do {
    } while (0);;
    if (dmem->save_level != 0) {
	long scanned = save_set_new(&lsave->state, ((bool) 0));
	if (scanned > max_repeated_scan) {
	    alloc_save_t *rsave;
	    file_save();
	    rsave = alloc_save_space(lmem, dmem);
	    if (rsave != 0) {
		rsave->id = sid;
		rsave->client_data = cdata;
		do {
		} while (0);;
		lsave->id = 0;
		lsave->client_data = 0;
		rsave->state.inherited = lsave->state.allocated + lsave->state.inherited;
		lmem->inherited = rsave->state.inherited;
		do {
		} while (0);;
	    }
	}
    }
    dmem->save_level++;
    ((dmem)->test_mask = (dmem)->new_mask = 2);
    file_save();
    return sid;
}

static alloc_save_t *alloc_save_space(gs_ref_memory_t * mem, gs_dual_memory_t * dmem)
{
    gs_ref_memory_t save_mem;
    alloc_save_t *save;
    chunk_t *inner = 0;
    if (mem->cc.ctop - mem->cc.cbot > sizeof(chunk_head_t)) {
	inner = (chunk_t *) (*(mem->parent)->procs.alloc_struct) (mem->parent, &st_chunk, "alloc_save_space(inner)");
	if (inner == 0)
	    return 0;
    }
    save_mem = *mem;
    alloc_close_chunk(mem);
    (*((gs_memory_t *) mem)->procs.status) ((gs_memory_t *) mem, &mem->previous_status);
    ialloc_reset(mem);
    mem->cc.cnext = mem->cc.cprev = 0;
    if (inner != 0) {
	alloc_init_chunk(&mem->cc, mem->cc.cbot, mem->cc.ctop, ((bool) 1), mem->pcc);
	*inner = mem->cc;
	mem->pcc = inner;
	mem->cfirst = mem->clast = inner;
    } else {
	mem->pcc = 0;
	mem->cfirst = mem->clast = 0;
	mem->cc.cbot = mem->cc.ctop = 0;
    }
    save = (alloc_save_t *) (*((gs_memory_t *) mem)->procs.alloc_struct) ((gs_memory_t *) mem, &st_alloc_save, "alloc_save_space(save)");
    if (save == 0) {
	(*(mem->parent)->procs.free_object) (mem->parent, inner, "alloc_save_space(inner)");
	*mem = save_mem;
	return 0;
    }
    save->state = save_mem;
    save->dmem = dmem;
    save->restore_names = (name_memory() == (gs_memory_t *) mem);
    save->is_current = (dmem->current == mem);
    mem->saved = save;
    return save;
}

int alloc_save_change(gs_dual_memory_t * dmem, const ref * pcont, ref_packed * where, client_name_t cname)
{
    gs_ref_memory_t *mem;
    register alloc_change_t *cp;
    if (dmem->save_level == 0)
	return 0;
    mem = (pcont == ((void *) 0) ? dmem->spaces.named.local : dmem->spaces.indexed[(avm_space) (((pcont)->tas.type_attrs) & (((1 << 2) - 1) << 2)) >> 2]);
    cp = (alloc_change_t *) (*((gs_memory_t *) mem)->procs.alloc_struct) ((gs_memory_t *) mem, &st_alloc_change, "alloc_save_change");
    if (cp == 0)
	return -1;
    cp->next = mem->changes;
    cp->where = where;
    if (pcont == ((void *) 0))
	cp->offset = (-2);
    else if ((((pcont)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0))) == (((t_array) << 8) + (0))) || ((((const byte *) &((pcont)->tas.type_attrs))[1]) == (t_dictionary)))
	cp->offset = (-1);
    else if ((((pcont)->tas.type_attrs & ((((1 << 6) - (2)) << 8) + (0))) == (((t_struct) << 8) + (0))))
	cp->offset = (byte *) where - (byte *) pcont->value.pstruct;
    else {
	(lprintf_file_and_line(gs_stderr, "isave.c", 426), fprintf(gs_stderr, "Bad type %u for save!  pcont = 0x%lx, where = 0x%lx\n", (((const byte *) &((pcont)->tas.type_attrs))[1]), (ulong) pcont, (ulong) where));
	gs_exit(1);
    } if ((*(const ref_packed *) (where) >= ((ref_packed) (2) << 13)))
	*(ref_packed *) & cp->contents = *where;
    else {
	((&cp->contents)->value = ((ref *) where)->value, (&cp->contents)->tas = ((ref *) where)->tas);
	(((ref *) where)->tas.type_attrs |= (2));
    }
    mem->changes = cp;
    return 0;
}

int alloc_save_level(const gs_dual_memory_t * dmem)
{
    return dmem->save_level;
}

alloc_save_t *alloc_save_current(const gs_dual_memory_t * dmem)
{
    alloc_save_t *save = dmem->spaces.named.local->saved;
    while (save != 0 && save->id == 0)
	save = save->state.saved;
    return save;
}

bool alloc_is_since_save(const void *vptr, const alloc_save_t * save)
{
    const gs_dual_memory_t *dmem = save->dmem;
    register const gs_ref_memory_t *mem = dmem->spaces.named.local;
    do {
    } while (0);
    if (mem->saved == 0) {
	return ((bool) 1);
    }
    for (;; mem = &mem->saved->state) {
	const chunk_t *cp;
	do {
	} while (0);
	for (cp = mem->cfirst; cp != 0; cp = cp->cnext) {
	    if ((((ptr_ord_t) ((const byte *) (((const char *) vptr))) >= (ptr_ord_t) ((cp)->cbase)) && ((ptr_ord_t) ((const byte *) (((const char *) vptr))) < (ptr_ord_t) ((cp)->cend)))) {
		do {
		} while (0);
		return ((bool) 1);
	    }
	    do {
	    } while (0);
	}
	if (mem->saved == save) {
	    break;
	}
    }
    if (dmem->save_level == 1 && (mem = dmem->spaces.named.global) !=dmem->spaces.named.local) {
	const chunk_t *cp;
	do {
	} while (0);
	for (cp = mem->cfirst; cp != 0; cp = cp->cnext)
	    if ((((ptr_ord_t) ((const byte *) (((const char *) vptr))) >= (ptr_ord_t) ((cp)->cbase)) && ((ptr_ord_t) ((const byte *) (((const char *) vptr))) < (ptr_ord_t) ((cp)->cend)))) {
		do {
		} while (0);
		return ((bool) 1);
	    }
    }
    return ((bool) 0);
}

bool alloc_name_is_since_save(const ref * pnref, const alloc_save_t * save)
{
    const name *pname;
    if (!save->restore_names)
	return ((bool) 0);
    pname = pnref->value.pname;
    if (pname->foreign_string)
	return ((bool) 0);
    return alloc_is_since_save(pname->string_bytes, save);
}

bool alloc_name_index_is_since_save(uint nidx, const alloc_save_t * save)
{
    ref nref;
    nref.value.pname = name_index_ptr(nidx);
    return alloc_name_is_since_save(&nref, save);
}

bool alloc_any_names_since_save(const alloc_save_t * save)
{
    return save->restore_names;
}

alloc_save_t *alloc_find_save(const gs_dual_memory_t * dmem, ulong sid)
{
    alloc_save_t *sprev = dmem->spaces.named.local->saved;
    if (sid == 0)
	return 0;
    while (sprev != 0) {
	if (sprev->id == sid)
	    return sprev;
	sprev = sprev->state.saved;
    }
    return 0;
}

void *alloc_save_client_data(const alloc_save_t * save)
{
    return save->client_data;
}

static void restore_finalize(gs_ref_memory_t *);
static void restore_space(gs_ref_memory_t *);
bool alloc_restore_state_step(alloc_save_t * save)
{
    gs_dual_memory_t *dmem = save->dmem;
    gs_ref_memory_t *mem = dmem->spaces.named.local;
    alloc_save_t *sprev;
    do {
	ulong sid;
	sprev = mem->saved;
	sid = sprev->id;
	restore_finalize(mem);
	restore_resources(sprev, mem);
	restore_space(mem);
	if (sid != 0) {
	    dmem->save_level--;
	    break;
	}
    } while (sprev != save);
    if (dmem->save_level == 0) {
	mem = dmem->spaces.named.global;
	if (mem != dmem->spaces.named.local && mem->saved != 0) {
	    restore_finalize(mem);
	    restore_resources(mem->saved, mem);
	    restore_space(mem);
	}
	((dmem)->test_mask = ~0, (dmem)->new_mask = 0);
    } else {
	save_set_new(mem, ((bool) 1));
    }
    return sprev == save;
}

static void restore_space(gs_ref_memory_t * mem)
{
    alloc_save_t *save = mem->saved;
    alloc_save_t saved;
    do {
    } while (0);; {
	register alloc_change_t *cp = mem->changes;
	while (cp) {
	    if ((*(const ref_packed *) (&cp->contents) >= ((ref_packed) (2) << 13)))
		*cp->where = *(ref_packed *) & cp->contents;
	    else
		(((ref *) cp->where)->value = (&cp->contents)->value, ((ref *) cp->where)->tas = (&cp->contents)->tas);
	    cp = cp->next;
	}
    }
    saved = *save;
    restore_free(mem); {
	int num_contexts = mem->num_contexts;
	*mem = saved.state;
	mem->num_contexts = num_contexts;
    } alloc_open_chunk(mem);
    if (saved.is_current) {
	gs_dual_memory_t *dmem = saved.dmem;
	dmem->current = mem;
	dmem->current_space = mem->space;
    }
}

void alloc_restore_all(gs_dual_memory_t * dmem)
{
    while (dmem->save_level != 0)
	((void) (alloc_restore_state_step(dmem->spaces.named.local->saved)));
    restore_finalize(dmem->spaces.named.local); {
	gs_ref_memory_t *mem = dmem->spaces.named.global;
	if (mem != dmem->spaces.named.local && mem->num_contexts == 1)
	    restore_finalize(mem);
    }
    restore_finalize(dmem->spaces.named.system); {
	alloc_save_t empty_save;
	empty_save.dmem = dmem;
	empty_save.restore_names = ((bool) 0);
	restore_resources(&empty_save, ((void *) 0));
    } restore_free(dmem->spaces.named.local); {
	gs_ref_memory_t *mem = dmem->spaces.named.global;
	if (mem != dmem->spaces.named.local) {
	    if (!--(mem->num_contexts))
		restore_free(mem);
	}
    }
    restore_free(dmem->spaces.named.system);
}

static void restore_finalize(gs_ref_memory_t * mem)
{
    chunk_t *cp;
    alloc_close_chunk(mem);
    (*((gs_memory_t *) mem)->procs.enable_free) ((gs_memory_t *) mem, ((bool) 0));
    for (cp = mem->clast; cp != 0; cp = cp->cprev) { {
	    obj_header_t *pre = (obj_header_t *) ((cp)->cbase);
	    obj_header_t *end = (obj_header_t *) ((cp)->cbot);
	    ulong size;
	    for (; pre < end; pre = (obj_header_t *) ((char *) pre + (uint) ((((size) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)))) { {
		    size = ((pre)->d.o.size); {
			void (*finalize) (void *ptr) = pre->d.o.t.type->finalize;
			if (finalize != 0) {
			    do {
			    } while (0);
			    (*finalize) (pre + 1);
			}
		    }
	    }
	    }
    }
    }
    (*((gs_memory_t *) mem)->procs.enable_free) ((gs_memory_t *) mem, ((bool) 1));
}

static void restore_resources(alloc_save_t * sprev, gs_ref_memory_t * mem)
{
    file_restore(sprev, (const gs_memory_t *) mem);
    font_restore(sprev);
    if (sprev->restore_names)
	name_restore(sprev);
}

static void restore_free(gs_ref_memory_t * mem)
{
    chunk_t *cp;
    chunk_t *csucc;
    for (cp = mem->clast; cp != 0; cp = csucc) {
	csucc = cp->cprev;
	if (cp->cbase + sizeof(obj_header_t) != (byte *) mem)
	    alloc_free_chunk(cp, mem);
    }
}

static void combine_space(gs_ref_memory_t *);
static void forget_changes(gs_ref_memory_t *);
void alloc_forget_save(alloc_save_t * save)
{
    gs_dual_memory_t *dmem = save->dmem;
    gs_ref_memory_t *mem = dmem->spaces.named.local;
    alloc_save_t *sprev;
    do {
    } while (0);;
    do {
	sprev = mem->saved;
	if (sprev->id != 0)
	    dmem->save_level--;
	if (dmem->save_level != 0) {
	    alloc_change_t *chp = mem->changes;
	    save_set_new(&sprev->state, ((bool) 1));
	    if (chp == 0)
		mem->changes = sprev->state.changes;
	    else {
		while (chp->next != 0)
		    chp = chp->next;
		chp->next = sprev->state.changes;
	    }
	    file_forget_save(sprev);
	    combine_space(mem);
	} else {
	    forget_changes(mem);
	    save_set_new(mem, ((bool) 0));
	    file_forget_save(sprev);
	    combine_space(mem);
	    mem = dmem->spaces.named.global;
	    if (mem != dmem->spaces.named.local && mem->saved != 0) {
		forget_changes(mem);
		save_set_new(mem, ((bool) 0));
		combine_space(mem);
	    }
	    ((dmem)->test_mask = ~0, (dmem)->new_mask = 0);
	    break;
	}
    } while (sprev != save);
}

static void combine_space(gs_ref_memory_t * mem)
{
    alloc_save_t *saved = mem->saved;
    gs_ref_memory_t *omem = &saved->state;
    chunk_t *cp;
    chunk_t *csucc;
    alloc_close_chunk(mem);
    for (cp = mem->cfirst; cp != 0; cp = csucc) {
	csucc = cp->cnext;
	if (cp->outer == 0)
	    alloc_link_chunk(cp, omem);
	else {
	    chunk_t *outer = cp->outer;
	    outer->inner_count--;
	    if (mem->pcc == cp)
		mem->pcc = outer;
	    if (mem->cfreed.cp == cp)
		mem->cfreed.cp = outer; {
		obj_header_t *hp = (obj_header_t *) outer->cbot;
		hp->d.o.f.h.large = 0;
		hp->d.o.size = (char *) (cp->chead + 1) - (char *) (hp + 1);
		hp->d.o.t.type = &st_bytes;
		} outer->cbot = cp->cbot;
		outer->rcur = cp->rcur;
		outer->rtop = cp->rtop;
		outer->ctop = cp->ctop;
		outer->has_refs |= cp->has_refs;
		(*(mem->parent)->procs.free_object) (mem->parent, cp, "combine_space(inner)");
    }} mem->cfirst = omem->cfirst;
    mem->clast = omem->clast;
    mem->allocated += omem->allocated;
    mem->gc_allocated += omem->allocated;
    mem->lost.objects += omem->lost.objects;
    mem->lost.refs += omem->lost.refs;
    mem->lost.strings += omem->lost.strings;
    mem->saved = omem->saved;
    mem->previous_status = omem->previous_status; {
	int i;
	for (i = 0; i < ((800 + (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1) / (((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) + 1); i++) {
	    obj_header_t *olist = omem->freelists[i];
	    obj_header_t *list = mem->freelists[i];
	    if (olist == 0);
	    else if (list == 0)
		mem->freelists[i] = olist;
	    else {
		while (*(obj_header_t **) list != 0)
		    list = *(obj_header_t **) list;
		*(obj_header_t **) list = olist;
	    }
	}
    }
    (*((gs_memory_t *) mem)->procs.free_object) ((gs_memory_t *) mem, saved, "combine_space(saved)");
    alloc_open_chunk(mem);
}

static void forget_changes(gs_ref_memory_t * mem)
{
    register alloc_change_t *chp = mem->changes;
    alloc_change_t *next;
    for (; chp; chp = next) {
	ref_packed *prp = chp->where;
	do {
	} while (0);
	if (!(*(const ref_packed *) (prp) >= ((ref_packed) (2) << 13)))
	    (((ref *) prp)->tas.type_attrs &= ~(2));
	next = chp->next;
	(*((gs_memory_t *) mem)->procs.free_object) ((gs_memory_t *) mem, chp, "forget_changes");
    } mem->changes = 0;
} static long save_set_new(gs_ref_memory_t * mem, bool to_new)
{
    long scanned = 0;
    save_set_new_changes(mem, to_new); {
	chunk_t *cp = (mem)->cfirst;
	for (; cp != 0; cp = cp->cnext) { {
		if (cp->has_refs) {
		    bool has_refs = ((bool) 0); {
			obj_header_t *pre = (obj_header_t *) ((cp)->cbase);
			obj_header_t *end = (obj_header_t *) ((cp)->cbot);
			ulong size;
			for (; pre < end; pre = (obj_header_t *) ((char *) pre + (uint) ((((size) + sizeof(obj_header_t)) + ((((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1) - 1)) & -(((4 - 1) | (4 - 1) | (4 - 1) | ((1 << 2) - 1) | ((1 << 1) - 1)) + 1)))) { {
				size = ((pre)->d.o.size); {
				    do {
				    } while (0);
				    if (pre->d.o.t.type == &st_refs) {
					ref_packed *prp = (ref_packed *) (pre + 1);
					ref_packed *next = (ref_packed *) ((char *) prp + size);
					do {
					} while (0);
					has_refs = ((bool) 1);
					scanned += size;
					if (to_new)
					    while (1) {
						if ((*(const ref_packed *) (prp) >= ((ref_packed) (2) << 13)))
						    prp++;
						else {
						    ((ref *) prp)->tas.type_attrs |= 2;
						    prp += (sizeof(ref) / sizeof(ref_packed));
						    if (prp >= next)
							break;
						}
					} else
					    while (1) {
						if ((*(const ref_packed *) (prp) >= ((ref_packed) (2) << 13)))
						    prp++;
						else {
						    ((ref *) prp)->tas.type_attrs &= ~2;
						    prp += (sizeof(ref) / sizeof(ref_packed));
						    if (prp >= next)
							break;
						}
					    }
				    } else
					scanned += sizeof(obj_header_t);
				}
			}
			}
		    }
		    cp->has_refs = has_refs;
		}
	}
	}
    }
    do {
    } while (0);
    return scanned;
}

static void save_set_new_changes(gs_ref_memory_t * mem, bool to_new)
{
    register alloc_change_t *chp = mem->changes;
    register uint new = (to_new ? 2 : 0);
    for (; chp; chp = chp->next) {
	ref_packed *prp = chp->where;
	do {
	} while (0);
	if (!(*(const ref_packed *) (prp) >= ((ref_packed) (2) << 13)))
	    ((ref *) prp)->tas.type_attrs = (((ref *) prp)->tas.type_attrs & ~2) + new;
}}
