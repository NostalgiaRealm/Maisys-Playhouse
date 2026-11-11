
/* ==== FUN_0044cc20 @ 0044cc20 ==== 
 * signature: undefined __cdecl FUN_0044cc20(undefined4 param_1)
 * body: 0044cc20-0044cc63
 */

void __cdecl FUN_0044cc20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_00434920(DAT_004d99ac,8,0);
  iVar2 = (int)DAT_004dbb0c;
  *puVar3 = param_1;
  puVar3[1] = 0;
  if (iVar2 == 0) {
    DAT_004dbb0c = puVar3;
    return;
  }
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    iVar1 = *(int *)(iVar2 + 4);
  }
  *(undefined4 **)(iVar2 + 4) = puVar3;
  return;
}


