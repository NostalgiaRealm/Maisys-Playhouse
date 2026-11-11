
/* ==== FUN_14012660 @ 14012660 ==== 
 * signature: undefined4 __cdecl FUN_14012660(short param_1, undefined4 param_2)
 * body: 14012660-14012741
 */

undefined4 __cdecl FUN_14012660(short param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_10c;
  int iStack_108;
  int iStack_104;
  undefined1 local_100 [256];
  
  uVar1 = FUN_140123c0(0x14026b00,local_100,(int)param_1);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_10c);
    DAT_14028e48 = (*pcVar2)(local_10c,param_2,s_HTTP_1_0_14026b1c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_108);
    DAT_14028e48 = (*pcVar2)(iStack_108,param_2,local_100);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_104);
    DAT_14028e48 = (*pcVar2)(iStack_104,param_2,&DAT_14026b18);
    return CONCAT31((int3)((uint)DAT_14028e48 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


