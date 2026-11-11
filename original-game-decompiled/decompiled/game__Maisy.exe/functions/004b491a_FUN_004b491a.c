
/* ==== FUN_004b491a @ 004b491a ==== 
 * signature: undefined4 __stdcall FUN_004b491a(byte * param_1, int param_2, undefined4 * param_3)
 * body: 004b491a-004b49c5
 */

undefined4 FUN_004b491a(byte *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_2 + 1);
  bVar2 = false;
  if (*pcVar5 == 'l') {
    pcVar5 = (char *)(param_2 + 2);
  }
  else if (*pcVar5 == 's') {
    bVar2 = true;
    pcVar5 = (char *)(param_2 + 2);
  }
  for (; (*param_1 == 0x20 || (*param_1 == 9)); param_1 = param_1 + 1) {
  }
  bVar1 = *param_1;
  if (*pcVar5 == 'd') {
    iVar3 = FUN_00490a80(param_1,&param_1,10);
  }
  else {
    iVar3 = FUN_00490cf0(param_1,&param_1,10);
  }
  if ((iVar3 == 0) && (bVar1 != 0x30)) {
    uVar4 = 0;
  }
  else {
    for (; (*param_1 == 0x20 || (*param_1 == 9)); param_1 = param_1 + 1) {
    }
    if (*param_1 == 0) {
      if (bVar2) {
        if ((short)iVar3 != iVar3) {
          return 0;
        }
        *(short *)*param_3 = (short)iVar3;
      }
      else {
        *(int *)*param_3 = iVar3;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


