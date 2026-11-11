
/* ==== FUN_100044f0 @ 100044f0 ==== 
 * signature: undefined __cdecl FUN_100044f0(undefined4 param_1, short * param_2)
 * body: 100044f0-10004544
 */

void __cdecl FUN_100044f0(undefined4 param_1,short *param_2)

{
  short *psVar1;
  code *pcVar2;
  
  psVar1 = param_2;
  *param_2 = 0x6a;
  pcVar2 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,5,(int *)&param_2);
  DAT_100173bc = (*pcVar2)(param_2,param_1,s_value_1001312c,0,psVar1);
  if (*psVar1 == 0x75) {
    *(undefined4 *)(psVar1 + 3) = param_1;
  }
  return;
}


