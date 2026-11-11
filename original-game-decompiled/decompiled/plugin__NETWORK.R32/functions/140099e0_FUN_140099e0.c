
/* ==== FUN_140099e0 @ 140099e0 ==== 
 * signature: uint __cdecl FUN_140099e0(undefined4 param_1)
 * body: 140099e0-14009a30
 */

uint __cdecl FUN_140099e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_14 = 0x10;
  iVar1 = (*DAT_14026428)(param_1,local_10,&local_14);
  if (iVar1 == -1) {
    uVar2 = (*DAT_14026410)();
    return (uVar2 == 0x2733) - 1 & uVar2;
  }
  (*DAT_14026420)(iVar1);
  return 0;
}


