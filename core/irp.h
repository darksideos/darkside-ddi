#ifndef __IRP_H
#define __IRP_H

/* IRP structure */
typedef struct irp
{
	/* Message header */
	message_t header;

	/* Completion object */
	void *completion_obj;

	/* Stack position */
	int stack_pos;
} irp_t;

#endif