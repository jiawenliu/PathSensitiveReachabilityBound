typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
struct id3_tag {
    unsigned int refcount;
    unsigned int version;
    int flags;
    int extendedflags;
    int restrictions;
    int options;
    unsigned int nframes;
    struct id3_frame **frames;
    unsigned long paddedsize;
};
enum { ID3_TAG_FLAG_UNSYNCHRONISATION = 0x80, ID3_TAG_FLAG_EXTENDEDHEADER = 0x40, ID3_TAG_FLAG_EXPERIMENTALINDICATOR = 0x20, ID3_TAG_FLAG_FOOTERPRESENT = 0x10, ID3_TAG_FLAG_KNOWNFLAGS = 0xf0 };
enum { ID3_TAG_EXTENDEDFLAG_TAGISANUPDATE = 0x40, ID3_TAG_EXTENDEDFLAG_CRCDATAPRESENT = 0x20, ID3_TAG_EXTENDEDFLAG_TAGRESTRICTIONS = 0x10, ID3_TAG_EXTENDEDFLAG_KNOWNFLAGS = 0x70 };
enum { ID3_TAG_RESTRICTION_TAGSIZE_MASK = 0xc0, ID3_TAG_RESTRICTION_TAGSIZE_128_FRAMES_1_MB = 0x00, ID3_TAG_RESTRICTION_TAGSIZE_64_FRAMES_128_KB = 0x40, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_40_KB = 0x80, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_4_KB = 0xc0 };
enum { ID3_TAG_RESTRICTION_TEXTENCODING_MASK = 0x20, ID3_TAG_RESTRICTION_TEXTENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTENCODING_LATIN1_UTF8 = 0x20 };
enum { ID3_TAG_RESTRICTION_TEXTSIZE_MASK = 0x18, ID3_TAG_RESTRICTION_TEXTSIZE_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTSIZE_1024_CHARS = 0x08, ID3_TAG_RESTRICTION_TEXTSIZE_128_CHARS = 0x10, ID3_TAG_RESTRICTION_TEXTSIZE_30_CHARS = 0x18 };
enum { ID3_TAG_RESTRICTION_IMAGEENCODING_MASK = 0x04, ID3_TAG_RESTRICTION_IMAGEENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGEENCODING_PNG_JPEG = 0x04 };
enum { ID3_TAG_RESTRICTION_IMAGESIZE_MASK = 0x03, ID3_TAG_RESTRICTION_IMAGESIZE_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGESIZE_256_256 = 0x01, ID3_TAG_RESTRICTION_IMAGESIZE_64_64 = 0x02, ID3_TAG_RESTRICTION_IMAGESIZE_64_64_EXACT = 0x03 };
enum { ID3_TAG_OPTION_UNSYNCHRONISATION = 0x0001, ID3_TAG_OPTION_COMPRESSION = 0x0002, ID3_TAG_OPTION_CRC = 0x0004, ID3_TAG_OPTION_APPENDEDTAG = 0x0010, ID3_TAG_OPTION_FILEALTERED = 0x0020, ID3_TAG_OPTION_ID3V1 = 0x0100 };
typedef unsigned char id3_byte_t;
typedef unsigned long id3_length_t;
typedef unsigned long id3_ucs4_t;
typedef unsigned char id3_latin1_t;
typedef unsigned short id3_utf16_t;
typedef signed char id3_utf8_t;
struct id3_frame {
    char id[5];
    char const *description;
    unsigned int refcount;
    int flags;
    int group_id;
    int encryption_method;
    id3_byte_t *encoded;
    id3_length_t encoded_length;
    id3_length_t decoded_length;
    unsigned int nfields;
    union id3_field *fields;
};
enum { ID3_FRAME_FLAG_TAGALTERPRESERVATION = 0x4000, ID3_FRAME_FLAG_FILEALTERPRESERVATION = 0x2000, ID3_FRAME_FLAG_READONLY = 0x1000, ID3_FRAME_FLAG_STATUSFLAGS = 0xff00, ID3_FRAME_FLAG_GROUPINGIDENTITY = 0x0040, ID3_FRAME_FLAG_COMPRESSION = 0x0008, ID3_FRAME_FLAG_ENCRYPTION = 0x0004, ID3_FRAME_FLAG_UNSYNCHRONISATION = 0x0002, ID3_FRAME_FLAG_DATALENGTHINDICATOR = 0x0001, ID3_FRAME_FLAG_FORMATFLAGS = 0x00ff, ID3_FRAME_FLAG_KNOWNFLAGS = 0x704f };
enum id3_field_type { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_LATIN1FULL, ID3_FIELD_TYPE_LATIN1LIST, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL, ID3_FIELD_TYPE_STRINGLIST, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT32PLUS, ID3_FIELD_TYPE_BINARYDATA };
enum id3_field_textencoding { ID3_FIELD_TEXTENCODING_ISO_8859_1 = 0x00, ID3_FIELD_TEXTENCODING_UTF_16 = 0x01, ID3_FIELD_TEXTENCODING_UTF_16BE = 0x02, ID3_FIELD_TEXTENCODING_UTF_8 = 0x03 };
union id3_field {
    enum id3_field_type type;
    struct {
	enum id3_field_type type;
	signed long value;
    } number;
    struct {
	enum id3_field_type type;
	id3_latin1_t *ptr;
    } latin1;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_latin1_t **strings;
    } latin1list;
    struct {
	enum id3_field_type type;
	id3_ucs4_t *ptr;
    } string;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_ucs4_t **strings;
    } stringlist;
    struct {
	enum id3_field_type type;
	char value[9];
    } immediate;
    struct {
	enum id3_field_type type;
	id3_byte_t *data;
	id3_length_t length;
    } binary;
};
struct id3_tag *id3_tag_new(void);
void id3_tag_delete(struct id3_tag *);
void id3_tag_clearframes(struct id3_tag *);
int id3_tag_attachframe(struct id3_tag *, struct id3_frame *);
int id3_tag_detachframe(struct id3_tag *, struct id3_frame *);
struct id3_frame *id3_tag_findframe(struct id3_tag const *, char const *, unsigned int);
signed long id3_tag_query(id3_byte_t const *, id3_length_t);
struct id3_tag *id3_tag_parse(id3_byte_t const *, id3_length_t);
id3_length_t id3_tag_render(struct id3_tag const *, id3_byte_t *);
enum id3_file_mode { ID3_FILE_MODE_READONLY = 0, ID3_FILE_MODE_READWRITE };
struct id3_file *id3_file_open(char const *, enum id3_file_mode);
struct id3_file *id3_file_fdopen(int, enum id3_file_mode);
void id3_file_close(struct id3_file *);
struct id3_tag *id3_file_tag(struct id3_file const *);
int id3_file_update(struct id3_file *);
id3_latin1_t *id3_ucs4_latin1duplicate(id3_ucs4_t const *);
id3_utf16_t *id3_ucs4_utf16duplicate(id3_ucs4_t const *);
id3_utf8_t *id3_ucs4_utf8duplicate(id3_ucs4_t const *);
void id3_ucs4_putnumber(id3_ucs4_t *, unsigned long);
unsigned long id3_ucs4_getnumber(id3_ucs4_t const *);
id3_ucs4_t const *id3_genre_name(id3_ucs4_t const *);
int id3_field_setint(union id3_field *, signed long);
int id3_field_settextencoding(union id3_field *, enum id3_field_textencoding);
int id3_field_setstrings(union id3_field *, unsigned int, id3_ucs4_t **);
int id3_field_addstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setlanguage(union id3_field *, char const *);
int id3_field_setlatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setfulllatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setfullstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setframeid(union id3_field *, char const *);
int id3_field_setbinarydata(union id3_field *, id3_byte_t const *, id3_length_t);
signed long id3_field_getint(union id3_field const *);
id3_ucs4_t const *id3_field_getstring(union id3_field const *);
id3_ucs4_t const *id3_field_getfullstring(union id3_field const *);
unsigned int id3_field_getnstrings(union id3_field const *);
id3_ucs4_t const *id3_field_getstrings(union id3_field const *, unsigned int index);
char const *id3_field_getframeid(union id3_field const *);
id3_byte_t const *id3_field_getbinarydata(union id3_field const *, id3_length_t *);
extern char const id3_version[];
extern char const id3_copyright[];
extern char const id3_author[];
extern char const id3_build[];
struct id3_frametype {
    char const *id;
    unsigned int nfields;
    enum id3_field_type const *fields;
    int defaultflags;
    char const *description;
};
extern struct id3_frametype const id3_frametype_text;
extern struct id3_frametype const id3_frametype_url;
extern struct id3_frametype const id3_frametype_experimental;
extern struct id3_frametype const id3_frametype_unknown;
extern struct id3_frametype const id3_frametype_obsolete;
struct id3_frametype const *id3_frametype_lookup(register char const *, register unsigned int);
static enum id3_field_type const fields_UFID[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_TXXX[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRING };
static enum id3_field_type const fields_WXXX[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_LATIN1 };
static enum id3_field_type const fields_MCDI[] = { ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_ETCO[] = { ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_MLLT[] = { ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_SYTC[] = { ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_USLT[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL };
static enum id3_field_type const fields_SYLT[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_COMM[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL };
static enum id3_field_type const fields_RVA2[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_EQU2[] = { ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_RVRB[] = { ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT8 };
static enum id3_field_type const fields_APIC[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_GEOB[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_PCNT[] = { ID3_FIELD_TYPE_INT32PLUS };
static enum id3_field_type const fields_POPM[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT32PLUS };
static enum id3_field_type const fields_RBUF[] = { ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT32 };
static enum id3_field_type const fields_AENC[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_LINK[] = { ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_LATIN1LIST };
static enum id3_field_type const fields_POSS[] = { ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_USER[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_STRING };
static enum id3_field_type const fields_OWNE[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_STRING };
static enum id3_field_type const fields_COMR[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_ENCR[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_GRID[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_PRIV[] = { ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_SIGN[] = { ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_SEEK[] = { ID3_FIELD_TYPE_INT32 };
static enum id3_field_type const fields_ASPI[] = { ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_text[] = { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_STRINGLIST };
static enum id3_field_type const fields_url[] = { ID3_FIELD_TYPE_LATIN1 };
static enum id3_field_type const fields_unknown[] = { ID3_FIELD_TYPE_BINARYDATA };
static enum id3_field_type const fields_ZOBS[] = { ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_BINARYDATA };
struct id3_frametype const id3_frametype_text = { 0, sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Unknown text information frame" };
struct id3_frametype const id3_frametype_url = { 0, sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Unknown URL link frame" };
struct id3_frametype const id3_frametype_experimental = { 0, sizeof(fields_unknown) / sizeof(fields_unknown[0]), fields_unknown, 0, "Experimental frame" };
struct id3_frametype const id3_frametype_unknown = { 0, sizeof(fields_unknown) / sizeof(fields_unknown[0]), fields_unknown, 0, "Unknown frame" };
struct id3_frametype const id3_frametype_obsolete = { 0, sizeof(fields_unknown) / sizeof(fields_unknown[0]), fields_unknown, (ID3_FRAME_FLAG_FILEALTERPRESERVATION | ID3_FRAME_FLAG_TAGALTERPRESERVATION), "Obsolete frame" };

__inline static unsigned int hash(str, len)
register const char *str;
register unsigned int len;
{
    static const unsigned char asso_values[] = { 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 20, 18, 2, 25, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 19, 26, 1, 28, 15, 9, 31, 112, 0, 112, 29, 3, 0, 10, 0, 30, 0, 8, 5, 0, 29, 31, 24, 29, 24, 30, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112 };
    register int hval = 0;
    switch (len) {
    default:
    case 4:
	hval += asso_values[(unsigned char) str[3]];
    case 3:
	hval += asso_values[(unsigned char) str[2]];
    case 2:
	hval += asso_values[(unsigned char) str[1]];
    case 1:
	hval += asso_values[(unsigned char) str[0]];
	break;
    }
    return hval;
}

__inline const struct id3_frametype *id3_frametype_lookup(str, len)
register const char *str;
register unsigned int len;
{
    static const struct id3_frametype wordlist[] = { {"TMOO", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Mood"}
    , {"TCOM", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Composer"}
    , {"COMM", sizeof(fields_COMM) / sizeof(fields_COMM[0]), fields_COMM, 0, "Comments"}
    , {"TIT3", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Subtitle/description refinement"}
    , {"TMCL", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Musician credits list"}
    , {"TSOT", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Title sort order"}
    , {"MLLT", sizeof(fields_MLLT) / sizeof(fields_MLLT[0]), fields_MLLT, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "MPEG location lookup table"}
    , {"COMR", sizeof(fields_COMR) / sizeof(fields_COMR[0]), fields_COMR, 0, "Commercial frame"}
    , {"TSST", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Set subtitle"}
    , {"TCON", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Content type"}
    , {"TFLT", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "File type"}
    , {"TRSO", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Internet radio station owner"}
    , {"TSRC", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "ISRC (international standard recording code)"}
    , {"ETCO", sizeof(fields_ETCO) / sizeof(fields_ETCO[0]), fields_ETCO, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Event timing codes"}
    , {"TIT2", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Title/songname/content description"}
    , {"TOFN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Original filename"}
    , {"TIT1", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Content group description"}
    , {"TOAL", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Original album/movie/show title"}
    , {"TRSN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Internet radio station name"}
    , {"TSOA", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Album sort order"}
    , {"TSSE", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Software/hardware and settings used for encoding"}
    , {"WCOM", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Commercial information"}
    , {"TENC", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Encoded by"}
    , {"TOLY", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Original lyricist(s)/text writer(s)"}
    , {"TLEN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Length"}
    , {"MCDI", sizeof(fields_MCDI) / sizeof(fields_MCDI[0]), fields_MCDI, 0, "Music CD identifier"}
    , {"SYTC", sizeof(fields_SYTC) / sizeof(fields_SYTC[0]), fields_SYTC, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Synchronised tempo codes"}
    , {"TCOP", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Copyright message"}
    , {"SYLT", sizeof(fields_SYLT) / sizeof(fields_SYLT[0]), fields_SYLT, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Synchronised lyric/text"}
    , {"TLAN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Language(s)"}
    , {"TIPL", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Involved people list"}
    , {"ENCR", sizeof(fields_ENCR) / sizeof(fields_ENCR[0]), fields_ENCR, 0, "Encryption method registration"}
    , {"TOWN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "File owner/licensee"}
    , {"TPOS", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Part of a set"}
    , {"TSOP", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Performer sort order"}
    , {"TDOR", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Original release time"}
    , {"TDRC", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Recording time"}
    , {"WORS", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Official Internet radio station homepage"}
    , {"USLT", sizeof(fields_USLT) / sizeof(fields_USLT[0]), fields_USLT, 0, "Unsynchronised lyric/text transcription"}
    , {"TRCK", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Track number/position in set"}
    , {"TPRO", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Produced notice"}
    , {"TDRL", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Release time"}
    , {"POSS", sizeof(fields_POSS) / sizeof(fields_POSS[0]), fields_POSS, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Position synchronisation frame"}
    , {"PCNT", sizeof(fields_PCNT) / sizeof(fields_PCNT[0]), fields_PCNT, 0, "Play counter"}
    , {"LINK", sizeof(fields_LINK) / sizeof(fields_LINK[0]), fields_LINK, 0, "Linked information"}
    , {"TMED", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Media type"}
    , {"TEXT", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Lyricist/text writer"}
    , {"TOPE", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Original artist(s)/performer(s)"}
    , {"AENC", sizeof(fields_AENC) / sizeof(fields_AENC[0]), fields_AENC, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Audio encryption"}
    , {"SIGN", sizeof(fields_SIGN) / sizeof(fields_SIGN[0]), fields_SIGN, 0, "Signature frame"}
    , {"TPE3", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Conductor/performer refinement"}
    , {"WOAS", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Official audio source webpage"}
    , {"TALB", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Album/movie/show title"}
    , {"OWNE", sizeof(fields_OWNE) / sizeof(fields_OWNE[0]), fields_OWNE, 0, "Ownership frame"}
    , {"APIC", sizeof(fields_APIC) / sizeof(fields_APIC[0]), fields_APIC, 0, "Attached picture"}
    , {"WOAR", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Official artist/performer webpage"}
    , {"WOAF", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Official audio file webpage"}
    , {"TDEN", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Encoding time"}
    , {"ASPI", sizeof(fields_ASPI) / sizeof(fields_ASPI[0]), fields_ASPI, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Audio seek point index"}
    , {"WCOP", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Copyright/legal information"}
    , {"TDLY", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Playlist delay"}
    , {"TBPM", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "BPM (beats per minute)"}
    , {"USER", sizeof(fields_USER) / sizeof(fields_USER[0]), fields_USER, 0, "Terms of use"}
    , {"TDTG", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Tagging time"}
    , {"POPM", sizeof(fields_POPM) / sizeof(fields_POPM[0]), fields_POPM, 0, "Popularimeter"}
    , {"ZOBS", sizeof(fields_ZOBS) / sizeof(fields_ZOBS[0]), fields_ZOBS, (ID3_FRAME_FLAG_FILEALTERPRESERVATION | ID3_FRAME_FLAG_TAGALTERPRESERVATION), "Obsolete frame"}
    , {"EQU2", sizeof(fields_EQU2) / sizeof(fields_EQU2[0]), fields_EQU2, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Equalisation (2)"}
    , {"TPE2", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Band/orchestra/accompaniment"}
    , {"SEEK", sizeof(fields_SEEK) / sizeof(fields_SEEK[0]), fields_SEEK, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Seek frame"}
    , {"TPE1", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Lead performer(s)/soloist(s)"}
    , {"UFID", sizeof(fields_UFID) / sizeof(fields_UFID[0]), fields_UFID, 0, "Unique file identifier"}
    , {"GRID", sizeof(fields_GRID) / sizeof(fields_GRID[0]), fields_GRID, 0, "Group identification registration"}
    , {"TKEY", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Initial key"}
    , {"PRIV", sizeof(fields_PRIV) / sizeof(fields_PRIV[0]), fields_PRIV, 0, "Private frame"}
    , {"TPE4", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Interpreted, remixed, or otherwise modified by"}
    , {"GEOB", sizeof(fields_GEOB) / sizeof(fields_GEOB[0]), fields_GEOB, 0, "General encapsulated object"}
    , {"RBUF", sizeof(fields_RBUF) / sizeof(fields_RBUF[0]), fields_RBUF, 0, "Recommended buffer size"}
    , {"RVRB", sizeof(fields_RVRB) / sizeof(fields_RVRB[0]), fields_RVRB, 0, "Reverb"}
    , {"RVA2", sizeof(fields_RVA2) / sizeof(fields_RVA2[0]), fields_RVA2, ID3_FRAME_FLAG_FILEALTERPRESERVATION, "Relative volume adjustment (2)"}
    , {"TPUB", sizeof(fields_text) / sizeof(fields_text[0]), fields_text, 0, "Publisher"}
    , {"TXXX", sizeof(fields_TXXX) / sizeof(fields_TXXX[0]), fields_TXXX, 0, "User defined text information frame"}
    , {"WPAY", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Payment"}
    , {"WPUB", sizeof(fields_url) / sizeof(fields_url[0]), fields_url, 0, "Publishers official webpage"}
    , {"WXXX", sizeof(fields_WXXX) / sizeof(fields_WXXX[0]), fields_WXXX, 0, "User defined URL link frame"}
    };
    static const short lookup[] = { 0, -92, 3, -1, 4, 5, 6, -83, -2, 7, 8, 9, 10, 11, 12, -1, 13, -1, 14, 15, 16, -1, 17, 18, 19, -183, 22, 23, 24, 25, 26, 27, -179, 30, -177, -175, 35, -173, -168, 41, 42, 43, 44, 45, 46, -166, 49, 50, -164, 53, 54, 55, 56, 57, 58, -162, 61, 62, -1, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, -1, -159, 77, -9, -2, 78, -25, -2, -33, -2, -37, -2, -45, -2, 79, -1, 80, -48, -3, -51, -2, -53, -2, -56, -2, -1, 81, -64, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 82, -1, 83 };
    if (len <= 4 && len >= 4) {
	register int key = hash(str, len);
	if (key <= 111 && key >= 0) {
	    register int index = lookup[key];
	    if (index >= 0) {
		register const char *s = wordlist[index].id;
		if (*str == *s && !strncmp(str + 1, s + 1, len - 1))
		    return &wordlist[index];
	    } else if (index < -84) {
		register int offset = -1 - 84 - index;
		register const struct id3_frametype *wordptr = &wordlist[84 + lookup[offset]];
		register const struct id3_frametype *wordendptr = wordptr + -lookup[offset + 1];
		while (wordptr < wordendptr) {
		    register const char *s = wordptr->id;
		    if (*str == *s && !strncmp(str + 1, s + 1, len - 1))
			return wordptr;
		    wordptr++;
		}
	    }
	}
    }
    return 0;
}
