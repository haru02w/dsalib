#ifndef DSA_ERROR_H_
#define DSA_ERROR_H_

typedef enum {
	DS_SUCESS,
	DS_FAILURE,
	DS_INDEX_OUT_OF_BOUNDS,
	DS_INVALID_POINTER,
	DS_INVALID_SIZE,
} dsError_t;

#endif // !DSA_ERROR_H_
