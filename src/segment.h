#ifndef _SCOUTFS_SEGMENT_H_
#define _SCOUTFS_SEGMENT_H_

struct scoutfs_item *scoutfs_read_segment_item(struct super_block *sb,
					       struct scoutfs_key *key);
int scoutfs_write_dirty_items(struct super_block *sb);

#endif
