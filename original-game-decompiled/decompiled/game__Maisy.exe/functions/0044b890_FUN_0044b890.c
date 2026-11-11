
/* ==== FUN_0044b890 @ 0044b890 ==== 
 * signature: undefined __thiscall FUN_0044b890(void * this, byte param_1)
 * body: 0044b890-0044b8a7
 */

void __thiscall FUN_0044b890(void *this,byte param_1)

{
  *(byte *)((int)this + 0x6a) =
       (param_1 ^ *(byte *)((int)this + 0x6a)) & 1 ^ *(byte *)((int)this + 0x6a);
  return;
}


