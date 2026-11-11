
/* ==== FUN_12009910 @ 12009910 ==== 
 * signature: float10 __cdecl FUN_12009910(int param_1, int param_2, undefined4 param_3)
 * body: 12009910-12009a3b
 */

float10 __cdecl FUN_12009910(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64 [2];
  int iStack_5c;
  undefined1 local_58 [2];
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  double dStack_4e;
  double dStack_46;
  undefined1 auStack_2c [2];
  double dStack_2a;
  double dStack_22;
  double dStack_1a;
  
  local_6c = 0;
  local_68 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,local_64);
  DAT_12039a9c = (*pcVar1)(local_64[0],param_3,param_1 + 1,local_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_5c);
  DAT_12039a9c = (*pcVar1)(iStack_5c,param_3,param_2 + 1,auStack_2c);
  dStack_2a = (double)CONCAT26(uStack_50,CONCAT42(uStack_54,uStack_56)) - dStack_2a;
  if (dStack_2a != 0.0) {
    return (float10)dStack_2a;
  }
  if (dStack_4e - dStack_22 != 0.0) {
    return (float10)(dStack_4e - dStack_22);
  }
  dStack_46 = dStack_46 - dStack_1a;
  uStack_54 = (undefined4)((ulonglong)dStack_46 >> 0x20);
  if (dStack_46 != 0.0) {
    local_6c = SUB84(dStack_46,0);
    local_68 = uStack_54;
  }
  return (float10)(double)CONCAT44(local_68,local_6c);
}


