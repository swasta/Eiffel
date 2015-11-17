/*
 * Code for class MML_RELATION [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F896_7030(EIF_REFERENCE);
extern void F896_7031(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7032(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7036(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7037(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7038(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7039(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7040(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7041(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7042(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7043(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7044(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7045(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7047(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7049(EIF_REFERENCE);
extern void F896_7050(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7052(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F896_7342(EIF_REFERENCE, int);
extern void EIF_Minit896(void);
extern EIF_REFERENCE _A896_54_3();

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

/* {MML_RELATION}.default_create */
void F896_7030 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 895, Current, 0, 0, 12808);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12808);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4979, 0xF8000363, 0); /* lefts */
	tr1 = RTLNSMART(RTWCT(4979, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4979, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4980, 0xF800037A, 0); /* rights */
	tr1 = RTLNSMART(RTWCT(4980, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4980, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
}

/* {MML_RELATION}.singleton */
void F896_7031 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "singleton";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 2, 12809);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12809);
	RTCC(arg2, 895, l_feature_name, 2, RTWCT(4985, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4979, 0xF8000363, 0); /* lefts */
	tr1 = RTLNSMART(RTWCT(4979, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5138, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4979, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4980, 0xF800037A, 0); /* rights */
	tr1 = RTLNSMART(RTWCT(4980, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5138, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4980, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {MML_RELATION}.has */
EIF_TYPED_VALUE F896_7032 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 895, Current, 1, 2, 12810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12810);
	RTCC(arg2, 895, l_feature_name, 2, RTWCT(4985, dtype, dftype), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,206,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A896_54_3, (EIF_POINTER)(0),4982, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5126, "index_satisfying", tr1))(tr1, ur1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		if (!Result) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,1);
			ui4_1 = loc1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "has_index", tr1))(tr1, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg2);
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4937, dtype))(Current, ur1x, ur2x)).it_b);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4984, dtype, dftype);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		{
			static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr4) = 1L;
			memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
		}
		*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,206,0xFFFF};
			EIF_TYPE typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A896_54_3, (EIF_POINTER)(0),4982, tr3, 0, 1, -1, tr2, 1);
		}
		ur1 = RTCCL(tr5);
		ui4_2 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5127, "index_satisfying_from", tr1))(tr1, ur1x, ui4_2x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {MML_RELATION}.is_empty */
EIF_TYPED_VALUE F896_7033 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_empty";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 0, 12811);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12811);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5103, "is_empty", tr1))(tr1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {MML_RELATION}.domain */
EIF_TYPED_VALUE F896_7034 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "domain";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 895, Current, 1, 0, 12812);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12812);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5052, "extended", Result))(Result, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {MML_RELATION}.range */
EIF_TYPED_VALUE F896_7035 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "range";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 895, Current, 1, 0, 12813);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12813);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000379, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF8000379, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5052, "extended", Result))(Result, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {MML_RELATION}.image_of */
EIF_TYPED_VALUE F896_7036 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "image_of";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12814);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12814);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000379, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5040, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4969, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_RELATION}.image */
EIF_TYPED_VALUE F896_7037 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "image";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12791);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12791);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000379, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4973, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4967, "range", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {MML_RELATION}.count */
EIF_TYPED_VALUE F896_7038 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "count";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 0, 12792);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12792);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {MML_RELATION}.is_model_equal */
EIF_TYPED_VALUE F896_7039 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_model_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 895, Current, 2, 1, 12793);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12793);
	RTCC(arg1, 895, l_feature_name, 1, eif_new_type(863, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	loc2 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4970, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4970, "count", loc2))(loc2)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tb1 = (EIF_BOOLEAN) !Result;
			}
			if (tb1) break;
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_2 = loc1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4964, "has", loc2))(loc2, ui4_1x, ur1x)).it_b);
			Result = (EIF_BOOLEAN) tb2;
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_RELATION}.extended */
EIF_TYPED_VALUE F896_7040 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "extended";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 895, Current, 2, 2, 12794);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12794);
	RTCC(arg2, 895, l_feature_name, 2, RTWCT(4985, dtype, dftype), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ur1 = RTCCL(arg2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4964, "has", Current))(Current, ui4_1x, ur1x)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4984, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(2,2);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(4);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", loc1))(loc1)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc1))(loc1, ui4_1x, ui4_2x);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF800037A, 0, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4985, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(5,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(7);
		ur1 = RTCCL(arg2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", loc2))(loc2)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ur1x, ui4_1x);
		RTHOOK(8);
		RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4984, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4985, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(8,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {MML_RELATION}.removed */
EIF_TYPED_VALUE F896_7041 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "removed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(12);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLR(11,Result);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 895, Current, 3, 2, 12795);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12795);
	RTCC(arg2, 895, l_feature_name, 2, RTWCT(4985, dtype, dftype), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,206,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A896_54_3, (EIF_POINTER)(0),4982, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5126, "index_satisfying", tr1))(tr1, ur1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = loc3;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "has_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb2) {
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4937, dtype))(Current, ur1x, ur2x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4984, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(3,2);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF800037A, 0, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4985, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(6,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(8,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4984, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4985, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(9,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {MML_RELATION}.restricted */
EIF_TYPED_VALUE F896_7042 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "restricted";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 895, Current, 4, 1, 12796);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12796);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF800037A, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc3;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5041, "has", arg1))(arg1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc1))(loc1, ui4_1x, ui4_2x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ur1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc2))(loc2, ui4_1x, ui4_2x);
	RTHOOK(13);
	RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_RELATION}.inverse */
EIF_TYPED_VALUE F896_7043 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "inverse";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 0, 12797);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12797);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800037E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,894,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
}

/* {MML_RELATION}.union */
EIF_TYPED_VALUE F896_7044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "union";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12798);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12798);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, Dtype(Current), Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4977, "difference", Current))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,3);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,3);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr3))(tr3)).it_i4);
	ui4_2 = ti4_1;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4979, "lefts", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,3);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr3))(tr3)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4970, "count", arg1))(arg1)).it_i4);
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr3))(tr3)).it_i4);
	ui4_2 = ti4_1;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4980, "rights", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,3);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr3))(tr3)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4970, "count", arg1))(arg1)).it_i4);
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {MML_RELATION}.intersection */
EIF_TYPED_VALUE F896_7045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "intersection";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 895, Current, 4, 1, 12799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12799);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF800037A, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc3;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_2 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4964, "has", arg1))(arg1, ui4_1x, ur1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc1))(loc1, ui4_1x, ui4_2x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ur1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc2))(loc2, ui4_1x, ui4_2x);
	RTHOOK(13);
	RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_RELATION}.difference */
EIF_TYPED_VALUE F896_7046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "difference";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 895, Current, 4, 1, 12800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12800);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF800037A, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc3;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_2 = loc3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4964, "has", arg1))(arg1, ui4_1x, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc1))(loc1, ui4_1x, ui4_2x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc3;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ur1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc2))(loc2, ui4_1x, ui4_2x);
	RTHOOK(13);
	RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc1);
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4981, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_RELATION}.sym_difference */
EIF_TYPED_VALUE F896_7047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sym_difference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12801);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12801);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,895,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, Dtype(Current), Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800037F, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4975, "union", Current))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4976, "intersection", Current))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4977, "difference", (tr1)))((tr1), ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {MML_RELATION}.lefts */
EIF_TYPED_VALUE F896_7048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4979,Dtype(Current)));
	return r;
}


/* {MML_RELATION}.rights */
EIF_TYPED_VALUE F896_7049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4980,Dtype(Current)));
	return r;
}


/* {MML_RELATION}.make_from_arrays */
void F896_7050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_arrays";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 2, 12804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12804);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4984, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 895, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4985, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 895, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_lower", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5147, "lower", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5147, "lower", arg2));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_upper", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5146, "upper", arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(5146, "upper", arg2));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("start_from_one", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5147, "lower", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 4979, 0xF8000363, 0); /* lefts */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4979, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4980, 0xF800037A, 0); /* rights */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(4980, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MML_RELATION}.meq_left */
EIF_TYPED_VALUE F896_7051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "meq_left";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,ur1);
	RTLR(1,ur2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 2, 12805);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12805);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ur1 = RTLN(eif_new_type(206, 0x00).id);
	*(EIF_INTEGER_32 *)ur1 = arg1;
	ur2 = RTLN(eif_new_type(206, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = arg2;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4937, Dtype(Current)))(Current, ur1x, ur2x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {MML_RELATION}.meq_right */
EIF_TYPED_VALUE F896_7052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "meq_right";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 2, 12806);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(895, Current, 12806);
	RTCC(arg1, 895, l_feature_name, 1, RTWCT(4985, Dtype(Current), Dftype(Current)), 0x00);
	RTCC(arg2, 895, l_feature_name, 2, RTWCT(4985, Dtype(Current), Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4937, Dtype(Current)))(Current, ur1x, ur2x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {MML_RELATION}._invariant */
void F896_7342 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 895, Current, 0, 7341);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("same_lower", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5147, "lower", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5147, "lower", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("same_upper", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5146, "upper", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4980, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5146, "upper", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("start_from_one", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4979, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5147, "lower", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit896 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
