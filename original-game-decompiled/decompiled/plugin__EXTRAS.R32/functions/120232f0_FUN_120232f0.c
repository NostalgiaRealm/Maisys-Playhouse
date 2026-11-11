
/* ==== FUN_120232f0 @ 120232f0 ==== 
 * signature: uint __cdecl FUN_120232f0(undefined4 param_1, int param_2)
 * body: 120232f0-120233d9
 */

uint __cdecl FUN_120232f0(undefined4 param_1,int param_2)

{
  uint in_EAX;
  code *pcVar1;
  int iVar2;
  short sVar3;
  int local_34;
  uint local_30;
  short asStack_2c [22];
  
  if (param_2 != 0) {
    local_30 = 0;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_34);
    sVar3 = 1;
    DAT_12039a9c = (*pcVar1)(local_34,param_2,&local_30);
    if (local_30 != 0) {
      do {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_34);
        iVar2 = (int)sVar3;
        sVar3 = sVar3 + 1;
        DAT_12039a9c = (*pcVar1)(local_34,param_2,iVar2,asStack_2c);
        FUN_12018a40(param_1,asStack_2c);
      } while ((uint)(int)sVar3 <= local_30);
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,1,&local_34);
    in_EAX = (*pcVar1)(local_34,param_2);
    DAT_12039a9c = in_EAX;
  }
  return in_EAX & 0xffff0000;
}


