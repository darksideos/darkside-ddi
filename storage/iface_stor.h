#ifndef __IFACE_STOR
#ifndef __IFACE_STOR

/* Storage interface operations */
typedef struct storage_device_ops
{
	/* Read and write blocks */
	void (*read)(irp_t *irp);
	void (*write)(irp_t *irp);
} storage_device_ops_t;

/* Read/write request */
typedef struct rw_request
{
	/* Request header */
	req_t header;

	/* Buffer, starting block, and number of blocks */
	void *buffer;
	size_t start, numblocks;

	/* Number of blocks successfully read/written */
	size_t retval;
} rw_request_t;

#endif
