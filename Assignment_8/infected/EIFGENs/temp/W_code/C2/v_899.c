/*
 * Code for class V_ARRAY_ITERATOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F899_7194(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F899_7195(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F899_7196(EIF_REFERENCE);
extern void F899_7197(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit899(void);

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

/* {V_ARRAY_ITERATOR}.make */
void F899_7194 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 898, Current, 0, 2, 13074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(898, Current, 13074);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(4916, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 898, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5092, 0xF8000388, 0); /* target */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5092, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5089, 0x10000000, 1); /* index */
		*(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 > ti4_1)) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5089, 0x10000000, 1); /* index */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", arg1))(arg1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5089, 0x10000000, 1); /* index */
			*(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype)) = (EIF_INTEGER_32) arg2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("target_effect", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5092, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("index_effect_has", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", arg1))(arg1)).it_i4);
			tb2 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("index_effect_before", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
		if ((!((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 1L))) || ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("index_effect_after", EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (arg2 > ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5102, "count", arg1))(arg1)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef arg2
#undef arg1
}

/* {V_ARRAY_ITERATOR}.copy */
void F899_7195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy";
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 898, Current, 0, 1, 13075);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(898, Current, 13075);
	RTCC(arg1, 898, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5092, 0xF8000388, 0); /* target */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5092, "target", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5092, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5089, 0x10000000, 1); /* index */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5089, "index", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("target_effect", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5092, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5092, "target", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("index_effect", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5089, "index", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {V_ARRAY_ITERATOR}.target */
EIF_TYPED_VALUE F899_7196 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5092,Dtype(Current)));
	return r;
}


/* {V_ARRAY_ITERATOR}.put */
void F899_7197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 898, Current, 0, 1, 13077);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(898, Current, 13077);
	RTCC(arg1, 898, l_feature_name, 1, RTWCT(4916, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4921, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5084, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
		ui4_1 = ti4_1;
		ur1 = RTCCL(arg1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5034, "replaced_at", tr2))(tr2, ui4_1x, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = tr3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5092, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5092, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5122, "lower", tr4))(tr4)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5089, dtype));
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5129, "put", tr3))(tr3, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("sequence_effect", EX_POST);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5084, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4935, "is_model_equal", tr3))(tr3, ur1x)).it_b);
		if (tb1) {
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
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

void EIF_Minit899 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
