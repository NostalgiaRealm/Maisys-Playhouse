
/* ==== FUN_12033110 @ 12033110 ==== 
 * signature: DWORD __cdecl FUN_12033110(uint param_1, LONG param_2, DWORD param_3)
 * body: 12033110-12033187
 */

DWORD __cdecl FUN_12033110(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_1203abf0) &&
     ((*(byte *)(*(int *)((int)&DAT_1203aaf0 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    DVar1 = __lseek_lk(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
    return DVar1;
  }
  piVar2 = FUN_1202efa0();
  *piVar2 = 9;
  puVar3 = FUN_1202efb0();
  *puVar3 = 0;
  return 0xffffffff;
}


