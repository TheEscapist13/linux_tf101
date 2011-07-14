#include <linux/pagemap.h>
#include <linux/blkdev.h>

<<<<<<< HEAD
#define PART_NAME_SIZE 128

=======
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
/*
 * add_gd_partition adds a partitions details to the devices partition
 * description.
 */
struct parsed_partitions {
	struct block_device *bdev;
	char name[BDEVNAME_SIZE];
	struct {
		sector_t from;
		sector_t size;
		int flags;
<<<<<<< HEAD
		char name[PART_NAME_SIZE];
=======
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
	} parts[DISK_MAX_PARTS];
	int next;
	int limit;
	bool access_beyond_eod;
	char *pp_buf;
};

static inline void *read_part_sector(struct parsed_partitions *state,
				     sector_t n, Sector *p)
{
	if (n >= get_capacity(state->bdev->bd_disk)) {
		state->access_beyond_eod = true;
		return NULL;
	}
	return read_dev_sector(state->bdev, n, p);
}

static inline void
<<<<<<< HEAD
put_named_partition(struct parsed_partitions *p, int n, sector_t from,
	sector_t size, const char *name, size_t name_size)
=======
put_partition(struct parsed_partitions *p, int n, sector_t from, sector_t size)
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
{
	if (n < p->limit) {
		char tmp[1 + BDEVNAME_SIZE + 10 + 1];

		p->parts[n].from = from;
		p->parts[n].size = size;
		snprintf(tmp, sizeof(tmp), " %s%d", p->name, n);
		strlcat(p->pp_buf, tmp, PAGE_SIZE);
<<<<<<< HEAD
		if (name) {
			if (name_size > PART_NAME_SIZE - 1)
				name_size = PART_NAME_SIZE - 1;
			memcpy(p->parts[n].name, name, name_size);
			p->parts[n].name[name_size] = 0;
			snprintf(tmp, sizeof(tmp), " (%s)", p->parts[n].name);
			strlcat(p->pp_buf, tmp, PAGE_SIZE);
		}
	}
}

static inline void
put_partition(struct parsed_partitions *p, int n, sector_t from, sector_t size)
{
	put_named_partition(p, n, from, size, NULL, 0);
}

=======
	}
}

>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
extern int warn_no_part;

