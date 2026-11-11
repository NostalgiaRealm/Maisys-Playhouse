
/* ==== __break @ 00442b39 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b39-00442b39
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


