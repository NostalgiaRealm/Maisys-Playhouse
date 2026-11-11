
/* ==== FUN_00475fb0 @ 00475fb0 ==== 
 * signature: undefined4 __cdecl FUN_00475fb0(int param_1)
 * body: 00475fb0-00476003
 */

undefined4 __cdecl FUN_00475fb0(int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x1a);
  iVar3 = *(int *)(param_1 + 0x16);
  if (*(int **)(iVar3 + 4) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(iVar3 + 4) + 0x10);
    iVar3 = (*pcVar2)();
    if (*(int *)(iVar3 + 0x82) != 0) {
      iVar3 = (*pcVar2)();
      iVar3 = FUN_00403490(*(void **)(iVar3 + 0x82),(int *)0x0,
                           *(int *)(*(int *)(param_1 + 0x16) + 8));
      *puVar1 = (char)iVar3;
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


