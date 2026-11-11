
/* ==== FUN_14007e80 @ 14007e80 ==== 
 * signature: undefined4 __cdecl FUN_14007e80(uint * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 14007e80-14008045
 */

undefined4 __cdecl
FUN_14007e80(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int local_470;
  int iStack_46c;
  int iStack_468;
  undefined1 auStack_464 [4];
  int iStack_460;
  int iStack_45c;
  int iStack_458;
  uint local_454 [2];
  undefined4 uStack_44c;
  undefined1 auStack_42e [46];
  undefined1 local_400 [1024];
  
  local_400[0] = 0;
  iVar1 = FUN_140157b0((int)param_1,*param_1,param_2,local_454,local_400);
  if (iVar1 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_470);
    DAT_14028e48 = (*pcVar2)(local_470,0xffffffff,param_1 + 0x138);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_46c);
    DAT_14028e48 = (*pcVar2)(iStack_46c,auStack_464,param_5 + 0x36);
    FUN_14008ed0(0,(undefined2 *)(param_1 + 0x138),param_5 + 0x36);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_468);
    DAT_14028e48 = (*pcVar2)(iStack_468,0xffffffff,(undefined2 *)((int)param_1 + 0x4f2));
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_460);
    DAT_14028e48 = (*pcVar2)(iStack_460,auStack_464,local_400);
    FUN_14008ed0(0,(undefined2 *)((int)param_1 + 0x4f2),(int)local_400);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_45c);
    DAT_14028e48 = (*pcVar2)(iStack_45c,uStack_44c,local_454);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_458);
    DAT_14028e48 = (*pcVar2)(iStack_458,param_1,auStack_42e);
  }
  return 0;
}


