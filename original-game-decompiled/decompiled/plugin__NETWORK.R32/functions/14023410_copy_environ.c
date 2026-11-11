
/* ==== copy_environ @ 14023410 ==== 
 * signature: undefined4 * __cdecl copy_environ(int * param_1)
 * body: 14023410-1402347d
 * note: Library Function - Single Match  _copy_environ  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 1998 Release */

undefined4 * __cdecl copy_environ(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  
  puVar4 = (undefined4 *)0x0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar6 = param_1;
    while (iVar1 != 0) {
      piVar6 = piVar6 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar1 = *piVar6;
    }
    puVar4 = (undefined4 *)FUN_1401def0((int)puVar4 * 4 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    iVar1 = *param_1;
    puVar3 = puVar4;
    while (iVar1 != 0) {
      pcVar2 = (char *)*param_1;
      param_1 = param_1 + 1;
      uVar5 = FUN_140235b0(pcVar2);
      *puVar3 = uVar5;
      puVar3 = puVar3 + 1;
      iVar1 = *param_1;
    }
    *puVar3 = 0;
  }
  return puVar4;
}


