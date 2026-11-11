
/* ==== FUN_00442e50 @ 00442e50 ==== 
 * signature: undefined __cdecl FUN_00442e50(int param_1)
 * body: 00442e50-00442ec2
 */

void __cdecl FUN_00442e50(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1 * 0x1a;
  pcVar2 = GlobalFree_exref;
  if (*(HGLOBAL *)(&DAT_004db7ae + param_1 * 0x1a) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)(&DAT_004db7ae + param_1 * 0x1a));
    pcVar2 = GlobalFree_exref;
    GlobalFree(*(HGLOBAL *)(&DAT_004db7ae + iVar1));
    *(undefined4 *)(&DAT_004db7ae + iVar1) = 0;
  }
  if (*(HGLOBAL *)(&DAT_004db7b6 + iVar1) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)(&DAT_004db7b6 + iVar1));
    (*pcVar2)(*(undefined4 *)(&DAT_004db7b6 + iVar1));
    *(undefined4 *)(&DAT_004db7b6 + iVar1) = 0;
  }
  return;
}


