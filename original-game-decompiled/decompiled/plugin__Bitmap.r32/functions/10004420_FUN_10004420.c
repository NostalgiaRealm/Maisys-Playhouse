
/* ==== FUN_10004420 @ 10004420 ==== 
 * signature: short * __cdecl FUN_10004420(int param_1, short * param_2, int * param_3)
 * body: 10004420-100044ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * __cdecl FUN_10004420(int param_1,short *param_2,int *param_3)

{
  short *psVar1;
  code *pcVar2;
  int local_4;
  
  psVar1 = param_2;
  if ((*param_2 == 0x73) || (*param_2 == 0x69)) {
    param_2 = (short *)0x0;
    pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1c,&local_4);
    DAT_100173bc = (*pcVar2)(local_4,psVar1,param_1,&param_2,0);
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    if (param_2 != (short *)0x0) {
      _DAT_10016a00 = 0x6a;
      pcVar2 = (code *)FUN_100089c7((int)param_2,0,0x16,&param_1);
      DAT_100173bc = (*pcVar2)(param_1,s_value_1001312c,0,&DAT_10016a00);
      return (short *)&DAT_10016a00;
    }
    FUN_100044f0(*(undefined4 *)(psVar1 + 1),(short *)&DAT_10016a00);
    param_2 = (short *)&DAT_10016a00;
  }
  return param_2;
}


