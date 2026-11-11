
/* ==== __break @ 00442b29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b29-00442b29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


