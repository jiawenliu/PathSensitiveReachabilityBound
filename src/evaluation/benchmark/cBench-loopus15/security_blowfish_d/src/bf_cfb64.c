typedef struct bf_key_st {
    unsigned long P[16 + 2];
    unsigned long S[4 * 256];
} BF_KEY;
void BF_set_key(BF_KEY * key, int len, unsigned char *data);
void BF_ecb_encrypt(unsigned char *in, unsigned char *out, BF_KEY * key, int encrypt);
void BF_encrypt(unsigned long *data, BF_KEY * key, int encrypt);
void BF_cbc_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * ks, unsigned char *iv, int encrypt);
void BF_cfb64_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * schedule, unsigned char *ivec, int *num, int encrypt);
void BF_ofb64_encrypt(unsigned char *in, unsigned char *out, long length, BF_KEY * schedule, unsigned char *ivec, int *num);
char *BF_options(void);
void BF_cfb64_encrypt(in, out, length, schedule, ivec, num, encrypt)
unsigned char *in;
unsigned char *out;
long length;
BF_KEY *schedule;
unsigned char *ivec;
int *num;
int encrypt;
{
    register unsigned long v0, v1, t;
    register int n = *num;
    register long l = length;
    unsigned long ti[2];
    unsigned char *iv, c, cc;
    iv = (unsigned char *) ivec;
    if (encrypt) {
	while (l--) {
	    if (n == 0) {
		(v0 = ((unsigned long) (*((iv)++))) << 24L, v0 |= ((unsigned long) (*((iv)++))) << 16L, v0 |= ((unsigned long) (*((iv)++))) << 8L, v0 |= ((unsigned long) (*((iv)++))));
		ti[0] = v0;
		(v1 = ((unsigned long) (*((iv)++))) << 24L, v1 |= ((unsigned long) (*((iv)++))) << 16L, v1 |= ((unsigned long) (*((iv)++))) << 8L, v1 |= ((unsigned long) (*((iv)++))));
		ti[1] = v1;
		BF_encrypt((unsigned long *) ti, schedule, 1);
		iv = (unsigned char *) ivec;
		t = ti[0];
		(*((iv)++) = (unsigned char) (((t) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((t)) & 0xff));
		t = ti[1];
		(*((iv)++) = (unsigned char) (((t) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((t)) & 0xff));
		iv = (unsigned char *) ivec;
	    }
	    c = *(in++) ^ iv[n];
	    *(out++) = c;
	    iv[n] = c;
	    n = (n + 1) & 0x07;
    }} else {
	while (l--) {
	    if (n == 0) {
		(v0 = ((unsigned long) (*((iv)++))) << 24L, v0 |= ((unsigned long) (*((iv)++))) << 16L, v0 |= ((unsigned long) (*((iv)++))) << 8L, v0 |= ((unsigned long) (*((iv)++))));
		ti[0] = v0;
		(v1 = ((unsigned long) (*((iv)++))) << 24L, v1 |= ((unsigned long) (*((iv)++))) << 16L, v1 |= ((unsigned long) (*((iv)++))) << 8L, v1 |= ((unsigned long) (*((iv)++))));
		ti[1] = v1;
		BF_encrypt((unsigned long *) ti, schedule, 1);
		iv = (unsigned char *) ivec;
		t = ti[0];
		(*((iv)++) = (unsigned char) (((t) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((t)) & 0xff));
		t = ti[1];
		(*((iv)++) = (unsigned char) (((t) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((t) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((t)) & 0xff));
		iv = (unsigned char *) ivec;
	    }
	    cc = *(in++);
	    c = iv[n];
	    iv[n] = cc;
	    *(out++) = c ^ cc;
	    n = (n + 1) & 0x07;
    }} v0 = v1 = ti[0] = ti[1] = t = c = cc = 0;
    *num = n;
}
