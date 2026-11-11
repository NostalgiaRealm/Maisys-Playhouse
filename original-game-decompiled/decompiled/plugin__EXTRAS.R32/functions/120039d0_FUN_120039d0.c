
/* ==== FUN_120039d0 @ 120039d0 ==== 
 * signature: undefined __thiscall FUN_120039d0(void * this, byte param_1, int param_2)
 * body: 120039d0-12003a65
 */

void __thiscall FUN_120039d0(void *this,byte param_1,int param_2)

{
  byte bVar1;
  char local_4 [4];
  
  if (param_2 < -0x32) {
    param_2 = -0x32;
  }
  else if (0x32 < param_2) {
    param_2 = 0x32;
  }
  local_4[1] = 10;
  local_4[2] = (char)(((param_2 + 100) * 0x80) / 200);
  if (0x7f < (byte)local_4[2]) {
    local_4[2] = 0x7f;
  }
  if (param_1 == 0) {
    bVar1 = 0;
    do {
      local_4[0] = bVar1 + 0xb0;
      bVar1 = bVar1 + 1;
      FUN_12016430(*(void **)this,local_4,3);
    } while (bVar1 < 0x10);
    return;
  }
  if (0x10 < param_1) {
    param_1 = 0x10;
  }
  local_4[0] = param_1 + 0xaf;
  FUN_12016430(*(void **)this,local_4,3);
  return;
}


