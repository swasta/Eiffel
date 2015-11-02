/*
 * Code for class PLAYER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F862_6974(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6975(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6976(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6977(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6978(EIF_REFERENCE);
extern EIF_TYPED_VALUE F862_6979(EIF_REFERENCE);
extern void F862_6980(EIF_REFERENCE);
extern void F862_6981(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit862(void);

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

/* {PLAYER}.current_position */
EIF_TYPED_VALUE F862_6974 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4904,Dtype(Current)));
	return r;
}


/* {PLAYER}.die1_value */
EIF_TYPED_VALUE F862_6975 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4905,Dtype(Current)));
	return r;
}


/* {PLAYER}.die2_value */
EIF_TYPED_VALUE F862_6976 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4906,Dtype(Current)));
	return r;
}


/* {PLAYER}.random */
EIF_TYPED_VALUE F862_6977 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4907,Dtype(Current)));
	return r;
}


/* {PLAYER}.money */
EIF_TYPED_VALUE F862_6978 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4908,Dtype(Current)));
	return r;
}


/* {PLAYER}.n */
EIF_TYPED_VALUE F862_6979 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4909,Dtype(Current)));
	return r;
}


/* {PLAYER}.next_move */
void F862_6980 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_move";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 0, 12660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(861, Current, 12660);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4905, 0x10000000, 1); /* die1_value */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4907, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "next_number", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(4905, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4906, 0x10000000, 1); /* die2_value */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4907, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4901, "next_number", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(4906, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 6L)) + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4905, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4906, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ti4_2) && (EIF_BOOLEAN)(ti4_3 != ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4904, 0x10000000, 1); /* current_position */
		(*(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype)))--;
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4905, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4906, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3) <= ((EIF_INTEGER_32) 40L))) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 4904, 0x10000000, 1); /* current_position */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4905, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4906, dtype));
			(*(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype))) += (EIF_INTEGER_32) (ti4_1 + ti4_2);
		}
	}
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype));
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 10L)) == ((EIF_INTEGER_32) 5L))) {
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4908, dtype));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 30L))) {
			RTHOOK(9);
			RTDBGAA(Current, dtype, 4908, 0x10000000, 1); /* money */
			*(EIF_INTEGER_32 *)(Current + RTWA(4908, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 4908, 0x10000000, 1); /* money */
			(*(EIF_INTEGER_32 *)(Current + RTWA(4908, dtype))) -= ((EIF_INTEGER_32) 30L);
		}
	}
	RTHOOK(11);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype));
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 10L)) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 4908, 0x10000000, 1); /* money */
		(*(EIF_INTEGER_32 *)(Current + RTWA(4908, dtype))) += ((EIF_INTEGER_32) 70L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {PLAYER}.make */
void F862_6981 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 861, Current, 0, 1, 12661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(861, Current, 12661);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4904, 0x10000000, 1); /* current_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(4904, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4907, 0xF800035C, 0); /* random */
	tr1 = RTLNSMART(RTWCT(4907, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4903, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4907, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4907, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg1;
	ui4_2 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 3L));
	ui4_3 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4902, "set_values", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 4908, 0x10000000, 1); /* money */
	*(EIF_INTEGER_32 *)(Current + RTWA(4908, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4909, 0x10000000, 1); /* n */
	*(EIF_INTEGER_32 *)(Current + RTWA(4909, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

void EIF_Minit862 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
