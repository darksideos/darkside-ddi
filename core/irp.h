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

/* Request within an IRP */
typedef struct req
{
	/* Request size */
	size_t length;

	/* Interface and request code */
	int iface, request;

	/* Handler state */
	void *state;
} req_t;

#endif