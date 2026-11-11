
/* ==== FUN_12010800 @ 12010800 ==== 
 * signature: int __cdecl FUN_12010800(int param_1, uint param_2, int param_3)
 * body: 12010800-1201091a
 */

int __cdecl FUN_12010800(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int local_74;
  int local_70;
  int iStack_6c;
  undefined1 auStack_68 [18];
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 local_2c [22];
  
  local_70 = 0x10000;
  if (0 < (int)param_2) {
    local_2c[0] = 10;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_74);
    DAT_12039a9c = (*pcVar1)(local_74,param_1,param_3,local_2c);
    local_70 = DAT_12039a9c;
    if (DAT_12039a9c == 0) {
      FUN_1200fe30(param_1,param_2);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_74);
      DAT_12039a9c = (*pcVar1)(local_74,*(undefined4 *)(param_1 + 0x2c),param_2,auStack_68);
      uStack_52 = *(undefined2 *)(param_3 + 4);
      uStack_54 = *(undefined2 *)(param_3 + 2);
      uStack_56 = 10;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_6c);
      DAT_12039a9c = (*pcVar1)(iStack_6c,*(undefined4 *)(param_1 + 0x2c),param_2,auStack_68);
    }
  }
  return local_70;
}


