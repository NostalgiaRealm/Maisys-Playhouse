
/* ==== FUN_120089c0 @ 120089c0 ==== 
 * signature: undefined4 __stdcall FUN_120089c0(void)
 * body: 120089c0-120089df
 */

undefined4 FUN_120089c0(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  
  pcVar2 = s_mPlayer_File___MPL____mpl__12037324;
  puVar3 = &local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  return 0;
}


