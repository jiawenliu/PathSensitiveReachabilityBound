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
void BF_ofb64_encrypt(in, out, length, schedule, ivec, num)
unsigned char *in;
unsigned char *out;
long length;
BF_KEY *schedule;
unsigned char *ivec;
int *num;
{
    register unsigned long v0, v1, t;
    register int n = *num;
    register long l = length;
    unsigned char d[8];
    register char *dp;
    unsigned long ti[2];
    unsigned char *iv;
    int save = 0;
    iv = (unsigned char *) ivec;
    (v0 = ((unsigned long) (*((iv)++))) << 24L, v0 |= ((unsigned long) (*((iv)++))) << 16L, v0 |= ((unsigned long) (*((iv)++))) << 8L, v0 |= ((unsigned long) (*((iv)++))));
    (v1 = ((unsigned long) (*((iv)++))) << 24L, v1 |= ((unsigned long) (*((iv)++))) << 16L, v1 |= ((unsigned long) (*((iv)++))) << 8L, v1 |= ((unsigned long) (*((iv)++))));
    ti[0] = v0;
    ti[1] = v1;
    dp = (char *) d;
    (*((dp)++) = (unsigned char) (((v0) >> 24L) & 0xff), *((dp)++) = (unsigned char) (((v0) >> 16L) & 0xff), *((dp)++) = (unsigned char) (((v0) >> 8L) & 0xff), *((dp)++) = (unsigned char) (((v0)) & 0xff));
    (*((dp)++) = (unsigned char) (((v1) >> 24L) & 0xff), *((dp)++) = (unsigned char) (((v1) >> 16L) & 0xff), *((dp)++) = (unsigned char) (((v1) >> 8L) & 0xff), *((dp)++) = (unsigned char) (((v1)) & 0xff));
    while (l--) {
	if (n == 0) {
	    BF_encrypt((unsigned long *) ti, schedule, 1);
	    dp = (char *) d;
	    t = ti[0];
	    (*((dp)++) = (unsigned char) (((t) >> 24L) & 0xff), *((dp)++) = (unsigned char) (((t) >> 16L) & 0xff), *((dp)++) = (unsigned char) (((t) >> 8L) & 0xff), *((dp)++) = (unsigned char) (((t)) & 0xff));
	    t = ti[1];
	    (*((dp)++) = (unsigned char) (((t) >> 24L) & 0xff), *((dp)++) = (unsigned char) (((t) >> 16L) & 0xff), *((dp)++) = (unsigned char) (((t) >> 8L) & 0xff), *((dp)++) = (unsigned char) (((t)) & 0xff));
	    save++;
	}
	*(out++) = *(in++) ^ d[n];
	n = (n + 1) & 0x07;
    } if (save) {
	v0 = ti[0];
	v1 = ti[1];
	iv = (unsigned char *) ivec;
	(*((iv)++) = (unsigned char) (((v0) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((v0) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((v0) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((v0)) & 0xff));
	(*((iv)++) = (unsigned char) (((v1) >> 24L) & 0xff), *((iv)++) = (unsigned char) (((v1) >> 16L) & 0xff), *((iv)++) = (unsigned char) (((v1) >> 8L) & 0xff), *((iv)++) = (unsigned char) (((v1)) & 0xff));
    }
    t = v0 = v1 = ti[0] = ti[1] = 0;
    *num = n;
}
