
/* ==== FUN_140229e0 @ 140229e0 ==== 
 * signature: DWORD __cdecl FUN_140229e0(uint param_1, LONG param_2, DWORD param_3)
 * body: 140229e0-14022a57
 */

DWORD __cdecl FUN_140229e0(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_14029f70) &&
     ((*(byte *)(*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    DVar1 = __lseek_lk(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
    return DVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return 0xffffffff;
}


