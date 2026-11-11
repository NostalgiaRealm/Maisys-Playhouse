
/* ==== FUN_004359d0 @ 004359d0 ==== 
 * signature: int __stdcall FUN_004359d0(undefined4 param_1)
 * body: 004359d0-00435a2a
 */

int FUN_004359d0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char local_108 [259];
  char local_5;
  
  iVar3 = 1;
  iVar4 = 0;
  uVar2 = FUN_004375c0(param_1,1,local_108,&local_5);
  cVar1 = (char)uVar2;
  while (cVar1 != '\0') {
    if (local_5 != '\0') {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    uVar2 = FUN_004375c0(param_1,iVar3,local_108,&local_5);
    cVar1 = (char)uVar2;
  }
  return iVar4;
}


