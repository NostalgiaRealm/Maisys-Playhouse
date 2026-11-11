
/* ==== __break @ 00442b3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b3d-00442b3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


