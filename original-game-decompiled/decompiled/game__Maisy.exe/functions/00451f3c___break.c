
/* ==== __break @ 00451f3c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f3c-00451f3c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


