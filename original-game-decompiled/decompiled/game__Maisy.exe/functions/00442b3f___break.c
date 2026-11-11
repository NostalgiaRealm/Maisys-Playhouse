
/* ==== __break @ 00442b3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b3f-00442b3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


