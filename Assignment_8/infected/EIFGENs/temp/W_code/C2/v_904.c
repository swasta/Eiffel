/*
 * Code for class V_MAP [INTEGER_32, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F904_7231(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F904_7232(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F904_7235(EIF_REFERENCE);
extern EIF_TYPED_VALUE F904_7236(EIF_REFERENCE);
extern EIF_TYPED_VALUE F904_7237(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F904_7238(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F904_7361(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F904_7362(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F904_7363(EIF_REFERENCE, int);
extern void EIF_Minit904(void);
extern EIF_REFERENCE _A904_47_3();
extern EIF_REFERENCE _A904_52_2();
extern EIF_REFERENCE _A904_53_2();

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

/* {V_MAP}.exists_key */
EIF_TYPED_VALUE F904_7231 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exists_key";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,loc1);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 903, Current, 1, 1, 13122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 13122);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, dtype, dftype);
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 903, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pred_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4307, "open_count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("precondition_satisfied", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[13] = l_type.annotations | 0xFF00;
				typarr0[14] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = arg1;
		RTAR(tr1,arg1);
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
		*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,206,0xFFFF};
			EIF_TYPE typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_53_2, (EIF_POINTER)(0),5185, tr3, 0, 1, 903, tr1, 1);
		}
		ur1 = RTCCL(tr5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5043, "for_all", tr2))(tr2, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF8000385, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5073, "after", loc1))(loc1)).it_b);
		if (!tb2) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5085, "key", loc1))(loc1)).it_i4);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4912, "forth", loc1))(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(8,2);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5044, "exists", tr2))(tr2, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {V_MAP}.for_all_keys */
EIF_TYPED_VALUE F904_7232 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "for_all_keys";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLR(8,loc1);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 903, Current, 1, 1, 13123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 13123);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, dtype, dftype);
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 903, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pred_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4307, "open_count", arg1));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("precondition_satisfied", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[13] = l_type.annotations | 0xFF00;
				typarr0[14] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = arg1;
		RTAR(tr1,arg1);
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
		*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr4)))(tr4).it_r;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,206,0xFFFF};
			EIF_TYPE typres0;
			typarr0[3] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_52_2, (EIF_POINTER)(0),5184, tr3, 0, 1, 903, tr1, 1);
		}
		ur1 = RTCCL(tr5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5043, "for_all", tr2))(tr2, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF8000385, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc1))(loc1)).it_b);
		if (tb2) break;
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5085, "key", loc1))(loc1)).it_i4);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		ur1 = RTCCL(tr1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", arg1))(arg1, ur1x)).it_b);
		tb1 = tb3;
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc1))(loc1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,2);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5043, "for_all", tr2))(tr2, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {V_MAP}.out */
EIF_TYPED_VALUE F904_7235 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 903, Current, 2, 0, 13124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 13124);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	Result = RTMS_EX_H("",0,0);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800035E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(862, 0x01).id);
	ur1 = RTCCL(Result);
	tr2 = RTMS_EX_H("",0,0);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4927, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000385, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc2))(loc2)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tr1 = RTMS_EX_H("(",1,40);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5085, "key", loc2))(loc2)).it_i4);
		ur1 = RTLN(eif_new_type(206, 0x00).id);
		*(EIF_INTEGER_32 *)ur1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		RTHOOK(6);
		tr1 = RTMS_EX_H(", ",2,11296);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4910, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H(")",1,41);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		RTHOOK(9);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5075, "is_last", loc2))(loc2)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(10);
			tr1 = RTMS_EX_H(" ",1,32);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4922, "output", loc1))(loc1, ur1x);
		}
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc2))(loc2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {V_MAP}.map */
EIF_TYPED_VALUE F904_7236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "map";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 903, Current, 1, 0, 13125);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 13125);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000380, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,896,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, Dtype(Current), Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2319, Dtype(Current), Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000385, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF8000380, 0,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5085, "key", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4910, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4951, "updated", Result))(Result, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {V_MAP}.equivalent */
EIF_TYPED_VALUE F904_7237 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "equivalent";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 2, 13126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 13126);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5111, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, dtype, dftype);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, dtype, dftype);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
	ur1 = RTCCL(tr2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", tr1))(tr1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5111, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,174,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[4] = l_type.annotations | 0xFF00;
				typarr0[5] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[6] = l_type.annotations | 0xFF00;
				typarr0[7] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4337, "item", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {V_MAP}.key */
EIF_TYPED_VALUE F904_7238 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "key";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 903, Current, 0, 1, 13127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(903, Current, 13127);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_key", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5112, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, dtype, dftype);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg1;
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
		tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_47_3, (EIF_POINTER)(0),5117, tr3, 0, 1, -1, tr1, 1);
	}
	ur1 = RTCCL(tr5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5047, "filtered", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5045, "any_item", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT(NULL, EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4945, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,174,0xFF01,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(5119, dtype, dftype);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg1;
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
			tr5 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A904_47_3, (EIF_POINTER)(0),5117, tr3, 0, 1, -1, tr1, 1);
		}
		ur1 = RTCCL(tr5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5047, "filtered", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5045, "any_item", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {V_MAP}.inline-agent#1 of for_all_keys */
EIF_TYPED_VALUE F904_7361 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of for_all_keys";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 2, 13129);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 13129);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, Dtype(Current), Dftype(Current));
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 903, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, Dtype(Current), Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4300, "precondition", arg2))(arg2, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
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
#undef arg2
#undef arg1
}

/* {V_MAP}.inline-agent#1 of exists_key */
EIF_TYPED_VALUE F904_7362 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of exists_key";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 903, Current, 0, 2, 13130);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(903, Current, 13130);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0,0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, Dtype(Current), Dftype(Current));
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 903, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,174,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(5119, Dtype(Current), Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4300, "precondition", arg2))(arg2, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
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
#undef arg2
#undef arg1
}

/* {V_MAP}._invariant */
void F904_7363 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 903, Current, 0, 7362);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("bag_domain_definition", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5109, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4991, "domain", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4946, "range", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4935, "is_model_equal", tr2))(tr2, ur1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("bag_definition", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5109, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4949, "to_bag", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	ur1 = RTCCL(tr3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4935, "is_model_equal", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
}

void EIF_Minit904 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
