#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct hashtab_entry {
	char *key;
	void *val;
	struct hashtab_entry *next;
} hashtab_entry_t;

typedef struct hashtab {
	int nbuck;			/* number of buckets */
	hashtab_entry_t **buck;		/* buckets */
} hashtab_t;

extern hashtab_t* new_hashtab(void);
extern void* hashtab_lookup(hashtab_t* htab, char* key);
extern void hashtab_insert(hashtab_t* htab, char* key, void* val);

#endif
