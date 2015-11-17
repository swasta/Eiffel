/*
 * Code for class V_INPUT_STREAM [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F884_6982(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F884_6983(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F884_6984(EIF_REFERENCE);
extern void F884_7340(EIF_REFERENCE, int);
extern void EIF_Minit884(void);

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

/* {V_INPUT_STREAM}.search */
void F884_6982 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "search";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTEAA(l_feature_name, 883, Current, 0, 1, 12661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(883, Current, 12661);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4911, dtype))(Current)).it_b);
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4910, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb1) break;
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4912, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("box_effect", EX_POST);
		tb2 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5042, "is_empty", tr1))(tr1)).it_b);
		if (!tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5045, "any_item", tr1))(tr1)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {V_INPUT_STREAM}.satisfy */
void F884_6983 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "satisfy";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 883, Current, 0, 1, 12662);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(883, Current, 12662);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0xFF02,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4916, dtype, dftype);
			typarr0[9] = l_type.annotations | 0xFF00;
			typarr0[10] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 883, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pred_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4307, "open_count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4911, dtype))(Current)).it_b);
		if (!tb2) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4916, dtype, dftype);
					typarr0[4] = l_type.annotations | 0xFF00;
					typarr0[5] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4910, dtype))(Current)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			ur1 = RTCCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4912, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("box_effect", EX_POST);
		tb2 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5042, "is_empty", tr1))(tr1)).it_b);
		if (!tb3) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(4916, dtype, dftype);
					typarr0[4] = l_type.annotations | 0xFF00;
					typarr0[5] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5045, "any_item", tr2))(tr2)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {V_INPUT_STREAM}.box */
EIF_TYPED_VALUE F884_6984 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "box";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
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
	
	RTEAA(l_feature_name, 883, Current, 0, 0, 12663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(883, Current, 12663);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4911, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4916, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000362, 0,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(4916, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4910, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5040, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {V_INPUT_STREAM}._invariant */
void F884_7340 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 883, Current, 0, 7339);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("box_count_constraint", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5048, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1L))) {
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

void EIF_Minit884 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
