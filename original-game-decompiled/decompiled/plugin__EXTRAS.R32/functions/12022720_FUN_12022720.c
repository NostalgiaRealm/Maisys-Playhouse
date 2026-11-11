
/* ==== FUN_12022720 @ 12022720 ==== 
 * signature: undefined4 __cdecl FUN_12022720(int param_1, int param_2, byte param_3, int * param_4)
 * body: 12022720-12022808
 */

undefined4 __cdecl FUN_12022720(int param_1,int param_2,byte param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  undefined2 local_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  local_10 = 0;
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,(int *)&local_8);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_6,local_8),param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  if ((*(short *)(param_1 + 0xc) != 0) || ((param_3 & 0x80) != 0)) {
    local_8 = 1;
    uStack_6 = 0;
    uStack_4 = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,&local_8,&local_10);
    *param_4 = *param_4 + local_10;
    FUN_120233e0(param_1,param_2,&local_10);
    *param_4 = *param_4 + local_10;
  }
  return 0;
}


