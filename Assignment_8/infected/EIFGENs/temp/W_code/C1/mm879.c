/*
 * Code for class MML_MAP [INTEGER_32, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F879_7005(EIF_REFERENCE);
extern void F879_7006(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7007(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7008(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7009(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7010(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7011(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7012(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7015(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7016(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7017(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7018(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7019(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7020(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7021(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7022(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7023(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7024(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7025(EIF_REFERENCE);
extern EIF_TYPED_VALUE F879_7026(EIF_REFERENCE);
extern void F879_7027(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7028(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F879_7029(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F879_7341(EIF_REFERENCE, int);
extern void EIF_Minit879(void);
extern EIF_REFERENCE _A879_56_3();
extern EIF_REFERENCE _A879_57_3();

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

/* {MML_MAP}.default_create */
void F879_7005 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 878, Current, 0, 0, 12693);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12693);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4956, 0xF8000363, 0); /* keys */
	tr1 = RTLNSMART(RTWCT(4956, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4956, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4957, 0xF8000363, 0); /* values */
	tr1 = RTLNSMART(RTWCT(4957, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4957, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
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

/* {MML_MAP}.singleton */
void F879_7006 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "singleton";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 878, Current, 0, 2, 12694);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12694);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4956, 0xF8000363, 0); /* keys */
	tr1 = RTLNSMART(RTWCT(4956, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5138, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4956, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4957, 0xF8000363, 0); /* values */
	tr1 = RTLNSMART(RTWCT(4957, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5138, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4957, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {MML_MAP}.has */
EIF_TYPED_VALUE F879_7007 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 878, Current, 0, 1, 12695);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12695);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, Dtype(Current), dftype);
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A879_57_3, (EIF_POINTER)(0),4960, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5107, "exists", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.is_empty */
EIF_TYPED_VALUE F879_7008 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 878, Current, 0, 0, 12696);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12696);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

/* {MML_MAP}.is_constant */
EIF_TYPED_VALUE F879_7009 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 878, Current, 0, 1, 12697);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12697);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, Dtype(Current), dftype);
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A879_57_3, (EIF_POINTER)(0),4960, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5108, "for_all", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.for_all */
EIF_TYPED_VALUE F879_7010 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "for_all";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 878, Current, 1, 1, 12698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12698);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, Dftype(Current));
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
			typarr0[10] = l_type.annotations | 0xFF00;
			typarr0[11] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4307, "open_count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tb2 = '\0';
		if (Result) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4961, dtype, Dftype(Current));
					typarr0[4] = l_type.annotations | 0xFF00;
					typarr0[5] = l_type.id;
				}
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4962, dtype, Dftype(Current));
					typarr0[6] = l_type.annotations | 0xFF00;
					typarr0[7] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLNTS(typres0.id, 3, 0);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
			tb2 = tb3;
		}
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.exists */
EIF_TYPED_VALUE F879_7011 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 878, Current, 1, 1, 12699);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12699);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, Dftype(Current));
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
			typarr0[10] = l_type.annotations | 0xFF00;
			typarr0[11] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4307, "open_count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		tb2 = '\01';
		if (!Result) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4961, dtype, Dftype(Current));
					typarr0[4] = l_type.annotations | 0xFF00;
					typarr0[5] = l_type.id;
				}
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4962, dtype, Dftype(Current));
					typarr0[6] = l_type.annotations | 0xFF00;
					typarr0[7] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLNTS(typres0.id, 3, 0);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr2))(tr2, ui4_1x)).it_i4);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
			tb2 = tb3;
		}
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(6);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.item */
EIF_TYPED_VALUE F879_7012 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 878, Current, 1, 1, 12700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12700);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_domain", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4945, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5041, "has", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A879_56_3, (EIF_POINTER)(0),4959, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5126, "index_satisfying", tr1))(tr1, ur1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = loc1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "has_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4917, "default_value", tr1))(tr1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.domain */
EIF_TYPED_VALUE F879_7013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "domain";
	RTEX;
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 878, Current, 0, 0, 12701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12701);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5060, Dtype(tr1)))(tr1, ur1x);
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
#undef ur1
}

/* {MML_MAP}.range */
EIF_TYPED_VALUE F879_7014 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "range";
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
	
	RTEAA(l_feature_name, 878, Current, 1, 0, 12702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
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
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

/* {MML_MAP}.image */
EIF_TYPED_VALUE F879_7015 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 878, Current, 0, 1, 12703);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12703);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4953, Dtype(Current)))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4946, "range", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
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

/* {MML_MAP}.sequence_image */
EIF_TYPED_VALUE F879_7016 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sequence_image";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
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
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 878, Current, 2, 1, 12704);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12704);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,870,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000363, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5017, "count", arg1))(arg1)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5017, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4945, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5013, "item", arg1))(arg1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5041, "has", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(5);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5013, "item", arg1))(arg1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4944, dtype))(Current, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ui4_1x, ui4_2x);
			RTHOOK(6);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTHOOK(7);
	RTDBGAL(Current, 0, 0xF8000366, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,870,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5037, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_MAP}.to_bag */
EIF_TYPED_VALUE F879_7017 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_bag";
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
	
	RTEAA(l_feature_name, 878, Current, 1, 0, 12705);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12705);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000368, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,872,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
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
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF8000368, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4994, "extended", Result))(Result, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

/* {MML_MAP}.count */
EIF_TYPED_VALUE F879_7018 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 878, Current, 0, 0, 12706);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12706);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

/* {MML_MAP}.is_model_equal */
EIF_TYPED_VALUE F879_7019 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 878, Current, 2, 1, 12707);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12707);
	RTCC(arg1, 878, l_feature_name, 1, eif_new_type(863, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	loc2 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4945, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", loc2))(loc2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4935, "is_model_equal", tr1))(tr1, ur1x)).it_b);
		tb1 = tb2;
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
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tb1 = (EIF_BOOLEAN) !Result;
			}
			if (tb1) break;
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ur1 = RTLN(eif_new_type(206, 0x00).id);
			*(EIF_INTEGER_32 *)ur1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "item", loc2))(loc2, ui4_1x)).it_i4);
			ur2 = RTLN(eif_new_type(206, 0x00).id);
			*(EIF_INTEGER_32 *)ur2 = ti4_2;
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4937, dtype))(Current, ur1x, ur2x)).it_b);
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
#undef ur2
#undef ui4_1
#undef arg1
}

/* {MML_MAP}.updated */
EIF_TYPED_VALUE F879_7020 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "updated";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLR(8,ur2);
	RTLR(9,Result);
	RTLR(10,loc2);
	RTLIU(11);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 878, Current, 3, 2, 12708);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12708);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A879_56_3, (EIF_POINTER)(0),4959, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5126, "index_satisfying", tr1))(tr1, ur1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = loc1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "has_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 3, 0xF8000363, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(4);
		ui4_1 = arg2;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc3))(loc3, ui4_1x, ui4_2x);
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4961, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4962, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4958, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF8000363, 0, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4961, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(6,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(8);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", loc2))(loc2)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc2))(loc2, ui4_1x, ui4_2x);
		RTHOOK(9);
		RTDBGAL(Current, 3, 0xF8000363, 0, 0); /* loc3 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4962, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(9,2);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(10,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", loc3))(loc3)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc3))(loc3, ui4_1x, ui4_2x);
		RTHOOK(12);
		RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4961, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4962, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ur1 = RTCCL(loc2);
		ur2 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4958, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(12,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
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

/* {MML_MAP}.removed */
EIF_TYPED_VALUE F879_7021 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "removed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLR(7,loc1);
	RTLR(8,loc2);
	RTLR(9,ur2);
	RTLR(10,Result);
	RTLIU(11);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 878, Current, 3, 1, 12709);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12709);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A879_56_3, (EIF_POINTER)(0),4959, tr3, 0, 1, -1, tr2, 1);
	}
	ur1 = RTCCL(tr5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5126, "index_satisfying", tr1))(tr1, ur1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = loc3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5112, "has_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000363, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4961, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(3,2);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF8000363, 0, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4962, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(4,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		ui4_3 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(8,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
		ui4_2 = ti4_1;
		ui4_3 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc2))(loc2, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(9);
		RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4961, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4962, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4958, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(9,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
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
#undef arg1
}

/* {MML_MAP}.restricted */
EIF_TYPED_VALUE F879_7022 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "restricted";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 878, Current, 4, 1, 12710);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12710);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF8000363, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,2);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF8000363, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,2);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5041, "has", arg1))(arg1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc3))(loc3, ui4_1x, ui4_2x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc4))(loc4, ui4_1x, ui4_2x);
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(10);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc3))(loc3, ui4_1x, ui4_2x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc4))(loc4, ui4_1x, ui4_2x);
	RTHOOK(13);
	RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4958, Dtype(tr1)))(tr1, ur1x, ur2x);
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
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {MML_MAP}.override */
EIF_TYPED_VALUE F879_7023 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "override";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 878, Current, 4, 1, 12711);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12711);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF8000363, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4956, "keys", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 4, 0xF8000363, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4957, "values", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5137, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,3);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4956, "keys", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4956, "keys", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	ui4_3 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc3))(loc3, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4957, "values", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4957, "values", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	ui4_3 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5140, "array_copy_range", loc4))(loc4, ur1x, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4956, "keys", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr2))(tr2, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5041, "has", tr1))(tr1, ui4_1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc3))(loc3, ui4_1x, ui4_2x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5110, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", loc4))(loc4, ui4_1x, ui4_2x);
			RTHOOK(11);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(12);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(13);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc3))(loc3, ui4_1x, ui4_2x);
	RTHOOK(14);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5141, "resize", loc4))(loc4, ui4_1x, ui4_2x);
	RTHOOK(15);
	RTDBGAL(Current, 0, 0xF800036E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc3);
	ur2 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4958, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(15,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {MML_MAP}.inverse */
EIF_TYPED_VALUE F879_7024 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 878, Current, 0, 0, 12712);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12712);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000367, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,871,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
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

/* {MML_MAP}.keys */
EIF_TYPED_VALUE F879_7025 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4956,Dtype(Current)));
	return r;
}


/* {MML_MAP}.values */
EIF_TYPED_VALUE F879_7026 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4957,Dtype(Current)));
	return r;
}


/* {MML_MAP}.make_from_arrays */
void F879_7027 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_arrays";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 878, Current, 0, 2, 12715);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(878, Current, 12715);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4961, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 878, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,867,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4962, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 878, l_feature_name, 2, typres0, 0x01);
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
		RTHOOK(4);
		RTCT("ks_has_no_duplicates", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5109, "bag", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4990, "is_constant", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 4956, 0xF8000363, 0); /* keys */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(4956, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 4957, 0xF8000363, 0); /* values */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(4957, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {MML_MAP}.meq_key */
EIF_TYPED_VALUE F879_7028 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "meq_key";
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
	
	RTEAA(l_feature_name, 878, Current, 0, 2, 12716);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12716);
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

/* {MML_MAP}.meq_value */
EIF_TYPED_VALUE F879_7029 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "meq_value";
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
	
	RTEAA(l_feature_name, 878, Current, 0, 2, 12691);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(878, Current, 12691);
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

/* {MML_MAP}._invariant */
void F879_7341 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 878, Current, 0, 7340);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("same_lower", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5147, "lower", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5147, "lower", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("same_upper", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5146, "upper", tr1));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4957, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(5146, "upper", tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("start_from_one", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4956, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

void EIF_Minit879 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
