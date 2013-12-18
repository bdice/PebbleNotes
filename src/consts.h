// AppMessage key
enum {
	KEY_CODE = 0,
	KEY_SCOPE = 1,
	KEY_COUNT = 5,
	KEY_ITEM = 6,
	KEY_LISTID = 10,
	KEY_TASKID = 11,
	KEY_TITLE = 20,
	KEY_SIZE = 21,
	KEY_ISDONE = 22,
	KEY_HASCOMMENT = 23,
	KEY_COMMENT = 24,
	KEY_ERROR = 50,
};
// Message codes
enum {
	CODE_GET = 10,
	CODE_CHANGE = 11,
	CODE_ARRAY_START = 20,
	CODE_ARRAY_ITEM = 21,
	CODE_ARRAY_END = 22,
	CODE_ERROR = 50,
};
// Message scopes
enum {
	SCOPE_LISTS = 0,
	SCOPE_TASKS = 1,
	SCOPE_TASK = 2,
};
