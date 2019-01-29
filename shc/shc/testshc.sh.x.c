#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -rf testshc.sh 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\304\261\163"
#define      pswd_z	256
#define      pswd	((&data[65]))
	"\006\215\205\004\073\311\200\151\104\376\327\145\075\243\313\051"
	"\137\147\301\356\242\220\162\072\316\055\335\165\077\024\245\114"
	"\176\326\121\052\346\335\051\342\233\116\202\066\063\120\025\244"
	"\176\133\007\253\005\326\106\273\153\262\117\020\056\225\211\312"
	"\017\154\317\351\201\141\067\317\227\371\255\070\267\253\003\317"
	"\110\326\216\203\026\264\043\012\266\326\152\100\321\055\252\040"
	"\142\307\103\240\041\275\070\314\055\157\367\162\271\362\047\374"
	"\124\202\343\021\242\017\231\327\204\250\061\250\327\316\130\113"
	"\335\003\063\165\254\254\350\060\345\042\055\200\003\052\275\117"
	"\355\103\023\017\033\363\125\312\306\323\121\155\246\302\123\314"
	"\334\007\372\114\141\372\005\300\141\100\243\027\047\113\276\147"
	"\271\203\156\241\327\223\314\175\136\143\130\316\225\351\037\301"
	"\167\033\322\242\117\002\325\335\142\304\145\274\271\074\342\175"
	"\021\320\132\010\113\340\304\075\126\371\332\065\053\372\255\052"
	"\144\047\141\060\126\125\121\165\047\364\317\314\051\117\140\233"
	"\001\266\076\264\220\246\060\322\025\026\073\315\061\372\143\053"
	"\357\272\253\301\201\370\244\254\243\162\133\056\037\137\027\327"
	"\121\052\102\160\022\212\374\315\265\203\373\327\224\167\115\216"
	"\200\234\206\371\103\350\171\327\135\317\052\171\037\114\232\335"
	"\170\200\011\066\103\151\310\027\020\046\116\205\230\362\260\160"
	"\334\053\071\024\060\120\221\163\133\252\116\241\041\354\206\142"
	"\331\020\150\100\270\236\156\050\322\333\001\107\040\115\140\327"
	"\367\223\131\263\371\154\003\150\057\363\266\205\052\353\227"
#define      rlax_z	1
#define      rlax	((&data[370]))
	"\220"
#define      lsto_z	1
#define      lsto	((&data[371]))
	"\257"
#define      msg2_z	19
#define      msg2	((&data[374]))
	"\025\277\276\005\126\347\337\311\216\231\121\002\270\323\157\314"
	"\173\320\172\351\361\230\317\254\106"
#define      chk2_z	19
#define      chk2	((&data[401]))
	"\041\250\117\301\367\170\246\115\337\237\250\013\231\166\231\235"
	"\303\122\335\254\316\373\317\002\215\011"
#define      tst1_z	22
#define      tst1	((&data[426]))
	"\117\326\374\134\172\152\147\307\125\237\351\075\162\146\261\377"
	"\106\321\033\044\234\007\141\315\334\325\102\041"
#define      tst2_z	19
#define      tst2	((&data[455]))
	"\314\273\300\033\027\066\230\132\316\130\311\336\116\064\352\306"
	"\165\041\001\116\265\365\327\364\116\033\334"
#define      chk1_z	22
#define      chk1	((&data[482]))
	"\332\100\217\012\151\175\152\222\210\231\156\372\042\154\271\063"
	"\237\323\126\023\143\345\025\105\270\127\137"
#define      msg1_z	42
#define      msg1	((&data[508]))
	"\151\043\303\012\175\007\315\253\165\254\241\010\261\045\201\014"
	"\021\000\044\230\364\150\012\176\360\366\201\125\234\352\361\225"
	"\025\040\113\030\304\174\335\312\327\263\113\120\113\216\116\201"
	"\107\226\207"
#define      shll_z	10
#define      shll	((&data[557]))
	"\317\252\077\306\150\277\354\115\376\371\042\057"
#define      opts_z	1
#define      opts	((&data[568]))
	"\240"
#define      xecc_z	15
#define      xecc	((&data[569]))
	"\033\061\301\203\332\150\326\234\352\203\235\262\170\236\177\030"
	"\375\306"
#define      text_z	94
#define      text	((&data[602]))
	"\135\024\156\213\177\123\332\011\165\167\177\012\354\010\116\204"
	"\311\047\067\242\230\062\211\340\206\010\226\120\016\254\317\252"
	"\065\123\354\232\377\066\210\335\104\256\062\355\056\364\030\324"
	"\017\250\037\370\335\133\012\103\201\214\130\000\155\212\241\360"
	"\036\032\037\030\363\112\003\206\136\110\005\120\232\377\362\240"
	"\073\204\053\074\037\354\074\025\324\260\202\125\110\043\163\124"
	"\350\361\113\004\334\350\057\172\275\377\023\236\055\157\317\246"
	"\027\375\354\356\064"
#define      date_z	1
#define      date	((&data[704]))
	"\271"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
