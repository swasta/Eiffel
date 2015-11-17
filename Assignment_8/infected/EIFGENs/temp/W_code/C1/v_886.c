/*
 * Code for class V_DEFAULT [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F886_6985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F886_6986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F886_6987(EIF_REFERENCE);
extern void EIF_Minit886(void);

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

/* {V_DEFAULT}.default_value */
EIF_TYPED_VALUE F886_6985 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 885, Current, 3, 0, 12669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(885, Current, 12669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000115, 0, 0); /* loc1 */
	tr1 = RTLNTY2(RTWCT(4920, dtype, Dftype(Current)), 0x00);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3548, "has_default", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3555, "default", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4918, dtype));
		loc2 = ti4_1;
		if ((EIF_TRUE)) {
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
			Result = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(6);
			RTCT0(NULL, EX_CHECK);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4919, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3546, "type_id", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2107, "new_instance_of", tr2))(tr2, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTCCL(tr3);
			RTOB(*(EIF_INTEGER_32 *), RTWCT(4920, dtype, Dftype(Current)), tr1, loc3, tb1);
			if (tb1) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(7);
			RTDBGAL(Current, 0, 0x10000000, 0,0); /* Result */
			Result = (EIF_INTEGER_32) loc3;
			RTHOOK(8);
			RTDBGAA(Current, dtype, 4918, 0x10000000, 0); /* default_value_cache */
			*(EIF_INTEGER_32 *)(Current + RTWA(4918, dtype)) = (EIF_INTEGER_32) loc3;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {V_DEFAULT}.default_value_cache */
EIF_TYPED_VALUE F886_6986 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4918,Dtype(Current)));
	return r;
}


/* {V_DEFAULT}.internal */
RTOID (F886_6987)
EIF_TYPED_VALUE F886_6987 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F886_6987);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 885, Current, 0, 0, 12671);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(885, Current, 12671);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000085, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(133, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit886 (void)
{
	GTCX
	RTOTS (6987,F886_6987)
}


#ifdef __cplusplus
}
#endif
