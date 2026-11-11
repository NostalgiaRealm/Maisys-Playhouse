
/* ==== FUN_110143e0 @ 110143e0 ==== 
 * signature: undefined __cdecl FUN_110143e0(undefined4 param_1, int param_2, undefined * param_3, undefined4 param_4)
 * body: 110143e0-11014467
 */

void __cdecl FUN_110143e0(undefined4 param_1,int param_2,undefined *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (param_3 != (undefined *)0x0)) {
    uVar3 = FUN_11013ee0(param_2);
    if ((char)uVar3 == '\0') {
      FUN_11013e60();
    }
    iVar4 = *(int *)(param_2 + 0x10);
    iVar1 = *(int *)(param_2 + 8);
    iVar5 = 0;
    cVar2 = '\x01';
    if (0 < iVar1) {
      do {
        if (cVar2 == '\0') break;
        iVar5 = iVar5 + 1;
        cVar2 = (*(code *)param_3)(param_1,param_2,iVar4,param_4);
        iVar4 = iVar4 + *(short *)(iVar4 + 4);
      } while (iVar5 < iVar1);
    }
    if ((char)uVar3 == '\0') {
      FUN_11013e70();
    }
  }
  return;
}


