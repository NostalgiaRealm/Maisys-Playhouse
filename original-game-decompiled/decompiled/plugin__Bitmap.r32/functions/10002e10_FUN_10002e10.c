
/* ==== FUN_10002e10 @ 10002e10 ==== 
 * signature: undefined4 __cdecl FUN_10002e10(int param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 10002e10-10002e7d
 */

undefined4 __cdecl FUN_10002e10(int param_1,int *param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = FUN_100086d8(param_2,(int *)s_bitmapvariable_100130c4);
  psVar1 = param_4;
  if (cVar2 != '\0') {
    if ((*param_4 == 0x73) || (*param_4 == 0x6a)) {
      pcVar3 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,(int *)&param_2);
      DAT_100173bc = (*pcVar3)(param_2,psVar1,param_1 + 0x3e);
      return 0;
    }
  }
  return 0x10000;
}


