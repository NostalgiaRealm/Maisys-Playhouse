
/* ==== __break @ 00442b35 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b35-00442b35
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


