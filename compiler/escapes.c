/* escape sequence -> character */
/* Source: http://web.cs.mun.ca/~michael/c/ascii-table.html */

/* XXX: this isn't smart enough to deal with octal sequences like \012
 * in fact even the interface (one character) is too stupid to start
 * with */

extern void fail(char*);

int escape_code(char c)
{
	switch (c) {
		case '0':	return 0x00;
		case 'a':	return 0x07;
		case 'b':	return 0x08;
		case 't':	return 0x09;
		case 'f':	return 0x0c;
		case 'n':	return 0x0a;
		case 'r':	return 0x0d;
		case 92:	return 92;	/* \\ */
		case 39:	return 39;	/* \' */
	}

	fail("invalid escape sequence");
}
