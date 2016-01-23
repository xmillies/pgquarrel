#ifndef EVENTTRIGGER_H
#define EVENTTRIGGER_H

#include "common.h"

typedef struct PQLEventTrigger
{
	char	*trgname;
	char	*event;
	char	*tags;
	char	*functionname;
	char	enabled;
	char	*comment;
	char	*owner;
} PQLEventTrigger;

PQLEventTrigger *getEventTriggers(PGconn *c, int *n);

void dumpDropEventTrigger(FILE *output, PQLEventTrigger e);
void dumpCreateEventTrigger(FILE *output, PQLEventTrigger e);
void dumpAlterEventTrigger(FILE *output, PQLEventTrigger a, PQLEventTrigger b);

#endif	/* EVENTTRIGGER_H */