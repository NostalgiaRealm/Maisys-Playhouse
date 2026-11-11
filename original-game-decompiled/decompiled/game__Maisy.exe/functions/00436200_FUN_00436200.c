
/* ==== FUN_00436200 @ 00436200 ==== 
 * signature: undefined __thiscall FUN_00436200(void * this, int param_1)
 * body: 00436200-0043622e
 */

void __thiscall FUN_00436200(void *this,int param_1)

{
  GetProcAddress(*(HMODULE *)((int)this + *(short *)(param_1 + 0x4c) * 0x124 + 0x130),
                 (LPCSTR)(uint)(ushort)(*(short *)(param_1 + 0x4e) + 1));
  return;
}


