
/* ==== FUN_11010a40 @ 11010a40 ==== 
 * signature: undefined4 __cdecl FUN_11010a40(undefined4 * param_1, int param_2)
 * body: 11010a40-11010aec
 */

undefined4 __cdecl FUN_11010a40(undefined4 *param_1,int param_2)

{
  uint in_EAX;
  HGLOBAL pvVar1;
  
  if ((*(byte *)(param_2 + 0x54) & 1) == 0) {
    return in_EAX & 0xffffff00;
  }
  *(byte *)(param_2 + 0x54) = *(byte *)(param_2 + 0x54) & 0xfe;
  if ((*(short *)(param_2 + 0x1c) == 1) && (*(int *)(param_2 + 0xc) != 0xca)) {
    FUN_11010bb0(param_1,param_2,0xdf,0,'\x01');
  }
  FUN_11010bb0(param_1,param_2,0x1f8,0,'\0');
  FUN_11004840(param_1,10,0);
  FUN_11004840(param_1,3,0);
  if (*(LPVOID *)(param_2 + 0x48) != (LPVOID)0x0) {
    FUN_11029180(*(LPVOID *)(param_2 + 0x48));
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  pvVar1 = (HGLOBAL)0x0;
  if (*(HGLOBAL *)(param_2 + 0x4c) != (HGLOBAL)0x0) {
    pvVar1 = GlobalFree(*(HGLOBAL *)(param_2 + 0x4c));
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
  }
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


