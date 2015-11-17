/*
 * Code for class V_ORDER [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F887_6975(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F887_6976(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F887_6977(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F887_6978(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit887(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {V_ORDER}.less */
EIF_TYPED_VALUE F887_6975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "less";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 886, Current, 0, 2, 12657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(886, Current, 12657);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 < arg2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (EIF_FALSE && EIF_TRUE);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition_non_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (arg1 < arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definition_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_FALSE || EIF_FALSE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (EIF_FALSE && EIF_TRUE))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_ORDER}.less_equal */
EIF_TYPED_VALUE F887_6976 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "less_equal";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 886, Current, 0, 2, 12658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(886, Current, 12658);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 <= arg2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) EIF_FALSE;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition_non_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (arg1 <= arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definition_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_FALSE || EIF_FALSE)) || ((EIF_BOOLEAN)(Result == EIF_FALSE)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_ORDER}.greater */
EIF_TYPED_VALUE F887_6977 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "greater";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 886, Current, 0, 2, 12659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(886, Current, 12659);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 > arg2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (EIF_TRUE && EIF_FALSE);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition_non_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (arg1 > arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definition_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_FALSE || EIF_FALSE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (EIF_TRUE && EIF_FALSE))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {V_ORDER}.greater_equal */
EIF_TYPED_VALUE F887_6978 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "greater_equal";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 886, Current, 0, 2, 12660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(886, Current, 12660);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 >= arg2);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) EIF_FALSE;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition_non_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_TRUE && EIF_TRUE)) || ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (arg1 >= arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definition_void", EX_POST);
		if ((!((EIF_BOOLEAN) (EIF_FALSE || EIF_FALSE)) || ((EIF_BOOLEAN)(Result == EIF_FALSE)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit887 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
